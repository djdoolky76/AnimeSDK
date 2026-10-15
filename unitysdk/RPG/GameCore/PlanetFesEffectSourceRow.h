#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesSourceSystemType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesEffectSourceRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESEFFECTSOURCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D925930)
#define RPG_GAMECORE_PLANETFESEFFECTSOURCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D925740)

namespace RPG::GameCore
{
	class PlanetFesEffectSourceRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::PlanetFesSourceSystemType Type; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTSOURCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesEffectSourceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesEffectSourceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTSOURCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
