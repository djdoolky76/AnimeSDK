#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAILinearItem; }

#define RPG_GAMECORE_COMPLEXSKILLAILINEARITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A0DA0)
#define RPG_GAMECORE_COMPLEXSKILLAILINEARITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A0B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAILinearItem_TypeDefinitionIndex = 15556;

	class ComplexSkillAILinearItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint xmin; // 0x10
		::RPG::GameCore::FixPoint ymin; // 0x18
		::RPG::GameCore::FixPoint xmax; // 0x20
		::RPG::GameCore::FixPoint ymax; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAILINEARITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAILinearItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAILinearItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAILINEARITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
