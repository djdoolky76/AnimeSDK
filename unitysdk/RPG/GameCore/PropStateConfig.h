#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropBuildinBehavior.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D958D40)
#define RPG_GAMECORE_PROPSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D958920)

namespace RPG::GameCore
{
	class PropStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropState State; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AnimName; // 0x18
		::System::String* EffectAnimName; // 0x20
		::RPG::GameCore::PropBuildinBehavior Behavior; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* ButtonIcon; // 0x30
		::RPG::Client::TextID ButtonText; // 0x38
		::System::Boolean EnableHintEffect; // 0x48
		::System::Boolean CanPlayerLock; // 0x49
		::System::Byte _padding2[0x6];
		::Il2CppArray<::System::String*>* UnlockableAnimStates; // 0x50
		::System::Boolean EnableBillboard; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
