#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelRegionStateCondition; }
namespace RPG::GameCore { class LevelRegionStateConditionSet; }

#define RPG_GAMECORE_LEVELREGIONSTATECONDITIONSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79E9C0)
#define RPG_GAMECORE_LEVELREGIONSTATECONDITIONSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D79E890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionStateConditionSet_TypeDefinitionIndex = 17384;

	class LevelRegionStateConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelRegionStateCondition*>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITIONSET_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelRegionStateConditionSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelRegionStateConditionSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITIONSET_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
