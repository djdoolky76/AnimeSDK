#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class EEHPNCLKDJH;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define EEHPNCLKDJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD75DD0)
#define EEHPNCLKDJH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD75DE0)
#define EEHPNCLKDJH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD75D90)

	class EEHPNCLKDJH : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CMIFLIMCPBO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHPNCLKDJH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EEHPNCLKDJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEHPNCLKDJH*))((::PBYTE)hIl2Cpp + EEHPNCLKDJH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EEHPNCLKDJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEHPNCLKDJH*))((::PBYTE)hIl2Cpp + EEHPNCLKDJH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
