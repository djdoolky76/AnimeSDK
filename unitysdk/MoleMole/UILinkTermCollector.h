#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class LGINJIKKBJA;
class MEACDMEJECB;
namespace MoleMole { class UIBaseController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UILINKTERMCOLLECTOR_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x183E19F0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_ADD_ONHASLINKSCHANGED_OFFSET UNITYSDK_OFFSET(0x183E0AF0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_ANKOGFDKIJB_OFFSET UNITYSDK_OFFSET(0x183E0F70)
#define MOLEMOLE_UILINKTERMCOLLECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x183E1230)
#define MOLEMOLE_UILINKTERMCOLLECTOR_BDJNBOLJKFK_OFFSET UNITYSDK_OFFSET(0x183E2EF0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_BINDNOUNBUTTON_1_OFFSET UNITYSDK_OFFSET(0x183E0C30)
#define MOLEMOLE_UILINKTERMCOLLECTOR_BINDNOUNBUTTON_OFFSET UNITYSDK_OFFSET(0x183E0BD0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_BIND_OFFSET UNITYSDK_OFFSET(0x183E0740)
#define MOLEMOLE_UILINKTERMCOLLECTOR_COLLECTANDOPENTERMPANEL_OFFSET UNITYSDK_OFFSET(0x183E1F50)
#define MOLEMOLE_UILINKTERMCOLLECTOR_COLLECTLINKSOURCETEXTS_OFFSET UNITYSDK_OFFSET(0x183E2680)
#define MOLEMOLE_UILINKTERMCOLLECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183E2970)
#define MOLEMOLE_UILINKTERMCOLLECTOR_FBJOOLBEAEP_OFFSET UNITYSDK_OFFSET(0x183E2A10)
#define MOLEMOLE_UILINKTERMCOLLECTOR_FDFJNEMKDIF_OFFSET UNITYSDK_OFFSET(0x183E2EA0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_FKLKBELMCCA_OFFSET UNITYSDK_OFFSET(0x183E2D50)
#define MOLEMOLE_UILINKTERMCOLLECTOR_FORCEREFRESH_OFFSET UNITYSDK_OFFSET(0x183E0B70)
#define MOLEMOLE_UILINKTERMCOLLECTOR_GET_HASLINKS_OFFSET UNITYSDK_OFFSET(0x183E11A0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_GFDEIAKGDKB_OFFSET UNITYSDK_OFFSET(0x183E2F40)
#define MOLEMOLE_UILINKTERMCOLLECTOR_HGHPFPLLPJD_OFFSET UNITYSDK_OFFSET(0x183E21F0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_JHLGEIFMIJA_OFFSET UNITYSDK_OFFSET(0x183E1470)
#define MOLEMOLE_UILINKTERMCOLLECTOR_NIPKNEENIEJ_OFFSET UNITYSDK_OFFSET(0x183E2E40)
#define MOLEMOLE_UILINKTERMCOLLECTOR_NLOKDJKAPJJ_OFFSET UNITYSDK_OFFSET(0x183E22E0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x183E1C50)
#define MOLEMOLE_UILINKTERMCOLLECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x183E1BA0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x183E13B0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_REMOVE_ONHASLINKSCHANGED_OFFSET UNITYSDK_OFFSET(0x183E11B0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_SETROOT_OFFSET UNITYSDK_OFFSET(0x183E0F10)
#define MOLEMOLE_UILINKTERMCOLLECTOR_UNBINDNOUNBUTTON_OFFSET UNITYSDK_OFFSET(0x183E1DE0)
#define MOLEMOLE_UILINKTERMCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x183E29C0)

namespace MoleMole
{
	inline static constexpr unsigned int UILinkTermCollector_TypeDefinitionIndex = 85253;

	class UILinkTermCollector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _rootOverride; // 0x18
		::UnityEngine::Transform* APENOKAEBCD; // 0x20
		::System::Boolean MOEAENPEMKN; // 0x28
		::System::Byte _padding0[0x7];
		::LGINJIKKBJA* PLGKPECJKKO; // 0x30
		::System::Boolean MJBDANIGCGH; // 0x38
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::String*>* FKIDLICNPLO; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* IJKGCHCFDML; // 0x48
		::System::Action_1<::System::Boolean>* NBHDEPKBFOL; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR__CTOR_OFFSET))(this);
		}

		static ::MoleMole::UILinkTermCollector* Bind(::MoleMole::UIBaseController* NCIMBHDKIJM, ::MEACDMEJECB* AOKHOHCJNFJ)
		{
			return ((::MoleMole::UILinkTermCollector*(*)(::MoleMole::UIBaseController*, ::MEACDMEJECB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_BIND_OFFSET))(NCIMBHDKIJM, AOKHOHCJNFJ);
		}

		static ::MoleMole::UILinkTermCollector* BindNounButton(::MoleMole::UIBaseController* NCIMBHDKIJM, ::LGINJIKKBJA* ILPLGHBCAMF)
		{
			return ((::MoleMole::UILinkTermCollector*(*)(::MoleMole::UIBaseController*, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_BINDNOUNBUTTON_OFFSET))(NCIMBHDKIJM, ILPLGHBCAMF);
		}

		static ::MoleMole::UILinkTermCollector* BindNounButton_1(::MoleMole::UIBaseController* NCIMBHDKIJM, ::LGINJIKKBJA* ILPLGHBCAMF, ::UnityEngine::Transform* FCFIFDJPJGC)
		{
			return ((::MoleMole::UILinkTermCollector*(*)(::MoleMole::UIBaseController*, ::LGINJIKKBJA*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_BINDNOUNBUTTON_1_OFFSET))(NCIMBHDKIJM, ILPLGHBCAMF, FCFIFDJPJGC);
		}

		::System::Boolean get_HasLinks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_GET_HASLINKS_OFFSET))(this);
		}

		::System::Void add_OnHasLinksChanged(::System::Action_1<::System::Boolean>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_ADD_ONHASLINKSCHANGED_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void remove_OnHasLinksChanged(::System::Action_1<::System::Boolean>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_REMOVE_ONHASLINKSCHANGED_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetRoot(::UnityEngine::Transform* IAPKABMDJNF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_SETROOT_OFFSET))(this, IAPKABMDJNF);
		}

		::System::Void CollectAndOpenTermPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_COLLECTANDOPENTERMPANEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* CollectLinkSourceTexts()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_COLLECTLINKSOURCETEXTS_OFFSET))(this);
		}

		::System::Void UnbindNounButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_UNBINDNOUNBUTTON_OFFSET))(this);
		}

		::System::Void ForceRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_FORCEREFRESH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_DISPOSE_OFFSET))(this);
		}

		::System::Boolean FBJOOLBEAEP(::UnityEngine::Transform* IAPKABMDJNF)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_FBJOOLBEAEP_OFFSET))(this, IAPKABMDJNF);
		}

		::System::Void NIPKNEENIEJ(::System::Boolean FIPHFGHNNBE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_NIPKNEENIEJ_OFFSET))(this, FIPHFGHNNBE);
		}

		::UnityEngine::Transform* JHLGEIFMIJA()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_JHLGEIFMIJA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* HGHPFPLLPJD()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_HGHPFPLLPJD_OFFSET))(this);
		}

		::System::Void NLOKDJKAPJJ(::UnityEngine::Transform* IAPKABMDJNF, ::System::Collections::Generic::List_1<::System::String*>* PILELGPBCLL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_NLOKDJKAPJJ_OFFSET))(this, IAPKABMDJNF, PILELGPBCLL);
		}

		::System::Void ANKOGFDKIJB(::LGINJIKKBJA* ILPLGHBCAMF)
		{
			return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_ANKOGFDKIJB_OFFSET))(this, ILPLGHBCAMF);
		}

		::System::Void FDFJNEMKDIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_FDFJNEMKDIF_OFFSET))(this);
		}

		::System::Void BDJNBOLJKFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_BDJNBOLJKFK_OFFSET))(this);
		}

		::System::Void ABDLEONNPAJ(::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_ABDLEONNPAJ_OFFSET))(this, NPPMJEIPMFC);
		}

		::System::Void GFDEIAKGDKB(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_GFDEIAKGDKB_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* FKLKBELMCCA()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_FKLKBELMCCA_OFFSET))(this);
		}
	};
}
