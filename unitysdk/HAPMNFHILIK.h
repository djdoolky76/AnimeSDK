#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HAPMNFHILIK;
namespace RPG::GameCore { class FateRinCaseBoardMoveBaseInfo; }

#define HAPMNFHILIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D5E10)
#define HAPMNFHILIK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9D5E20)
#define HAPMNFHILIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9D5DE0)

inline static constexpr unsigned int HAPMNFHILIK_TypeDefinitionIndex = 20250;

	class HAPMNFHILIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateRinCaseBoardMoveBaseInfo* OOPCPMANCBO; // 0x18
		::RPG::GameCore::FateRinCaseBoardTeamType JCDIEKGKCPP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPMNFHILIK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HAPMNFHILIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HAPMNFHILIK*))((::PBYTE)hIl2Cpp + HAPMNFHILIK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HAPMNFHILIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HAPMNFHILIK*))((::PBYTE)hIl2Cpp + HAPMNFHILIK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
