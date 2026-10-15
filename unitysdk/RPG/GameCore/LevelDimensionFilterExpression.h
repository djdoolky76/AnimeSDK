#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelDimensionFilterExpression; }

#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A9B10)
#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A9D90)
#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A9B20)

namespace RPG::GameCore
{
	class LevelDimensionFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelDimensionFilterExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelDimensionFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelDimensionFilterExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelDimensionFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
