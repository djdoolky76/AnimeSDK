#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/AsyncAction.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/MaterialParameterType.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::UI::UIStateCtrl { class MaterialParameterData; }
namespace RPG::Client::UI::UIStateCtrl { class MaterialSwitchTarget; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_ACANHBHDLCF_OFFSET UNITYSDK_OFFSET(0xE34E4F0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_BECLFHCOMFD_OFFSET UNITYSDK_OFFSET(0xE34F610)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xE34F960)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xE34E710)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_IPNFPCABKHC_OFFSET UNITYSDK_OFFSET(0xE34DD20)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_KJMHCOCKBDO_OFFSET UNITYSDK_OFFSET(0xE34EBE0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_KLPLLFPNEDE_OFFSET UNITYSDK_OFFSET(0xE34E280)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_KNBHMHFEHGL_1_OFFSET UNITYSDK_OFFSET(0xE34F080)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_KNBHMHFEHGL_2_OFFSET UNITYSDK_OFFSET(0xE34F3A0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_KNBHMHFEHGL_OFFSET UNITYSDK_OFFSET(0xE34ED40)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_LIJFLBLLMHG_OFFSET UNITYSDK_OFFSET(0xE34E530)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_LJCLGKCBKLE_OFFSET UNITYSDK_OFFSET(0xE34E860)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xE34E0B0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xE34D960)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_NMKBEBFBPNO_OFFSET UNITYSDK_OFFSET(0xE34DDE0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_ODCLLEEMOHK_OFFSET UNITYSDK_OFFSET(0xE34E8A0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_ODMGEJIFIDL_OFFSET UNITYSDK_OFFSET(0xE34F8D0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PFOOEFJNOIO_OFFSET UNITYSDK_OFFSET(0xE34E570)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PGFOAPJMGOP_1_OFFSET UNITYSDK_OFFSET(0xE34EFB0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PGFOAPJMGOP_2_OFFSET UNITYSDK_OFFSET(0xE34F300)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PGFOAPJMGOP_OFFSET UNITYSDK_OFFSET(0xE34ECB0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PIGAMMFMDBJ_OFFSET UNITYSDK_OFFSET(0xE34F870)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PNGCDKNHFFP_OFFSET UNITYSDK_OFFSET(0xE34E820)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int SwitchMaterialAction_TypeDefinitionIndex = 74058;

	class SwitchMaterialAction : public ::RPG::Client::UI::UIStateCtrl::AsyncAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* MaterialTargets; // 0x28
		::RPG::Client::WeakAssetReference MaterialReference; // 0x30
		::System::Boolean ModifyMaterialParameters; // 0x40
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialParameterData*>* MaterialParameters; // 0x48
		::UnityEngine::Material* _MaterialInstance; // 0x50
		::UnityEngine::Material* _LoadedMaterial; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_CTOR_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void ACANHBHDLCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_ACANHBHDLCF_OFFSET))(this);
		}

		::System::Void LIJFLBLLMHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_LIJFLBLLMHG_OFFSET))(this);
		}

		::System::Void PFOOEFJNOIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PFOOEFJNOIO_OFFSET))(this, a1);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_FNACALDOOIF_OFFSET))(this);
		}

		::System::Boolean LJCLGKCBKLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_LJCLGKCBKLE_OFFSET))(this);
		}

		::System::Boolean PNGCDKNHFFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PNGCDKNHFFP_OFFSET))(this);
		}

		::System::Void IPNFPCABKHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_IPNFPCABKHC_OFFSET))(this);
		}

		::System::Void NMKBEBFBPNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_NMKBEBFBPNO_OFFSET))(this);
		}

		::System::Void KLPLLFPNEDE(::RPG::Client::UI::UIStateCtrl::MaterialParameterData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::MaterialParameterData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_KLPLLFPNEDE_OFFSET))(this, a1, a2);
		}

		::System::Void ODCLLEEMOHK(::RPG::Client::UI::UIStateCtrl::MaterialParameterData* a1, ::RPG::Client::UI::UIStateCtrl::MaterialParameterType a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Color a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::MaterialParameterData*, ::RPG::Client::UI::UIStateCtrl::MaterialParameterType, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_ODCLLEEMOHK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KJMHCOCKBDO(::RPG::Client::UI::UIStateCtrl::MaterialParameterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::MaterialParameterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_KJMHCOCKBDO_OFFSET))(this, a1);
		}

		::System::Void PGFOAPJMGOP(::UnityEngine::Material* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PGFOAPJMGOP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGFOAPJMGOP_1(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PGFOAPJMGOP_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGFOAPJMGOP_2(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PGFOAPJMGOP_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KNBHMHFEHGL(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_KNBHMHFEHGL_OFFSET))(this, a1, a2);
		}

		::System::Void KNBHMHFEHGL_1(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_KNBHMHFEHGL_1_OFFSET))(this, a1, a2);
		}

		::System::Void KNBHMHFEHGL_2(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_KNBHMHFEHGL_2_OFFSET))(this, a1, a2);
		}

		::System::Void BECLFHCOMFD(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_BECLFHCOMFD_OFFSET))(this, a1, a2);
		}

		::System::Boolean PIGAMMFMDBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_PIGAMMFMDBJ_OFFSET))(this);
		}

		::System::Boolean ODMGEJIFIDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_ODMGEJIFIDL_OFFSET))(this);
		}

	};
}
