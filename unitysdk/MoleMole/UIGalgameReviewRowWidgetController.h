#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class GBHJPGCJBLH;
class OPDAKKMNLHA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_AJDJGMOACFE_OFFSET UNITYSDK_OFFSET(0x18371E40)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ANGJCPAHIEI_OFFSET UNITYSDK_OFFSET(0x183729B0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x18370210)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_CGDMEJKIOPI_OFFSET UNITYSDK_OFFSET(0x18372F40)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_CPCCGHAFHJL_OFFSET UNITYSDK_OFFSET(0x18372440)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_DAJMGAKNNPK_OFFSET UNITYSDK_OFFSET(0x183723A0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_DFLAJFHDCFE_OFFSET UNITYSDK_OFFSET(0x18371C00)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_DILHADGGIKN_OFFSET UNITYSDK_OFFSET(0x18371490)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_FORCESTOPPLAYVOICE_OFFSET UNITYSDK_OFFSET(0x18370AF0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_FPPLBFDDJBA_OFFSET UNITYSDK_OFFSET(0x18371000)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_GETLASTPLAYEDROWIDX_OFFSET UNITYSDK_OFFSET(0x1836FFB0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_NAHGJNCBFCE_OFFSET UNITYSDK_OFFSET(0x18371B70)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_NAKMHLAGHHD_OFFSET UNITYSDK_OFFSET(0x18372050)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_OLPGODNKEIC_OFFSET UNITYSDK_OFFSET(0x18370B40)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183709B0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONGAMEPADITEMSELECTED_OFFSET UNITYSDK_OFFSET(0x18370A40)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18370030)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_PBIBEDGDGCP_OFFSET UNITYSDK_OFFSET(0x18370F60)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_PHNFPCNBFMI_OFFSET UNITYSDK_OFFSET(0x18371DE0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x18370140)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_STOPALLAUDIOINSELECTEDROW_OFFSET UNITYSDK_OFFSET(0x1836FC60)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18370DC0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18370DB0)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18370E30)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18370EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameReviewRowWidgetController_TypeDefinitionIndex = 82964;

	class UIGalgameReviewRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_EADMLHMAPOB()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x44EA0);
		}
		static ::System::Int32* StaticGet_BINHPNNBFLL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xFE10);
		}
		static ::System::UInt32* StaticGet_FBJNPOMIGMA()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xFE14);
		}
		static ::System::Boolean* StaticGet_HFGDOIOJLMO()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xFE18);
		}
		static ::System::Boolean* StaticGet_ODJNHNEJCPK()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewRowWidgetController_TypeDefinitionIndex)->GetStaticField(0xFE19);
		}
		::GBHJPGCJBLH* _view; // 0x2F8
		::OPDAKKMNLHA* BEMLBCKEAHH; // 0x300
		::System::Int32 DGNPOJMJONJ; // 0x308
		::System::UInt32 PNHBLBPDDMH; // 0x30C
		::UnityEngine::Color POGDJHENNHA; // 0x310
		::System::Boolean PKLBEPDINLM; // 0x320
		::System::Boolean GOIGFFEEPLG; // 0x321

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		static ::System::Void StopAllAudioInSelectedRow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_STOPALLAUDIOINSELECTEDROW_OFFSET))();
		}

		static ::System::Int32 GetLastPlayedRowIdx()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_GETLASTPLAYEDROWIDX_OFFSET))();
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnGamepadItemSelected(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ONGAMEPADITEMSELECTED_OFFSET))(this, isSelect);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void ForceStopPlayVoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_FORCESTOPPLAYVOICE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void PBIBEDGDGCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_PBIBEDGDGCP_OFFSET))(this);
		}

		::System::Void FPPLBFDDJBA(::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* NHGGEJLLBJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_FPPLBFDDJBA_OFFSET))(this, NHGGEJLLBJH);
		}

		::System::String* DILHADGGIKN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_DILHADGGIKN_OFFSET))(this);
		}

		static ::System::Boolean NAHGJNCBFCE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_NAHGJNCBFCE_OFFSET))();
		}

		::System::Void DFLAJFHDCFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_DFLAJFHDCFE_OFFSET))(this);
		}

		::System::Void DAJMGAKNNPK(::System::Boolean DPJBDOGLHMD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_DAJMGAKNNPK_OFFSET))(this, DPJBDOGLHMD);
		}

		::System::Void AJDJGMOACFE(::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*& KBAIOPJLJOL, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*& EPGFBMAJOOF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*&, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_AJDJGMOACFE_OFFSET))(this, KBAIOPJLJOL, EPGFBMAJOOF);
		}

		::System::Void OLPGODNKEIC(::System::Boolean CMBKOECNKKG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_OLPGODNKEIC_OFFSET))(this, CMBKOECNKKG);
		}

		::System::Boolean PHNFPCNBFMI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_PHNFPCNBFMI_OFFSET))(this);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::System::Void ANGJCPAHIEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_ANGJCPAHIEI_OFFSET))(this);
		}

		::System::Void CPCCGHAFHJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_CPCCGHAFHJL_OFFSET))(this);
		}

		::System::Void NAKMHLAGHHD(::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* FBDLJCNBJEO, ::System::Boolean DPJBDOGLHMD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_NAKMHLAGHHD_OFFSET))(this, FBDLJCNBJEO, DPJBDOGLHMD);
		}

		::System::Void CGDMEJKIOPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER_CGDMEJKIOPI_OFFSET))(this);
		}
	};
}
