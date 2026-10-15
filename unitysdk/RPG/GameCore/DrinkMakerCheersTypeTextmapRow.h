#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersTypeTextmapRow; }
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSTYPETEXTMAPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D61C7F0)
#define RPG_GAMECORE_DRINKMAKERCHEERSTYPETEXTMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D61C500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersTypeTextmapRow_TypeDefinitionIndex = 13205;

	class DrinkMakerCheersTypeTextmapRow : public ::System::Object
	{
	public:
		::System::String* TypeProgressBarPath; // 0x10
		::System::String* TypeIconPath; // 0x18
		::RPG::GameCore::DrinkMakerQuantifyTagType Type; // 0x20
		::System::UInt32 GroupID; // 0x24
		::RPG::Client::TextID QuantifyNameP2; // 0x28
		::RPG::Client::TextID QuantifyNameN2; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSTYPETEXTMAPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSTYPETEXTMAPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
