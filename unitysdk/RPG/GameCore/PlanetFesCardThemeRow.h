#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesCardThemeRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESCARDTHEMEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE662F0)
#define RPG_GAMECORE_PLANETFESCARDTHEMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE660F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesCardThemeRow_TypeDefinitionIndex = 12266;

	class PlanetFesCardThemeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* CardIDList; // 0x18
		::System::UInt32 ThemeID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESCARDTHEMEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesCardThemeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesCardThemeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESCARDTHEMEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
