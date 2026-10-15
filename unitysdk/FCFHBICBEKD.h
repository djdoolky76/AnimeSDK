#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialB51RacingGameButtonType.h"
class FCFHBICBEKD;
class FCOEMCEDLNL;

#define FCFHBICBEKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCFF10)
#define FCFHBICBEKD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDCFF20)
#define FCFHBICBEKD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDCFEE0)

	class FCFHBICBEKD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialB51RacingGameButtonType PGOHOFMMIAJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFHBICBEKD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FCFHBICBEKD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FCFHBICBEKD*))((::PBYTE)hIl2Cpp + FCFHBICBEKD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FCFHBICBEKD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FCFHBICBEKD*))((::PBYTE)hIl2Cpp + FCFHBICBEKD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
