#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MNGOILBPHNG;

#define MNGOILBPHNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D6720)
#define MNGOILBPHNG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1D6730)
#define MNGOILBPHNG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1D66F0)

	class MNGOILBPHNG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AttackType LEOAGAFACAD; // 0x18
		::RPG::GameCore::AttackType HBEANJNDDMC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGOILBPHNG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MNGOILBPHNG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MNGOILBPHNG*))((::PBYTE)hIl2Cpp + MNGOILBPHNG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MNGOILBPHNG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MNGOILBPHNG*))((::PBYTE)hIl2Cpp + MNGOILBPHNG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
