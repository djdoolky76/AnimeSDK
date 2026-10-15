#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvCreateGroupEntity; }

#define RPG_GAMECORE_ADVCREATEGROUPENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39A8C0)
#define RPG_GAMECORE_ADVCREATEGROUPENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39A8D0)
#define RPG_GAMECORE_ADVCREATEGROUPENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39A890)

namespace RPG::GameCore
{
	class AdvCreateGroupEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsOverrideArtModelOffset; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::MVector3 OverrideArtModelOffset; // 0x1C
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x28
		::System::Boolean SkipCreated; // 0x30
		::System::Byte _padding1[0x3];
		::System::UInt32 GroupID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCreateGroupEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCreateGroupEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCreateGroupEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCreateGroupEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
