#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGameBingoSymbolRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESGAMEBINGOSYMBOLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9265D0)
#define RPG_GAMECORE_PLANETFESGAMEBINGOSYMBOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9264A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGameBingoSymbolRow_TypeDefinitionIndex = 12248;

	class PlanetFesGameBingoSymbolRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEBINGOSYMBOLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesGameBingoSymbolRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesGameBingoSymbolRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEBINGOSYMBOLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
