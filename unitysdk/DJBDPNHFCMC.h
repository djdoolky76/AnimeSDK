#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DJBDPNHFCMC;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }

#define DJBDPNHFCMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD29AC0)
#define DJBDPNHFCMC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD29AD0)
#define DJBDPNHFCMC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD29A90)

	class DJBDPNHFCMC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PAHHNMLMNLN; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CMNGOEAKKEI; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OFCDELJJMNP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBDPNHFCMC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DJBDPNHFCMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DJBDPNHFCMC*))((::PBYTE)hIl2Cpp + DJBDPNHFCMC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DJBDPNHFCMC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DJBDPNHFCMC*))((::PBYTE)hIl2Cpp + DJBDPNHFCMC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
