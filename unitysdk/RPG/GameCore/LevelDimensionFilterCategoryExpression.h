#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelDimensionCategory.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExprListCompareType.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExpression.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelDimensionFilterCategoryExpression; }

#define RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A99B0)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A99C0)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A9960)

namespace RPG::GameCore
{
	class LevelDimensionFilterCategoryExpression : public ::RPG::GameCore::LevelDimensionFilterExpression
	{
	public:
		::RPG::GameCore::LevelDimensionFilterExprListCompareType Operation; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LevelDimensionCategory>* CategoryList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelDimensionFilterCategoryExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelDimensionFilterCategoryExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelDimensionFilterCategoryExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelDimensionFilterCategoryExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
