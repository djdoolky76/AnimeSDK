#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class GCIMMDDIFBJ;
class ILCEHBDAHOI;
class PopEffect;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_AFPKBOGGIAA_OFFSET UNITYSDK_OFFSET(0x1A3E1A50)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_APFNLNKLPGP_OFFSET UNITYSDK_OFFSET(0x1A3E2F00)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_CFACICAFEKP_OFFSET UNITYSDK_OFFSET(0x1A3E2E70)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_EPCHAOPOCPP_OFFSET UNITYSDK_OFFSET(0x1A3E2790)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_FJJLDIHBAPN_OFFSET UNITYSDK_OFFSET(0x1A3E29D0)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x1A3E1860)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1A3E1870)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A3E1850)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_NDOFHJKEHOC_OFFSET UNITYSDK_OFFSET(0x1A3E2DE0)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_NLLEBOGNNAI_OFFSET UNITYSDK_OFFSET(0x1A3E2D50)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A3E1D10)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A3E2B00)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A3E1DA0)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A3E1890)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_SET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x1A3E1880)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_SHOWDIALOG_OFFSET UNITYSDK_OFFSET(0x1A3E1E10)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E2C10)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A3E2CA0)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A3E2D30)
#define MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A3E2D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSubtitle05EDPopWindowController_TypeDefinitionIndex = 86621;

	class UIGeneralSubtitle05EDPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* ENLMILKBHFN; // 0x0
		// static const ::System::String* FEJLAJNGNOG; // 0x0
		// static const ::System::Int32 FDPLDOJAOFK = 0xA; // 0x0
		::System::Boolean _IEJLANFFDAD_k__BackingField; // 0x320
		::System::Byte _padding0[0x7];
		::ILCEHBDAHOI* _view; // 0x328
		::System::Boolean _GDCLNIJIKEI_k__BackingField; // 0x330
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* GKGLEDFBEFK; // 0x338
		::Foundation::Coroutine::CoroutineHandle GFMCJANALCM; // 0x340
		::Foundation::Coroutine::CoroutineHandle IGEPHPPFLKN; // 0x344
		::Foundation::Coroutine::CoroutineHandle HCLJMCOBGEC; // 0x348
		::Foundation::Coroutine::CoroutineHandle FOKDCCFHAKB; // 0x34C
		::System::Boolean OGAPCEJFIFO; // 0x350
		::System::Boolean JOEDEFDAFOJ; // 0x351
		::System::Boolean AJEBGFCLBFE; // 0x352
		::System::Boolean DJCIDBAPEMH; // 0x353
		::System::Byte _padding2[0x4];
		::PopEffect* EEBPMHBEJON; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void set_NeedCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_SET_NEEDCACHE_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowDialog(::System::String* bottomSubtitleKey, ::System::String* middleTextKey, ::System::String* leftTopTextKey, ::Il2CppArray<::System::String*>* leftTextKeys, ::System::String* middleTopKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_SHOWDIALOG_OFFSET))(this, bottomSubtitleKey, middleTextKey, leftTopTextKey, leftTextKeys, middleTopKey);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void NLLEBOGNNAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_NLLEBOGNNAI_OFFSET))(this);
		}

		::System::Void EPCHAOPOCPP(::GCIMMDDIFBJ* BKOLCDPOJAL, ::System::String* EGNIEIAHPFH, ::Foundation::Coroutine::CoroutineHandle& LMAMOHFCMGO, ::System::Action* DMPEOJCCCLO)
		{
			return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*, ::System::String*, ::Foundation::Coroutine::CoroutineHandle&, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_EPCHAOPOCPP_OFFSET))(this, BKOLCDPOJAL, EGNIEIAHPFH, LMAMOHFCMGO, DMPEOJCCCLO);
		}

		::System::Void NDOFHJKEHOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_NDOFHJKEHOC_OFFSET))(this);
		}

		::System::Void CFACICAFEKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_CFACICAFEKP_OFFSET))(this);
		}

		::System::Void AFPKBOGGIAA(::UnityEngine::Transform* DNPCBBFCMJO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_AFPKBOGGIAA_OFFSET))(this, DNPCBBFCMJO);
		}

		::System::Void FJJLDIHBAPN(::System::Int32 ABHBKFJKINO, ::System::Boolean CPHDDAGKHLB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_FJJLDIHBAPN_OFFSET))(this, ABHBKFJKINO, CPHDDAGKHLB);
		}

		::System::Void APFNLNKLPGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUBTITLE05EDPOPWINDOWCONTROLLER_APFNLNKLPGP_OFFSET))(this);
		}
	};
}
