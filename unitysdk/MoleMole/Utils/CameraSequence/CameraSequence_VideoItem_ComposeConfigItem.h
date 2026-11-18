#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_VideoItem_ComposeConfigItem_TypeDefinitionIndex = 62609;

	struct alignas(8) CameraSequence_VideoItem_ComposeConfigItem
	{
		::System::String* Tag; // 0x10
		::System::Boolean isWarmupMode; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Object*>* warmupVideos; // 0x20
		::Il2CppArray<::MoleMole::ELocalPlayType>* applyPlayType; // 0x28
		::System::Boolean IsPityDefault; // 0x30
		::System::Boolean isSplitVideo; // 0x31
	};
}
