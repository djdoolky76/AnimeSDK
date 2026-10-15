#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODStreamingLayer_1_HLODTransitionEnterRequest_TypeDefinitionIndex = 73824;

	template <typename T>
	struct alignas(8) SceneItemHLODStreamingLayer_1_HLODTransitionEnterRequest
	{
		::System::Object* Kind; // 0x0
		::System::Boolean ForceProxyEnable; // 0x0
		::System::Boolean DisableProxyOnEnter; // 0x0
	};
}
