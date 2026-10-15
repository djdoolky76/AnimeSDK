#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenRequireStatGrade; }

#define RPG_GAMECORE_HIPPLENREQUIRESTATGRADE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D741D90)
#define RPG_GAMECORE_HIPPLENREQUIRESTATGRADE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73EE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenRequireStatGrade_TypeDefinitionIndex = 16787;

	class HipplenRequireStatGrade : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenStatType StateType; // 0x10
		::RPG::GameCore::HipplenStatGradeType RequireGrade; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENREQUIRESTATGRADE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenRequireStatGrade* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenRequireStatGrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENREQUIRESTATGRADE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
