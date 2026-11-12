#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarServantRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSERVANTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E644530)
#define RPG_GAMECORE_AVATARSERVANTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E642A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantRow_TypeDefinitionIndex = 12875;

	class AvatarServantRow : public ::System::Object
	{
	public:
		::System::String* UnCreateHeadIconPath; // 0x10
		::System::String* ActionServantHeadIconPath; // 0x18
		::System::String* ServantSideIconPath; // 0x20
		::System::String* SpeedInherit; // 0x28
		::System::String* ManikinJsonPath; // 0x30
		::System::String* HPInherit; // 0x38
		::System::String* AIPath; // 0x40
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x48
		::System::String* SpeedBase; // 0x50
		::System::String* HPBase; // 0x58
		::System::String* UIServantModelPath; // 0x60
		::System::String* Config; // 0x68
		::System::String* ServantMiniIconPath; // 0x70
		::System::String* HeadIcon; // 0x78
		::System::String* WaitingServantHeadIconPath; // 0x80
		::System::String* Prefab; // 0x88
		::RPG::Client::TextID ServantName; // 0x90
		::RPG::GameCore::FixPoint Aggro; // 0xA0
		::System::UInt32 ServantID; // 0xA8
		::System::UInt32 SpeedSkill; // 0xAC
		::System::UInt32 HPSkill; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarServantRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarServantRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
