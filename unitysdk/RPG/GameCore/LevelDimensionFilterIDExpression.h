#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExprListCompareType.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExpression.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelDimensionFilterIDExpression; }

#define RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A9F20)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A9F30)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7AA0E0)

namespace RPG::GameCore
{
	class LevelDimensionFilterIDExpression : public ::RPG::GameCore::LevelDimensionFilterExpression
	{
	public:
		::RPG::GameCore::LevelDimensionFilterExprListCompareType Operation; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* DimensionIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelDimensionFilterIDExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelDimensionFilterIDExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelDimensionFilterIDExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelDimensionFilterIDExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
