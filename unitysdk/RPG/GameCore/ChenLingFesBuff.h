#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesBuff; }
namespace RPG::GameCore { class ChenLingFesPropertyModifier; }

#define RPG_GAMECORE_CHENLINGFESBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58D760)
#define RPG_GAMECORE_CHENLINGFESBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D58D540)

namespace RPG::GameCore
{
	class ChenLingFesBuff : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::Boolean RemoveOnDayEnd; // 0x14
		::System::Boolean RemoveWhenSourceItemMove; // 0x15
		::System::Byte _padding0[0x2];
		::Il2CppArray<::RPG::GameCore::ChenLingFesPropertyModifier*>* PropertyModifiers; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
