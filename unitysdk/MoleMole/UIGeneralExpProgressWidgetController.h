#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class GMBDKAPICHA;
class KCDOMIIILFJ;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_CMMNLCLBEAL_OFFSET UNITYSDK_OFFSET(0x17842EB0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_DLABMDLGDBJ_OFFSET UNITYSDK_OFFSET(0x17843160)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_DPPNPADPIHJ_OFFSET UNITYSDK_OFFSET(0x17842730)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_EIJFKLLFKAG_OFFSET UNITYSDK_OFFSET(0x17843000)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_FHPBHMCLOIH_OFFSET UNITYSDK_OFFSET(0x17842CB0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_HCPNHBFMCFI_OFFSET UNITYSDK_OFFSET(0x17842640)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_IDIIHMKOKDA_OFFSET UNITYSDK_OFFSET(0x178430D0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17842200)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x17842290)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_STARTEXPPROGRESS_OFFSET UNITYSDK_OFFSET(0x17842AF0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17842DC0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17842E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralExpProgressWidgetController_TypeDefinitionIndex = 48629;

	class UIGeneralExpProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::KCDOMIIILFJ* _view; // 0x2C8
		::GMBDKAPICHA* DAAAEJDBNFI; // 0x2D0
		::System::Int32 NILKIJGOGOC; // 0x2D8
		::System::Int32 DFLPMACMMFN; // 0x2DC
		::System::Int32 HFBLKEPNBJA; // 0x2E0
		::System::Byte _padding0[0x4];
		::System::Action* NPPCFBHMMMB; // 0x2E8
		::GMBDKAPICHA* LJBPECKCCEA; // 0x2F0
		::System::Boolean BJINJEABELO; // 0x2F8
		::System::Byte _padding1[0x3];
		::System::Single CJHLEKLCJHP; // 0x2FC
		::System::Boolean PBLKGFFHEPF; // 0x300
		::System::Byte _padding2[0x3];
		::System::Int32 HPMHJBKJDEH; // 0x304
		::System::Single CIIPCCLOHLH; // 0x308
		::System::Boolean JANPLENNHEC; // 0x30C
		::System::Byte _padding3[0x3];
		::System::Int32 HDCEOGICEJE; // 0x310
		::System::Int32 MECCCNJCNKO; // 0x314

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void Refresh(::GMBDKAPICHA* data)
		{
			return ((::System::Void(*)(::PVOID, ::GMBDKAPICHA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_REFRESH_OFFSET))(this, data);
		}

		::System::Void StartExpProgress(::System::Single inFillDuration, ::System::Single upgradePauseDuration, ::System::Action* onFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_STARTEXPPROGRESS_OFFSET))(this, inFillDuration, upgradePauseDuration, onFinished);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void CMMNLCLBEAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_CMMNLCLBEAL_OFFSET))(this);
		}

		::System::Void FHPBHMCLOIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_FHPBHMCLOIH_OFFSET))(this);
		}

		::System::Void HCPNHBFMCFI(::System::Int32 KDEHMPGOCEP, ::System::Int32 PADJNMGMGHO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_HCPNHBFMCFI_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
		}

		::System::Void IDIIHMKOKDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_IDIIHMKOKDA_OFFSET))(this);
		}

		::System::Void DLABMDLGDBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_DLABMDLGDBJ_OFFSET))(this);
		}

		::System::Void EIJFKLLFKAG(::UnityEngine::Animation* BKOLCDPOJAL, ::System::String* HMJBMNAAGKB, ::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_EIJFKLLFKAG_OFFSET))(this, BKOLCDPOJAL, HMJBMNAAGKB, AHAFNGEDPLI);
		}

		::System::Void DPPNPADPIHJ(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER_DPPNPADPIHJ_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
