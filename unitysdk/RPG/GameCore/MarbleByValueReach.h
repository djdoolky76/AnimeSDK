#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByValueReach; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEBYVALUEREACH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83BCB0)
#define RPG_GAMECORE_MARBLEBYVALUEREACH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83BCC0)
#define RPG_GAMECORE_MARBLEBYVALUEREACH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83BC60)

namespace RPG::GameCore
{
	class MarbleByValueReach : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleValue ValueType; // 0x28
		::System::Boolean IsLoop; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 Value; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* ValueDynamic; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYVALUEREACH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByValueReach* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByValueReach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYVALUEREACH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByValueReach* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByValueReach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYVALUEREACH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
