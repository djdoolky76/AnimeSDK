#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByCompareScore; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEBYCOMPARESCORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D838E20)
#define RPG_GAMECORE_MARBLEBYCOMPARESCORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D838E30)
#define RPG_GAMECORE_MARBLEBYCOMPARESCORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D838DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareScore_TypeDefinitionIndex = 16895;

	class MarbleByCompareScore : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Boolean ActionScore; // 0x28
		::System::Boolean RoundScore; // 0x29
		::System::Byte _padding0[0x2];
		::RPG::GameCore::MarbleCompare CompareType; // 0x2C
		::System::Int32 Value; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* ValueDynamic; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESCORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCompareScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCompareScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESCORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCompareScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCompareScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPARESCORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
