#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NPCStreamingProxy_StreamingState_TypeDefinitionIndex = 91826;

enum class NPCStreamingProxy_StreamingState : ::System::Byte
{
	Loaded = 2,
	Loading = 1,
	Unloaded = 0,
};
