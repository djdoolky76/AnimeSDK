#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine::TextCore::Text { class SpriteAsset; }
namespace UnityEngine::TextCore::Text { class TextStyleSheet; }
namespace UnityEngine::TextCore::Text { class UnicodeLineBreakingRules; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GETCACHEDFONTASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0x4205600)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0x165A3B0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET UNITYSDK_OFFSET(0x165A390)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0x169C070)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTFONTASSET_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSPRITEASSETPATH_OFFSET UNITYSDK_OFFSET(0x1685600)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSPRITEASSET_OFFSET UNITYSDK_OFFSET(0x17A62C0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSTYLESHEET_OFFSET UNITYSDK_OFFSET(0x168FC80)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DISPLAYWARNINGS_OFFSET UNITYSDK_OFFSET(0x23DD480)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_FALLBACKFONTASSETS_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_FALLBACKSPRITEASSETS_OFFSET UNITYSDK_OFFSET(0x18CFCA0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_LINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0x4205D40)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MATCHMATERIALPRESET_OFFSET UNITYSDK_OFFSET(0x1F63560)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MISSINGCHARACTERUNICODE_OFFSET UNITYSDK_OFFSET(0x18D5230)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MISSINGSPRITECHARACTERUNICODE_OFFSET UNITYSDK_OFFSET(0x1C068D0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_STYLESHEETSRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x165A3A0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0x4205DE0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_INITIALIZEFONTREFERENCELOOKUP_OFFSET UNITYSDK_OFFSET(0x42059D0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0x165A440)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET UNITYSDK_OFFSET(0x165A420)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTFONTASSET_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSPRITEASSETPATH_OFFSET UNITYSDK_OFFSET(0x177ECD0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSPRITEASSET_OFFSET UNITYSDK_OFFSET(0x16E1590)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSTYLESHEET_OFFSET UNITYSDK_OFFSET(0x17F4BD0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DISPLAYWARNINGS_OFFSET UNITYSDK_OFFSET(0x23DD490)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_FALLBACKFONTASSETS_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_FALLBACKSPRITEASSETS_OFFSET UNITYSDK_OFFSET(0x1E2A710)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_LINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0x1CBF910)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MATCHMATERIALPRESET_OFFSET UNITYSDK_OFFSET(0x1F63580)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MISSINGCHARACTERUNICODE_OFFSET UNITYSDK_OFFSET(0x1AFB120)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MISSINGSPRITECHARACTERUNICODE_OFFSET UNITYSDK_OFFSET(0x1C068F0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_STYLESHEETSRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x17395F0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0x23DD4A0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x4205C10)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextSettings_TypeDefinitionIndex = 18724;

	class TextSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* m_Version; // 0x18
		::UnityEngine::TextCore::Text::FontAsset* m_DefaultFontAsset; // 0x20
		::System::String* m_DefaultFontAssetPath; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* m_FallbackFontAssets; // 0x30
		::System::Boolean m_MatchMaterialPreset; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 m_MissingCharacterUnicode; // 0x3C
		::System::Boolean m_ClearDynamicDataOnBuild; // 0x40
		::System::Byte _padding1[0x7];
		::UnityEngine::TextCore::Text::SpriteAsset* m_DefaultSpriteAsset; // 0x48
		::System::String* m_DefaultSpriteAssetPath; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* m_FallbackSpriteAssets; // 0x58
		::System::UInt32 m_MissingSpriteCharacterUnicode; // 0x60
		::System::Byte _padding2[0x4];
		::UnityEngine::TextCore::Text::TextStyleSheet* m_DefaultStyleSheet; // 0x68
		::System::String* m_StyleSheetsResourcePath; // 0x70
		::System::String* m_DefaultColorGradientPresetsPath; // 0x78
		::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* m_UnicodeLineBreakingRules; // 0x80
		::System::Boolean m_UseModernHangulLineBreakingRules; // 0x88
		::System::Boolean m_DisplayWarnings; // 0x89
		::System::Byte _padding3[0x6];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::TextCore::Text::FontAsset*>* m_FontLookup; // 0x90
		::System::Collections::Generic::List_1<::System::Object*>* m_FontReferences; // 0x98

		::System::Void set_defaultColorGradientPresetsPath(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean get_displayWarnings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DISPLAYWARNINGS_OFFSET))(this);
		}

		::System::UInt32 get_missingSpriteCharacterUnicode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MISSINGSPRITECHARACTERUNICODE_OFFSET))(this);
		}

		::System::Void set_styleSheetsResourcePath(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_STYLESHEETSRESOURCEPATH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_fallbackSpriteAssets(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_FALLBACKSPRITEASSETS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_useModernHangulLineBreakingRules(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_defaultSpriteAssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSPRITEASSETPATH_OFFSET))(this);
		}

		::System::Boolean get_clearDynamicDataOnBuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_CLEARDYNAMICDATAONBUILD_OFFSET))(this);
		}

		::System::String* get_defaultColorGradientPresetsPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET))(this);
		}

		::System::Void set_defaultStyleSheet(::UnityEngine::TextCore::Text::TextStyleSheet* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::Text::TextStyleSheet*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSTYLESHEET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_missingSpriteCharacterUnicode(::System::UInt32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MISSINGSPRITECHARACTERUNICODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void InitializeFontReferenceLookup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_INITIALIZEFONTREFERENCELOOKUP_OFFSET))(this);
		}

		::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* get_lineBreakingRules()
		{
			return ((::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_LINEBREAKINGRULES_OFFSET))(this);
		}

		::System::Void set_version(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_VERSION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_styleSheetsResourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_STYLESHEETSRESOURCEPATH_OFFSET))(this);
		}

		::System::Void set_matchMaterialPreset(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MATCHMATERIALPRESET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_defaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::Text::SpriteAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSPRITEASSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::TextCore::Text::TextStyleSheet* get_defaultStyleSheet()
		{
			return ((::UnityEngine::TextCore::Text::TextStyleSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSTYLESHEET_OFFSET))(this);
		}

		::UnityEngine::TextCore::Text::SpriteAsset* get_defaultSpriteAsset()
		{
			return ((::UnityEngine::TextCore::Text::SpriteAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSPRITEASSET_OFFSET))(this);
		}

		::System::Int32 get_missingCharacterUnicode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MISSINGCHARACTERUNICODE_OFFSET))(this);
		}

		::System::Void set_displayWarnings(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DISPLAYWARNINGS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_defaultFontAssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTFONTASSETPATH_OFFSET))(this);
		}

		::System::Void set_defaultSpriteAssetPath(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSPRITEASSETPATH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean get_useModernHangulLineBreakingRules()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET))(this);
		}

		::System::Void set_defaultFontAsset(::UnityEngine::TextCore::Text::FontAsset* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::Text::FontAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTFONTASSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_defaultFontAssetPath(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTFONTASSETPATH_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::TextCore::Text::FontAsset* get_defaultFontAsset()
		{
			return ((::UnityEngine::TextCore::Text::FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTFONTASSET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* get_fallbackFontAssets()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_FALLBACKFONTASSETS_OFFSET))(this);
		}

		::System::Void set_fallbackFontAssets(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_FALLBACKFONTASSETS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::TextCore::Text::FontAsset* GetCachedFontAssetInternal(::UnityEngine::Font* B1DC954065577781)
		{
			return ((::UnityEngine::TextCore::Text::FontAsset*(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GETCACHEDFONTASSETINTERNAL_OFFSET))(this, B1DC954065577781);
		}

		::System::Void set_missingCharacterUnicode(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MISSINGCHARACTERUNICODE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_VERSION_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>* get_fallbackSpriteAssets()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::SpriteAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_FALLBACKSPRITEASSETS_OFFSET))(this);
		}

		::System::Void set_lineBreakingRules(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_LINEBREAKINGRULES_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean get_matchMaterialPreset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MATCHMATERIALPRESET_OFFSET))(this);
		}

		::System::Void set_clearDynamicDataOnBuild(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_CLEARDYNAMICDATAONBUILD_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
