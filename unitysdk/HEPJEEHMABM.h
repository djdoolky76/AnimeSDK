#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HEPJEEHMABM;

#define HEPJEEHMABM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9C590)
#define HEPJEEHMABM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE9C5A0)
#define HEPJEEHMABM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE9C560)

	class HEPJEEHMABM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PFDHNIJBGKO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPJEEHMABM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HEPJEEHMABM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HEPJEEHMABM*))((::PBYTE)hIl2Cpp + HEPJEEHMABM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HEPJEEHMABM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HEPJEEHMABM*))((::PBYTE)hIl2Cpp + HEPJEEHMABM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
