#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenMiniGameGradeConfig; }

#define RPG_GAMECORE_HIPPLENMINIGAMEGRADECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76E650)
#define RPG_GAMECORE_HIPPLENMINIGAMEGRADECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76E520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMiniGameGradeConfig_TypeDefinitionIndex = 16786;

	class HipplenMiniGameGradeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenGameGradeType Grade; // 0x10
		::System::UInt32 RequireTimes; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMEGRADECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenMiniGameGradeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenMiniGameGradeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMEGRADECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
