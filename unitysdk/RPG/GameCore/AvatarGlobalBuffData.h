#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AvatarGlobalBuffConfigRow; }
namespace RPG::GameCore { class MazeBuffData; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarGlobalBuffData_TypeDefinitionIndex = 57601;

	struct alignas(8) AvatarGlobalBuffData
	{
		::System::UInt32 BuffID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::MazeBuffData* MazeBuff; // 0x18
		::RPG::GameCore::AvatarGlobalBuffConfigRow* GlobalBuff; // 0x20
		::System::Boolean IsActive; // 0x28
		::System::Byte _padding1[0x3];
		::System::Int32 LeftCount; // 0x2C
	};
}
