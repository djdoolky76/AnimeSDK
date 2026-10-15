#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByCompareValue; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEBYCOMPAREVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8394E0)
#define RPG_GAMECORE_MARBLEBYCOMPAREVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8394F0)
#define RPG_GAMECORE_MARBLEBYCOMPAREVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D839490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareValue_TypeDefinitionIndex = 16882;

	class MarbleByCompareValue : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::RPG::GameCore::MarbleValue ValueType; // 0x2C
		::RPG::GameCore::MarbleCompare CompareType; // 0x30
		::System::Int32 Value; // 0x34
		::System::String* ValueDynamic; // 0x38
		::RPG::GameCore::MarbleValue CompareValueType; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCompareValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCompareValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCompareValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCompareValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
