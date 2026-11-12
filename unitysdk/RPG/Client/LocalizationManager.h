#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEBIONMOIAG.h"
#include "unitysdk/RPG/Client/SDFTextType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class CIFEGCIODAL;
class GHHJNCOAIJF;
namespace RPG::GameCore { class AllowedAudioLanguageRow; }
namespace RPG::GameCore { class AllowedTextLanguageRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Font; }

#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET UNITYSDK_OFFSET(0xDF06160)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTLANGUAGECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xDF06060)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTSWITCHNOTIFY_OFFSET UNITYSDK_OFFSET(0xDF06260)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ADDUIWORLDFONTCHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xDF06360)
#define RPG_CLIENT_LOCALIZATIONMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF09AF0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xDF09510)
#define RPG_CLIENT_LOCALIZATIONMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF03E50)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETAUDIOLANGUAGETEXTIDBYAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF051A0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETMIHOYOLANGSTR_OFFSET UNITYSDK_OFFSET(0xDF03EB0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETPLATFORMREGION_OFFSET UNITYSDK_OFFSET(0xDF05160)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETRUBYNBSPRULEINCURRENTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF05320)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0xDF053B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFFONTSPACING_OFFSET UNITYSDK_OFFSET(0xDF05AC0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFTEXTTYPE_OFFSET UNITYSDK_OFFSET(0xDF05C50)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GETTEXTLANGUAGETEXTIDBYTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF05260)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_ACTIVELANGUAGEFONT_OFFSET UNITYSDK_OFFSET(0xDF08940)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURLANGUAGETYPE_OFFSET UNITYSDK_OFFSET(0xDF06A50)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTAUDIOLANGUAGETEXTID_OFFSET UNITYSDK_OFFSET(0xDF08770)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF081B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTFONT_OFFSET UNITYSDK_OFFSET(0xDF04E10)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTLOGOIMGPATH_OFFSET UNITYSDK_OFFSET(0xDF08850)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTTEXTLANGUAGETEXTID_OFFSET UNITYSDK_OFFSET(0xDF08690)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF03F60)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_ELLIPSIS_OFFSET UNITYSDK_OFFSET(0xDF094A0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_NOLEADINGCHARS_OFFSET UNITYSDK_OFFSET(0xDF09490)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYHOLDALIGNSPACE_OFFSET UNITYSDK_OFFSET(0xDF094F0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYSTRRATIO_OFFSET UNITYSDK_OFFSET(0xDF094D0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET_USECOMPLETEFONT_OFFSET UNITYSDK_OFFSET(0xDF094B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET__DEFAULTAUDIO_OFFSET UNITYSDK_OFFSET(0xDF093E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_GET__DEFAULTTEXT_OFFSET UNITYSDK_OFFSET(0xDF092E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xDF03C70)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDAUDIOKEY_OFFSET UNITYSDK_OFFSET(0xDF04CD0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGECONDENSEDFONT_OFFSET UNITYSDK_OFFSET(0xDF04B00)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEFONT_OFFSET UNITYSDK_OFFSET(0xDF04110)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEKEY_OFFSET UNITYSDK_OFFSET(0xDF04C20)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEPSFONT_OFFSET UNITYSDK_OFFSET(0xDF04B90)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISCJK_OFFSET UNITYSDK_OFFSET(0xDF05F60)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ISSYSTEMMANAGEDFONT_OFFSET UNITYSDK_OFFSET(0xDF08950)
#define RPG_CLIENT_LOCALIZATIONMANAGER_LOADDEFAULTTEXTCONFIG_OFFSET UNITYSDK_OFFSET(0xDF089C0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONLANGUAGECHANGED_OFFSET UNITYSDK_OFFSET(0xDF07F20)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REFRESHTOCOMPLETEFONT_OFFSET UNITYSDK_OFFSET(0xDF04D80)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET UNITYSDK_OFFSET(0xDF061F0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTLANGUAGECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xDF060F0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTSWITCHNOTIFY_OFFSET UNITYSDK_OFFSET(0xDF062F0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUIWORLDFONTCHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xDF063F0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SAVEPREFS_OFFSET UNITYSDK_OFFSET(0xDF040A0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SETTEXTCONFIG_OFFSET UNITYSDK_OFFSET(0xDF08A10)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SETUPHTTPLANGPARAM_OFFSET UNITYSDK_OFFSET(0xDF05DE0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF08400)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF06CD0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYHOLDALIGNSPACE_OFFSET UNITYSDK_OFFSET(0xDF09500)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYSTRRATIO_OFFSET UNITYSDK_OFFSET(0xDF094E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_SET_USECOMPLETEFONT_OFFSET UNITYSDK_OFFSET(0xDF094C0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0xDF04F60)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0xDF06460)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0xDF06650)
#define RPG_CLIENT_LOCALIZATIONMANAGER_UIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0xDF06850)
#define RPG_CLIENT_LOCALIZATIONMANAGER__AUDIOLANGKEYTOAUDIOLANGUAGEROW_OFFSET UNITYSDK_OFFSET(0xDF09000)
#define RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF08EE0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF08DC0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xDF09B40)
#define RPG_CLIENT_LOCALIZATIONMANAGER__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0xDF09BA0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__LOADALLOWEDLANGUAGES_OFFSET UNITYSDK_OFFSET(0xDF042D0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__ONSHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xDF09440)
#define RPG_CLIENT_LOCALIZATIONMANAGER__PICKDEFAULTAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF08210)
#define RPG_CLIENT_LOCALIZATIONMANAGER__PICKDEFAULTTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF06AD0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SAVELOCALAUDIOLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF085B0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SAVELOCALTEXTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xDF080D0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SETCULTURL_OFFSET UNITYSDK_OFFSET(0xDF06EF0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__SYSTEMLANGUAGETOTEXTLANGKEY_OFFSET UNITYSDK_OFFSET(0xDF090E0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__TEXTLANGKEYTOTEXTLANGUAGEROW_OFFSET UNITYSDK_OFFSET(0xDF03FC0)
#define RPG_CLIENT_LOCALIZATIONMANAGER__UNLOADTEXTMAPBYASSETNAME_OFFSET UNITYSDK_OFFSET(0xDF09340)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizationManager_TypeDefinitionIndex = 62735;

	class LocalizationManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedAudioKeys; // 0x10
		::Il2CppArray<::System::Int32>* _noLeadingChars; // 0x18
		::UnityEngine::Font* _tempFont; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguageKeys; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguageCondensedFontNames; // 0x30
		::System::String* _currentAudioLanguage; // 0x38
		::System::String* _defaultAudio; // 0x40
		::System::Collections::Generic::HashSet_1<::CIFEGCIODAL*>* _UITextLanguageChange; // 0x48
		::System::String* _defaultText; // 0x50
		::System::String* _currentTextLanguage; // 0x58
		::System::Collections::Generic::HashSet_1<::CIFEGCIODAL*>* _UITextChangeFontFromCondenseToComplete; // 0x60
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguageFontNames; // 0x68
		::System::Collections::Generic::HashSet_1<::CIFEGCIODAL*>* _UIWorldFontChange; // 0x70
		::System::Collections::Generic::HashSet_1<::System::String*>* _allowedLanguagePSFontNames; // 0x78
		::System::Collections::Generic::HashSet_1<::CIFEGCIODAL*>* _UITextSwitch; // 0x80
		::System::Single _RubyStrRatio_k__BackingField; // 0x88
		::System::Boolean _UseCompleteFont_k__BackingField; // 0x8C
		::System::Boolean _RubyHoldAlignSpace_k__BackingField; // 0x8D
		::System::Byte _padding0[0x2];
		::System::Int32 _ellipsis; // 0x90
		static ::System::String** StaticGet_SDF_TEXT3D_FONT_PATH_DEFAULT()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LocalizationManager")->GetStaticField(0x1FF40);
		}

		static ::System::String** StaticGet_SDF_TEXT3D_FONT_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LocalizationManager")->GetStaticField(0x1FF48);
		}

		static ::System::String** StaticGet_AREA()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LocalizationManager")->GetStaticField(0x1FF50);
		}

		static ::System::String** StaticGet_SDF_TEXT3D_FONT_PATH_SIMPLE()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LocalizationManager")->GetStaticField(0x1FF58);
		}

		static ::System::Byte* StaticGet_TYPE_TEXT()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.Client", "LocalizationManager")->GetStaticField(0x6DD0);
		}

		static ::System::Byte* StaticGet_TYPE_AUDIO()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.Client", "LocalizationManager")->GetStaticField(0x6DD1);
		}

		static ::System::Boolean* StaticGet_ApplyTextExtraFunction()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "LocalizationManager")->GetStaticField(0x6DD2);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::String* GetMiHoYoLangStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETMIHOYOLANGSTR_OFFSET))(this);
		}

		::System::Void SavePrefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SAVEPREFS_OFFSET))(this);
		}

		::System::Boolean IsAllowedLanguageFont(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEFONT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllowedLanguageCondensedFont(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGECONDENSEDFONT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllowedLanguagePSFont(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEPSFONT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllowedLanguageKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDLANGUAGEKEY_OFFSET))(this, a1);
		}

		::System::Boolean IsAllowedAudioKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISALLOWEDAUDIOKEY_OFFSET))(this, a1);
		}

		::System::Void RefreshToCompleteFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REFRESHTOCOMPLETEFONT_OFFSET))(this);
		}

		::System::String* GetPlatformRegion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETPLATFORMREGION_OFFSET))(this);
		}

		static ::RPG::Client::TextID GetAudioLanguageTextIDByAudioLanguage(::System::String* a1)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETAUDIOLANGUAGETEXTIDBYAUDIOLANGUAGE_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetTextLanguageTextIDByTextLanguage(::System::String* a1)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETTEXTLANGUAGETEXTIDBYTEXTLANGUAGE_OFFSET))(a1);
		}

		::System::Boolean GetRubyNBSPRuleInCurrentLanguage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETRUBYNBSPRULEINCURRENTLANGUAGE_OFFSET))(this);
		}

		::System::String* GetSDFFontAssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFFONTASSETPATH_OFFSET))(this);
		}

		::System::Single GetSDFFontSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFFONTSPACING_OFFSET))(this);
		}

		::RPG::Client::SDFTextType GetSDFTextType()
		{
			return ((::RPG::Client::SDFTextType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GETSDFTEXTTYPE_OFFSET))(this);
		}

		::GHHJNCOAIJF* SetupHttpLangParam(::GHHJNCOAIJF* a1)
		{
			return ((::GHHJNCOAIJF*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SETUPHTTPLANGPARAM_OFFSET))(this, a1);
		}

		static ::System::Boolean IsCJK(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISCJK_OFFSET))(a1);
		}

		::System::Void AddUITextLanguageChangeNotify(::CIFEGCIODAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFEGCIODAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTLANGUAGECHANGENOTIFY_OFFSET))(this, a1);
		}

		::System::Void RemoveUITextLanguageChangeNotify(::CIFEGCIODAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFEGCIODAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTLANGUAGECHANGENOTIFY_OFFSET))(this, a1);
		}

		::System::Void AddUITextChangeFontFromCondenseToCompleteNotify(::CIFEGCIODAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFEGCIODAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET))(this, a1);
		}

		::System::Void RemoveUITextChangeFontFromCondenseToCompleteNotify(::CIFEGCIODAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFEGCIODAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTCHANGEFONTFROMCONDENSETOCOMPLETENOTIFY_OFFSET))(this, a1);
		}

		::System::Void AddUITextSwitchNotify(::CIFEGCIODAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFEGCIODAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUITEXTSWITCHNOTIFY_OFFSET))(this, a1);
		}

		::System::Void RemoveUITextSwitchNotify(::CIFEGCIODAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFEGCIODAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUITEXTSWITCHNOTIFY_OFFSET))(this, a1);
		}

		::System::Void AddUIWorldFontChangeNotify(::CIFEGCIODAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFEGCIODAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ADDUIWORLDFONTCHANGENOTIFY_OFFSET))(this, a1);
		}

		::System::Void RemoveUIWorldFontChangeNotify(::CIFEGCIODAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFEGCIODAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_REMOVEUIWORLDFONTCHANGENOTIFY_OFFSET))(this, a1);
		}

		::System::Void UITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void UITextChangeFontFromCondenseToComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET))(this);
		}

		::System::Void UITextSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UITEXTSWITCH_OFFSET))(this, a1);
		}

		::System::Void UIWorldFontChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_UIWORLDFONTCHANGE_OFFSET))(this, a1);
		}

		::JEBIONMOIAG get_CurLanguageType()
		{
			return ((::JEBIONMOIAG(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURLANGUAGETYPE_OFFSET))(this);
		}

		::System::String* get_CurrentTextLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTTEXTLANGUAGE_OFFSET))(this);
		}

		::System::Void set_CurrentTextLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTTEXTLANGUAGE_OFFSET))(this, a1);
		}

		::System::String* get_CurrentAudioLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTAUDIOLANGUAGE_OFFSET))(this);
		}

		::System::Void set_CurrentAudioLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_CURRENTAUDIOLANGUAGE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CurrentTextLanguageTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTTEXTLANGUAGETEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_CurrentAudioLanguageTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTAUDIOLANGUAGETEXTID_OFFSET))(this);
		}

		::System::String* get_CurrentLogoImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTLOGOIMGPATH_OFFSET))(this);
		}

		::UnityEngine::Font* get_CurrentFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_CURRENTFONT_OFFSET))(this);
		}

		::UnityEngine::Font* get_ActiveLanguageFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_ACTIVELANGUAGEFONT_OFFSET))(this);
		}

		::System::Boolean IsSystemManagedFont(::UnityEngine::Font* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ISSYSTEMMANAGEDFONT_OFFSET))(this, a1);
		}

		::System::Void LoadDefaultTextConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_LOADDEFAULTTEXTCONFIG_OFFSET))(this);
		}

		::System::Void SetTextConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SETTEXTCONFIG_OFFSET))(this);
		}

		::System::Void OnLanguageChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONLANGUAGECHANGED_OFFSET))(this);
		}

		::System::String* _PickDefaultTextLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__PICKDEFAULTTEXTLANGUAGE_OFFSET))(this);
		}

		::System::String* _PickDefaultAudioLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__PICKDEFAULTAUDIOLANGUAGE_OFFSET))(this);
		}

		::RPG::GameCore::AllowedTextLanguageRow* _TextLangKeyToTextLanguageRow(::System::String* a1)
		{
			return ((::RPG::GameCore::AllowedTextLanguageRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__TEXTLANGKEYTOTEXTLANGUAGEROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::AllowedAudioLanguageRow* _AudioLangKeyToAudioLanguageRow(::System::String* a1)
		{
			return ((::RPG::GameCore::AllowedAudioLanguageRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__AUDIOLANGKEYTOAUDIOLANGUAGEROW_OFFSET))(this, a1);
		}

		::System::String* _SystemLanguageToTextLangKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__SYSTEMLANGUAGETOTEXTLANGKEY_OFFSET))(this);
		}

		::System::Void _SaveLocalTextLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__SAVELOCALTEXTLANGUAGE_OFFSET))(this);
		}

		::System::Void _SaveLocalAudioLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__SAVELOCALAUDIOLANGUAGE_OFFSET))(this);
		}

		::System::Void _LoadAllowedLanguages(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__LOADALLOWEDLANGUAGES_OFFSET))(this, a1);
		}

		::System::String* _GetDefaultTextLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTTEXTLANGUAGE_OFFSET))(this);
		}

		::System::Void _UnloadTextmapByAssetName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__UNLOADTEXTMAPBYASSETNAME_OFFSET))(this, a1);
		}

		::System::String* _GetDefaultAudioLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__GETDEFAULTAUDIOLANGUAGE_OFFSET))(this);
		}

		::System::Void _OnShowLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__ONSHOWLOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _SetCulturl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__SETCULTURL_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_NoLeadingChars()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_NOLEADINGCHARS_OFFSET))(this);
		}

		::System::Int32 get_Ellipsis()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_ELLIPSIS_OFFSET))(this);
		}

		::System::Boolean get_UseCompleteFont()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_USECOMPLETEFONT_OFFSET))(this);
		}

		::System::Void set_UseCompleteFont(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_USECOMPLETEFONT_OFFSET))(this, a1);
		}

		::System::Single get_RubyStrRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYSTRRATIO_OFFSET))(this);
		}

		::System::Void set_RubyStrRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYSTRRATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_RubyHoldAlignSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET_RUBYHOLDALIGNSPACE_OFFSET))(this);
		}

		::System::Void set_RubyHoldAlignSpace(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_SET_RUBYHOLDALIGNSPACE_OFFSET))(this, a1);
		}

		::System::String* get__DefaultText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET__DEFAULTTEXT_OFFSET))(this);
		}

		::System::String* get__DefaultAudio()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_GET__DEFAULTAUDIO_OFFSET))(this);
		}

		::System::String* _Init_b__1_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__INIT_B__1_0_OFFSET))(this);
		}

		::System::String* _Init_b__1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER__INIT_B__1_1_OFFSET))(this);
		}

	};
}
