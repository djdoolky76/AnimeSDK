#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGameGachaSymbolRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESGAMEGACHASYMBOLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D926930)
#define RPG_GAMECORE_PLANETFESGAMEGACHASYMBOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D926800)

namespace RPG::GameCore
{
	class PlanetFesGameGachaSymbolRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEGACHASYMBOLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesGameGachaSymbolRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesGameGachaSymbolRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEGACHASYMBOLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
