#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildCardType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildCardTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDCARDTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D683BB0)
#define RPG_GAMECORE_EVOLVEBUILDCARDTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6839A0)

namespace RPG::GameCore
{
	class EvolveBuildCardTypeRow : public ::System::Object
	{
	public:
		::System::String* CardBuffItemBgMid; // 0x10
		::System::String* CardBuffItemBgSmall; // 0x18
		::System::String* CardBuffItemBgBig; // 0x20
		::RPG::GameCore::EvolveBuildCardType Type; // 0x28
		::RPG::GameCore::EvolveBuildSeason Season; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDCARDTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveBuildCardTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveBuildCardTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDCARDTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
