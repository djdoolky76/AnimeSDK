#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesLevelUnlockRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESLEVELUNLOCKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB43420)
#define RPG_GAMECORE_PLANETFESLEVELUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB42CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLevelUnlockRow_TypeDefinitionIndex = 12326;

	class PlanetFesLevelUnlockRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* MiniIconPath; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Description; // 0x28
		::RPG::Client::TextID Name; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesLevelUnlockRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesLevelUnlockRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLEVELUNLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
