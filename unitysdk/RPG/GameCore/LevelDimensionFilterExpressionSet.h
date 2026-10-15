#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelDimensionFilterExpression; }
namespace RPG::GameCore { class LevelDimensionFilterExpressionSet; }

#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSIONSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77C600)
#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSIONSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77BD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterExpressionSet_TypeDefinitionIndex = 17199;

	class LevelDimensionFilterExpressionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelDimensionFilterExpression*>* ExpressionList; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSIONSET_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelDimensionFilterExpressionSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelDimensionFilterExpressionSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSIONSET_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
