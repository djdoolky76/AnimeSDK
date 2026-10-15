#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DABPPOPGJLL;
class FCOEMCEDLNL;

#define DABPPOPGJLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC5D00)
#define DABPPOPGJLL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCC5D10)
#define DABPPOPGJLL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCC5CD0)

	class DABPPOPGJLL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AttackType HBEANJNDDMC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABPPOPGJLL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DABPPOPGJLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DABPPOPGJLL*))((::PBYTE)hIl2Cpp + DABPPOPGJLL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DABPPOPGJLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DABPPOPGJLL*))((::PBYTE)hIl2Cpp + DABPPOPGJLL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
