#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleBySealCount; }

#define RPG_GAMECORE_MARBLEBYSEALCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80D560)
#define RPG_GAMECORE_MARBLEBYSEALCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D80D570)
#define RPG_GAMECORE_MARBLEBYSEALCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D80D510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBySealCount_TypeDefinitionIndex = 16888;

	class MarbleBySealCount : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::UInt32 SealId; // 0x28
		::RPG::GameCore::MarbleCompare CompareType; // 0x2C
		::System::Int32 Value; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSEALCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleBySealCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleBySealCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSEALCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleBySealCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleBySealCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYSEALCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
