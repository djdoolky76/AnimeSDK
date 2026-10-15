#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AllowedTextLanguageRow; }
namespace System { class String; }

#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F1260)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3F0690)

namespace RPG::GameCore
{
	class AllowedTextLanguageRow : public ::System::Object
	{
	public:
		::System::String* Font; // 0x10
		::System::String* PSFontName; // 0x18
		::System::String* SDKkey; // 0x20
		::System::String* Ellipsis; // 0x28
		::System::String* PSFont; // 0x30
		::System::String* NoLeading; // 0x38
		::System::String* CondensedFont; // 0x40
		::System::String* LanguageCultureCode; // 0x48
		::System::String* LogoImgPath; // 0x50
		::System::String* FontName; // 0x58
		::System::String* TextLanguageKey; // 0x60
		::System::String* CondensedFontName; // 0x68
		::RPG::Client::TextID ShowString; // 0x70
		::System::UInt32 FontGrowSize; // 0x80
		::System::UInt32 LanguageType; // 0x84
		::System::Boolean RubyHoldAlignSpace; // 0x88
		::System::Boolean ReplaceSpaceWithNBSPInRuby; // 0x89
		::System::Boolean NoWrap; // 0x8A
		::System::Boolean Justify; // 0x8B
		::System::Single RubyStrRatio; // 0x8C
		::System::Single TextureScale; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AllowedTextLanguageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AllowedTextLanguageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
