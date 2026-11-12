#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/TMPro/TextMeshProUGUI.h"
namespace RPG::Client { class FontAssetConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace TMPro { class TMP_FontAsset; }

#define RPG_CLIENT_LOCALIZEDTEXTSDF_ACQUIREDYNAMICFONT_1_OFFSET UNITYSDK_OFFSET(0xDF11450)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_ACQUIREDYNAMICFONT_OFFSET UNITYSDK_OFFSET(0xDF111C0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_AWAKE_OFFSET UNITYSDK_OFFSET(0xDF10750)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_CALCULATETEXTWIDTH_OFFSET UNITYSDK_OFFSET(0xDF11660)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_CHECKMISSINGTEXT_OFFSET UNITYSDK_OFFSET(0xDF11620)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_CTOR_OFFSET UNITYSDK_OFFSET(0xDF116E0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_GET_HASAUTOBAKEFONTCONFIG_OFFSET UNITYSDK_OFFSET(0xDF10FB0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_GET_REPLACEPARAMS_OFFSET UNITYSDK_OFFSET(0xDF11070)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0xDF11010)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_LOADASSET_OFFSET UNITYSDK_OFFSET(0xDF10F50)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDF10C00)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0xDF10E70)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0xDF10D90)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0xDF10EB0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_ONUIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0xDF10F00)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_RELEASEDYNAMICFONT_OFFSET UNITYSDK_OFFSET(0xDF114C0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_SAFESETTEXTID_OFFSET UNITYSDK_OFFSET(0xDF11590)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_SAFESETTEXT_OFFSET UNITYSDK_OFFSET(0xDF110C0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_SETFONTASSET_OFFSET UNITYSDK_OFFSET(0xDF11150)
#define RPG_CLIENT_LOCALIZEDTEXTSDF_SETTEXTID_OFFSET UNITYSDK_OFFSET(0xDF11510)
#define RPG_CLIENT_LOCALIZEDTEXTSDF__ACQUIREDYNAMICFONTASSET_OFFSET UNITYSDK_OFFSET(0xDF11270)
#define RPG_CLIENT_LOCALIZEDTEXTSDF__GETTEXTMAP_OFFSET UNITYSDK_OFFSET(0xDF10970)
#define RPG_CLIENT_LOCALIZEDTEXTSDF__LOADFONTASSET_OFFSET UNITYSDK_OFFSET(0xDF10930)
#define RPG_CLIENT_LOCALIZEDTEXTSDF__ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0xDF10DE0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF__RELEASEDYNAMICFONTASSET_OFFSET UNITYSDK_OFFSET(0xDF10CF0)
#define RPG_CLIENT_LOCALIZEDTEXTSDF__TRYAUTOBAKE_OFFSET UNITYSDK_OFFSET(0xDF10B30)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizedTextSDF_TypeDefinitionIndex = 74645;

	class LocalizedTextSDF : public ::TMPro::TextMeshProUGUI
	{
	public:
		::System::String* TextmapID; // 0x7C0
		::System::Boolean AutoChangeFontAssetByLanguage; // 0x7C8
		::System::Byte _padding0[0x7];
		::RPG::Client::FontAssetConfig* _autoBakeFontConfig; // 0x7D0
		::RPG::Client::TextID textID; // 0x7D8
		::Il2CppArray<::System::Object*>* replaceParams; // 0x7E8
		::System::Boolean _InUse; // 0x7F0
		::System::Byte _padding1[0x7];
		::System::String* _lastBakedText; // 0x7F8
		::TMPro::TMP_FontAsset* _AcquiredDynamicFontAsset; // 0x800
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void OnUITextChangeFontFromCondenseToComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET))(this);
		}

		::System::Void OnUITextSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ONUITEXTSWITCH_OFFSET))(this, a1);
		}

		::System::Void OnUIWorldFontChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ONUIWORLDFONTCHANGE_OFFSET))(this, a1);
		}

		::System::Void LoadAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_LOADASSET_OFFSET))(this);
		}

		::System::Void _LoadFontAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF__LOADFONTASSET_OFFSET))(this);
		}

		::System::Void _OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF__ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void _GetTextmap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF__GETTEXTMAP_OFFSET))(this);
		}

		::System::Boolean get_HasAutoBakeFontConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_GET_HASAUTOBAKEFONTCONFIG_OFFSET))(this);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_GET_TEXTID_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_ReplaceParams()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_GET_REPLACEPARAMS_OFFSET))(this);
		}

		::System::Void SafeSetText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_SAFESETTEXT_OFFSET))(this, a1);
		}

		::System::Void SetFontAsset(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_SETFONTASSET_OFFSET))(this, a1);
		}

		::System::Void AcquireDynamicFont(::RPG::Client::FontAssetConfig* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FontAssetConfig*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ACQUIREDYNAMICFONT_OFFSET))(this, a1, a2);
		}

		::System::Void AcquireDynamicFont_1(::RPG::Client::FontAssetConfig* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FontAssetConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_ACQUIREDYNAMICFONT_1_OFFSET))(this, a1, a2);
		}

		::System::Void _AcquireDynamicFontAsset(::RPG::Client::FontAssetConfig* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FontAssetConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF__ACQUIREDYNAMICFONTASSET_OFFSET))(this, a1, a2);
		}

		::System::Void _TryAutoBake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF__TRYAUTOBAKE_OFFSET))(this);
		}

		::System::Void ReleaseDynamicFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_RELEASEDYNAMICFONT_OFFSET))(this);
		}

		::System::Void _ReleaseDynamicFontAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF__RELEASEDYNAMICFONTASSET_OFFSET))(this);
		}

		::System::Void SetTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_SETTEXTID_OFFSET))(this, a1);
		}

		::System::Void SafeSetTextID(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_SAFESETTEXTID_OFFSET))(this, a1, a2);
		}

		::System::Void CheckMissingText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_CHECKMISSINGTEXT_OFFSET))(this);
		}

		::System::Single CalculateTextWidth(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDTEXTSDF_CALCULATETEXTWIDTH_OFFSET))(this, a1);
		}

	};
}
