#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebateUIType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DebateInitialize; }
namespace RPG::GameCore { class DebateTestimonySetting; }
namespace System { class String; }

#define RPG_GAMECORE_DEBATEINITIALIZE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F55C0)
#define RPG_GAMECORE_DEBATEINITIALIZE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5F55D0)
#define RPG_GAMECORE_DEBATEINITIALIZE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F5580)

namespace RPG::GameCore
{
	class DebateInitialize : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TestimonyTimelinePath; // 0x18
		::System::Boolean CanFail; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 FailChangce; // 0x24
		::System::String* FailCustomString; // 0x28
		::System::Boolean ShowStartToast; // 0x30
		::System::Byte _padding1[0x7];
		::Il2CppArray<::RPG::GameCore::DebateTestimonySetting*>* TestimonySettingList; // 0x38
		::RPG::GameCore::DebateUIType UIType; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATEINITIALIZE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebateInitialize* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebateInitialize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATEINITIALIZE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebateInitialize* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebateInitialize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATEINITIALIZE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
