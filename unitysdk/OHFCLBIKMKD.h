#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OHFCLBIKMKD;

#define OHFCLBIKMKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D277590)
#define OHFCLBIKMKD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2775A0)
#define OHFCLBIKMKD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D277560)

	class OHFCLBIKMKD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean KKJLMNLCMBK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFCLBIKMKD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OHFCLBIKMKD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHFCLBIKMKD*))((::PBYTE)hIl2Cpp + OHFCLBIKMKD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OHFCLBIKMKD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHFCLBIKMKD*))((::PBYTE)hIl2Cpp + OHFCLBIKMKD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
