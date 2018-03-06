#ifndef DC_HANSBURG

    // *****Configuration*****
    //
    // These are the attributes you will use to configure the auxiliary
    // jumping system.

    // This is the maximum height the jumping system allows. Auxiliary
    // jump commands will be ignored until the entity falls back below maximum
    // height. This is to stop characters from climbing or jumping beyond the
    // design boundaries of your stage and possibly getting stuck. You can use
    // any value you like. Note you can temporarily override this setting by
    // using the dc_hansburg_set_max_height() command.
    #define DC_HANSBURG_MAXIMUM_HEIGHT              openborvariant("hResolution") * 1.25    // Maximum height to allow auxiliary jumps.

    // These are the auxiliary jumping animations. Settings here are module wide.
    // For example, whatever animation you set for double jumping here must be used
    // by every model you want to have double jumping capability. If a model does not
    // have one of these animations, then it simply does not have the associated
    // jumping capability. You can mix and match how you like. In other words, a model
    // might not have a wall jump, but could still have double jumping. Another model
    // might only have double jumping, and yet another might have everything.

    // Note that if you like you may also re-use animation definitions. For example, you
    // could define the same animation here for the start-up of obstacle jumping, wall
    // jumping, and edge jumping. Then adding that single animation to a model would
    // give it all those types of auxiliary jumping.
    #define DC_HANSBURG_ANI_JUMP_DOUBLE_NEUTRAL     openborconstant("ANI_FOLLOW42")     // Double jumping animation.
    #define DC_HANSBURG_ANI_JUMP_DOUBLE_BACK        openborconstant("ANI_FOLLOW44")     // Double jumping backward animation.
    #define DC_HANSBURG_ANI_JUMP_DOUBLE_FORWARD     openborconstant("ANI_FOLLOW43")     // Double jumping forward animation.
    #define DC_HANSBURG_ANI_JUMP_EDGE               openborconstant("ANI_FOLLOW41")     // Screen edge jumping animation.
    #define DC_HANSBURG_ANI_JUMP_EDGE_START         openborconstant("ANI_FOLLOW40")     // Screen edge prepping to jump animation. The range of this animation is used to detect screen edges
    #define DC_HANSBURG_ANI_JUMP_OBJECT             openborconstant("ANI_FOLLOW41")     // Obstacle jumping animation.
    #define DC_HANSBURG_ANI_JUMP_OBJECT_START       openborconstant("ANI_FOLLOW40")     // Obstacle prepping to jump animation. The range of this animation is used to detect objects.
    #define DC_HANSBURG_ANI_JUMP_WALL               openborconstant("ANI_FOLLOW41")     // Wall jump animation.
    #define DC_HANSBURG_ANI_JUMP_WALL_START         openborconstant("ANI_FOLLOW40")     // Wall prepping to jump animation.   The range of this animation is used to detect walls.

    //*****End User Settings.*****
    //
    // Leave the rest of these alone unless you really
    // know what you're doing.

    #define DC_HANSBURG_JUMP                        1

    // Control flags
    #define DC_HANSBURG_TIME_INFINITE               -1                                  // True.

    // System direction flags.
    #define DC_HANSBURG_DIRECTION_LEFT	            0                                   // Left.
    #define DC_HANSBURG_DIRECTION_RIGHT             1                                   // Right.

    // Variable keys.
    #define DC_HANSBURG_VAR_KEY_DISABLE             "dchansburg_0"                      // Disable auxiliary jumping.
    #define DC_HANSBURG_VAR_KEY_ENTITY              "dchansburg_1"                      // Entity.
    #define DC_HANSBURG_VAR_KEY_KEY_HOLD            "dchansburg_2"                      // Key hold.
    #define DC_HANSBURG_VAR_KEY_KEY_PRESS           "dchansburg_3"                      // Key press.
    #define DC_HANSBURG_VAR_KEY_MAX_HEIGHT          "dchansburg_4"                      // Temporary maximum height.

    // System animations.
    #define DC_HANSBURG_ANI_JUMP                    openborconstant("ANI_JUMP")         // Jumping animation.
    #define DC_HANSBURG_ANI_JUMP_RUN                openborconstant("ANI_RUNJUMP")      // Running jump animation.
    #define DC_HANSBURG_ANI_JUMP_WALK               openborconstant("ANI_FORWARDJUMP")  // Moving jump animation.

    // System variable types.
    #define DC_HANSBURG_VT_EMPTY                    openborconstant("VT_EMPTY")         // Empty (NULL).
    #define DC_HANSBURG_VT_FLOAT                    openborconstant("VT_DECIMAL")       // Floating decimal.
    #define DC_HANSBURG_VT_INTEGER                  openborconstant("VT_INTEGER")       // Integer.
    #define DC_HANSBURG_VT_POINTER                  openborconstant("VT_PTR")           // Pointer.
    #define DC_HANSBURG_VT_STRING                   openborconstant("VT_STRING")        // String.

    // Forward/Backward command status in relation to facing.
    #define DC_HANSBURG_KEY_MOVE_HORIZONTAL_BACK    1                                   // Back.
    #define DC_HANSBURG_KEY_MOVE_HORIZONTAL_FORWARD 2                                   // Forward.
    #define DC_HANSBURG_KEY_MOVE_HORIZONTAL_NEUTRAL 3                                   // None.

#endif


