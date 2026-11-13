#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/MonsterRowData.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JCAIDCKHNEH;
namespace RPG::GameCore { class AetherDivideMonsterRow; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class StageRow; }

#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x19FFD900)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0x19FFD960)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_MONSTERTYPE_OFFSET UNITYSDK_OFFSET(0x19FFD970)
#define RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x19FFD9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideMonsterRowData_TypeDefinitionIndex = 58162;

	class AetherDivideMonsterRowData : public ::RPG::GameCore::MonsterRowData
	{
	public:
		::RPG::GameCore::AetherDivideMonsterRow* _AetherDivideExpandRow; // 0x130
		::System::Boolean _ExpandValid; // 0x138
		::System::Void _ctor(::RPG::GameCore::MonsterRow* a1, ::JCAIDCKHNEH* a2, ::RPG::GameCore::StageRow* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*, ::JCAIDCKHNEH*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsAetherDivide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_ISAETHERDIVIDE_OFFSET))(this);
		}

		::RPG::GameCore::AetherSpiritType get_MonsterType()
		{
			return ((::RPG::GameCore::AetherSpiritType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_MONSTERTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEMONSTERROWDATA_GET_SPNEED_OFFSET))(this);
		}

	};
}
