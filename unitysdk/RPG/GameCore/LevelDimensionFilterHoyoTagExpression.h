#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagEvalType.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExpression.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelDimensionFilterHoyoTagExpression; }

#define RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77C370)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D77C380)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77C610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterHoyoTagExpression_TypeDefinitionIndex = 17198;

	class LevelDimensionFilterHoyoTagExpression : public ::RPG::GameCore::LevelDimensionFilterExpression
	{
	public:
		::RPG::GameCore::HoyoTagEvalType TagEvalType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::HoyoTagContainer* MatchTagContainer; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
