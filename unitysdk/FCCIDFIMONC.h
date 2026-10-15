#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCCIDFIMONC;
class FCOEMCEDLNL;

#define FCCIDFIMONC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCFD90)
#define FCCIDFIMONC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDCFDA0)
#define FCCIDFIMONC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDCFD60)

	class FCCIDFIMONC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean NMMJBGFDNAI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCCIDFIMONC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FCCIDFIMONC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FCCIDFIMONC*))((::PBYTE)hIl2Cpp + FCCIDFIMONC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FCCIDFIMONC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FCCIDFIMONC*))((::PBYTE)hIl2Cpp + FCCIDFIMONC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
