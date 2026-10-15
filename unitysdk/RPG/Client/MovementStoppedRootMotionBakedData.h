#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
namespace RPG::Client { class MovementStoppedRootMotionBakedData_OAKCINDCPAJ; }
namespace System { class Object; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int MovementStoppedRootMotionBakedData_TypeDefinitionIndex = 68814;

	struct alignas(8) MovementStoppedRootMotionBakedData
	{
		::System::String* startStateName; // 0x10
		::System::String* finishStateName; // 0x18
		::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ* Info; // 0x20
		::RPG::GameCore::CharacterMotionFlag motionFlag; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* rootMotionCurves; // 0x30
	};
}
