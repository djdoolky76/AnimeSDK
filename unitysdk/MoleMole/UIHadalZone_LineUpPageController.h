#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class ADJBFJNDEFL;
class BDBPOGPNCBP;
class BNFIIBMAMDO;
class NOAHNKGLKKG;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalLineUp_LayerClipWidgetController; }
namespace MoleMole { class UIHadalZone_LineUpPageController_ZoneLineUpInfoContext; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_AAHFACCJLJN_OFFSET UNITYSDK_OFFSET(0x19770370)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_BOMIOCFEEEI_OFFSET UNITYSDK_OFFSET(0x19771190)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_GEFACENJJCF_OFFSET UNITYSDK_OFFSET(0x19771540)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1976FAA0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_GIJALJNPGJK_OFFSET UNITYSDK_OFFSET(0x19770DE0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_HNMINJCAKGN_OFFSET UNITYSDK_OFFSET(0x19770090)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_KLAKELENGCE_OFFSET UNITYSDK_OFFSET(0x19771730)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_MFOJDKPDEOJ_OFFSET UNITYSDK_OFFSET(0x19771850)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_MNKALILPBJK_OFFSET UNITYSDK_OFFSET(0x19770DF0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_NGPGIPEKNNC_OFFSET UNITYSDK_OFFSET(0x19770EE0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_OBODCIPIMND_OFFSET UNITYSDK_OFFSET(0x19771640)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_OLECINOOBGC_OFFSET UNITYSDK_OFFSET(0x19770280)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1976FAB0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19770AF0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1976FB40)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1976FB90)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_PKIBDCEKCGC_OFFSET UNITYSDK_OFFSET(0x197710F0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19770B60)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19770CA0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19770D30)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19770D40)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19770D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LineUpPageController_TypeDefinitionIndex = 68382;

	class UIHadalZone_LineUpPageController : public ::MoleMole::UIWindowController
	{
	public:
		::ADJBFJNDEFL* _view; // 0x320
		::MoleMole::UIHadalZone_LineUpPageController_ZoneLineUpInfoContext* IHHJBMCBOPH; // 0x328
		::BNFIIBMAMDO* GOPAEDADAGN; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* ENKOFPDOOBK; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* GHFNPCLNDJH; // 0x340
		::MoleMole::UIHadalLineUp_LayerClipWidgetController* IMOINMAEOOG; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIHadalLineUp_LayerClipWidgetController*>* EOMMBFOGFHC; // 0x350
		::System::Collections::Generic::List_1<::NOAHNKGLKKG*>* BAAPKCODPFB; // 0x358
		::BDBPOGPNCBP* JPMMJMJLKOA; // 0x360
		::System::Int32 GHDOJNFGHIO; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void GIJALJNPGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_GIJALJNPGJK_OFFSET))(this);
		}

		::System::Void MNKALILPBJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_MNKALILPBJK_OFFSET))(this);
		}

		::System::Void NGPGIPEKNNC(::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* DFEGPALOAKJ, ::System::Action* NPFIONPDFED)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_NGPGIPEKNNC_OFFSET))(this, DFEGPALOAKJ, NPFIONPDFED);
		}

		::System::Void PKIBDCEKCGC(::System::EventArgs* OJPFHPALLHG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_PKIBDCEKCGC_OFFSET))(this, OJPFHPALLHG);
		}

		::System::Void BOMIOCFEEEI(::MoleMole::UIHadalLineUp_LayerClipWidgetController* MNOMCCLBJAO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalLineUp_LayerClipWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_BOMIOCFEEEI_OFFSET))(this, MNOMCCLBJAO);
		}

		::System::Void AAHFACCJLJN(::System::Int32 EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_AAHFACCJLJN_OFFSET))(this, EEGBEFGJJBM);
		}

		::MoleMole::ScrollViewItemWidgetController* KLAKELENGCE(::System::Func_1<::MoleMole::UIControlReference*>* IHFDFJICHLA)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_KLAKELENGCE_OFFSET))(this, IHFDFJICHLA);
		}

		::System::Void OLECINOOBGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_OLECINOOBGC_OFFSET))(this);
		}

		::System::Void GEFACENJJCF(::System::Int32 EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_GEFACENJJCF_OFFSET))(this, EEGBEFGJJBM);
		}

		::System::Void MFOJDKPDEOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_MFOJDKPDEOJ_OFFSET))(this);
		}

		::System::Void OBODCIPIMND(::MoleMole::Level::RatingType OBNIAHNMHPF, ::NOAHNKGLKKG* KALMJJDEECB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType, ::NOAHNKGLKKG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_OBODCIPIMND_OFFSET))(this, OBNIAHNMHPF, KALMJJDEECB);
		}

		::System::Void HNMINJCAKGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER_HNMINJCAKGN_OFFSET))(this);
		}
	};
}
