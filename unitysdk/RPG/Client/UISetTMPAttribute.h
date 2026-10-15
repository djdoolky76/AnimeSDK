#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SDFTextAlignType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class UISetTMPAttribute_FAHFHBJFGEG; }
namespace RPG::Client { class UITMPAnimateAttribute; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_Text; }
namespace TMPro { class TMP_TextInfo; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UISETTMPATTRIBUTE_AHKPJKNEALE_OFFSET UNITYSDK_OFFSET(0xE3EC650)
#define RPG_CLIENT_UISETTMPATTRIBUTE_AWAKE_OFFSET UNITYSDK_OFFSET(0xE3EBC50)
#define RPG_CLIENT_UISETTMPATTRIBUTE_CGNBEBKDKAB_OFFSET UNITYSDK_OFFSET(0xE3EDE40)
#define RPG_CLIENT_UISETTMPATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0xE3EE480)
#define RPG_CLIENT_UISETTMPATTRIBUTE_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xE3EC180)
#define RPG_CLIENT_UISETTMPATTRIBUTE_FCNKANPGLFG_OFFSET UNITYSDK_OFFSET(0xE3EE330)
#define RPG_CLIENT_UISETTMPATTRIBUTE_FHFBNFGJHOJ_OFFSET UNITYSDK_OFFSET(0xE3EC890)
#define RPG_CLIENT_UISETTMPATTRIBUTE_GETCENTERPOS_OFFSET UNITYSDK_OFFSET(0xE3EE1D0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_GKBPKGIFBAD_OFFSET UNITYSDK_OFFSET(0xE3EDCE0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_GNGPHLLELAD_OFFSET UNITYSDK_OFFSET(0xE3ED570)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ILLMGNACIPF_OFFSET UNITYSDK_OFFSET(0xE3ECBD0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_JFBJNFBCEHO_OFFSET UNITYSDK_OFFSET(0xE3ED000)
#define RPG_CLIENT_UISETTMPATTRIBUTE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE3EC450)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE3EBD90)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE3EC300)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE3EBF90)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONINVISIBLE_OFFSET UNITYSDK_OFFSET(0xE3EC910)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0xE3EE0A0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0xE3EDFE0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0xE3EE0E0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0xE3EE130)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0xE3EC7F0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_OPPDHMIKDLG_OFFSET UNITYSDK_OFFSET(0xE3EE050)
#define RPG_CLIENT_UISETTMPATTRIBUTE_PIIFJDGENIK_OFFSET UNITYSDK_OFFSET(0xE3EC9B0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_RESETFONTSIZE_OFFSET UNITYSDK_OFFSET(0xE3ECEB0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETCONFIGSHOW_OFFSET UNITYSDK_OFFSET(0xE3ED200)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETCUSTOMGETSDFASSETPATHDELEGATE_OFFSET UNITYSDK_OFFSET(0xE3EE180)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETFACETOCAMERA_OFFSET UNITYSDK_OFFSET(0xE3ED1B0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETFONTSIZE_OFFSET UNITYSDK_OFFSET(0xE3ECE40)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEALIGNTYPE_OFFSET UNITYSDK_OFFSET(0xE3ED2C0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEFONTASSET_OFFSET UNITYSDK_OFFSET(0xE3ED410)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEISKAOMOJI_OFFSET UNITYSDK_OFFSET(0xE3ED4F0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDESCALE_OFFSET UNITYSDK_OFFSET(0xE3ECF50)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXTID_OFFSET UNITYSDK_OFFSET(0xE3ECB70)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXT_OFFSET UNITYSDK_OFFSET(0xE3ECDD0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_START_OFFSET UNITYSDK_OFFSET(0xE3EC410)
#define RPG_CLIENT_UISETTMPATTRIBUTE__SHUFFLE_OFFSET UNITYSDK_OFFSET(0xE3EDEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int UISetTMPAttribute_TypeDefinitionIndex = 70712;

	class UISetTMPAttribute : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean LoadSDFFont; // 0x18
		::System::Boolean EditorFrequencyTick; // 0x19
		::System::Byte _padding0[0x6];
		::UnityEngine::GameObject* backgroundGO; // 0x20
		::System::Single backPaddingLeft; // 0x28
		::System::Single backPaddingRight; // 0x2C
		::System::Single backPaddingUp; // 0x30
		::System::Single backPaddingDown; // 0x34
		::UnityEngine::RectTransform* DPMOOEDBDGO; // 0x38
		::TMPro::TMP_Text* DBKOEGKFKNL; // 0x40
		::UnityEngine::Vector3 FFAKHPCHLDH; // 0x48
		::System::Byte _padding1[0x4];
		::System::String* JCCPKMOBEBN; // 0x58
		::RPG::Client::TextID DIDPADKMCAL; // 0x60
		::System::String* GEPFFDDHPAI; // 0x70
		::System::Boolean NKAOIIALJMN; // 0x78
		::System::Byte _padding2[0x3];
		::System::Single OFFNANIBEBE; // 0x7C
		::System::Single BDMPGHLEALD; // 0x80
		::System::Single BDNBCBPDHHM; // 0x84
		::System::Boolean FACPGEAFKKL; // 0x88
		::System::Boolean CHIAKGCJFFG; // 0x89
		::System::Boolean AKBPNMEFGAO; // 0x8A
		::System::Byte _padding3[0x5];
		::RPG::Client::UITMPAnimateAttribute* CPNDHBLPEAP; // 0x90
		::TMPro::TMP_FontAsset* EBBDNCBLAGE; // 0x98
		::RPG::Client::UISetTMPAttribute_FAHFHBJFGEG* IOLKPFAPJEJ; // 0xA0
		::System::Boolean DIOBFDJABME; // 0xA8
		::System::Byte _padding4[0x3];
		::System::Single FHDCNDFDDAC; // 0xAC
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0xB0
		::System::Single KLDJCFCEKHO; // 0xB8
		::System::Byte _padding5[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* IOFLDNIKCDG; // 0xC0
		::System::Boolean AMAHEHFOKJF; // 0xC8
		::System::Byte _padding6[0x3];
		::UnityEngine::Vector3 MBLPNDBJACF; // 0xCC
		::UnityEngine::Vector2 FLMICIJOBKG; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void AHKPJKNEALE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_AHKPJKNEALE_OFFSET))(this);
		}

		::System::Void OnVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONVISIBLE_OFFSET))(this);
		}

		::System::Void OnInVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONINVISIBLE_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void SetTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXTID_OFFSET))(this, a1);
		}

		::System::Void SetText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXT_OFFSET))(this, a1);
		}

		::System::Void SetFontSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETFONTSIZE_OFFSET))(this, a1);
		}

		::System::Void ResetFontSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_RESETFONTSIZE_OFFSET))(this);
		}

		::System::Void SetOverrideScale(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDESCALE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFaceToCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETFACETOCAMERA_OFFSET))(this, a1);
		}

		::System::Void SetConfigShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETCONFIGSHOW_OFFSET))(this, a1);
		}

		::System::Void SetOverrideAlignType(::RPG::GameCore::SDFTextAlignType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SDFTextAlignType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEALIGNTYPE_OFFSET))(this, a1);
		}

		::System::Void SetOverrideFontAsset(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEFONTASSET_OFFSET))(this, a1);
		}

		::System::Void SetOverrideIsKaomoji(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEISKAOMOJI_OFFSET))(this, a1, a2);
		}

		::System::Void GNGPHLLELAD(::UnityEngine::Mesh* a1, ::TMPro::TMP_TextInfo* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::TMPro::TMP_TextInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_GNGPHLLELAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GKBPKGIFBAD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_GKBPKGIFBAD_OFFSET))(this, a1);
		}

		::System::Void OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void OnUITextChangeFontFromCondenseToComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET))(this);
		}

		::System::Void OnUITextSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTSWITCH_OFFSET))(this, a1);
		}

		::System::Void OnUIWorldFontChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUIWORLDFONTCHANGE_OFFSET))(this, a1);
		}

		::System::Void SetCustomGetSDFAssetPathDelegate(::RPG::Client::UISetTMPAttribute_FAHFHBJFGEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISetTMPAttribute_FAHFHBJFGEG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETCUSTOMGETSDFASSETPATHDELEGATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_GETCENTERPOS_OFFSET))(this);
		}

		::System::Void ILLMGNACIPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ILLMGNACIPF_OFFSET))(this);
		}

		::System::Void OPPDHMIKDLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_OPPDHMIKDLG_OFFSET))(this);
		}

		::System::Void JFBJNFBCEHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_JFBJNFBCEHO_OFFSET))(this);
		}

		static ::System::Void _Shuffle(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE__SHUFFLE_OFFSET))(a1);
		}

		::System::Single CGNBEBKDKAB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_CGNBEBKDKAB_OFFSET))(this, a1, a2);
		}

		::System::Void PIIFJDGENIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_PIIFJDGENIK_OFFSET))(this);
		}

		::System::String* FCNKANPGLFG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_FCNKANPGLFG_OFFSET))(this);
		}

		::System::Void FHFBNFGJHOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_FHFBNFGJHOJ_OFFSET))(this);
		}

	};
}
