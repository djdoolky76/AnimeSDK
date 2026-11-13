#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AvatarGlobalBuffConfigRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_AVATARGLOBALBUFFDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C47E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGlobalBuffDisplayData_TypeDefinitionIndex = 64187;

	class AvatarGlobalBuffDisplayData : public ::System::Object
	{
	public:
		::RPG::GameCore::MazeBuffRow* MazeBuff; // 0x10
		::RPG::AvatarSystem::IAvatar* ObtainedAvatar; // 0x18
		::RPG::GameCore::AvatarGlobalBuffConfigRow* GlobalBuffConfig; // 0x20
		::RPG::AvatarSystem::IAvatar* GlobalBuffProvider; // 0x28
		::System::String* AvatarName; // 0x30
		::System::String* AvatarIconPath; // 0x38
		::System::UInt32 AvatarID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGLOBALBUFFDISPLAYDATA_CTOR_OFFSET))(this);
		}

	};
}
