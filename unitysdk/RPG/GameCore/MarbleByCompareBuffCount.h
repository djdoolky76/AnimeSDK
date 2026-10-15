#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByCompareBuffCount; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D838A50)
#define RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D838A60)
#define RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8389F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareBuffCount_TypeDefinitionIndex = 16883;

	class MarbleByCompareBuffCount : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::RPG::GameCore::MarbleTarget BuffSourceType; // 0x2C
		::System::UInt32 BuffId; // 0x30
		::RPG::GameCore::MarbleCompare CompareType; // 0x34
		::System::Int32 Value; // 0x38
		::System::Byte _padding0[0x4];
		::System::String* ValueDynamic; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCompareBuffCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCompareBuffCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByCompareBuffCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByCompareBuffCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
