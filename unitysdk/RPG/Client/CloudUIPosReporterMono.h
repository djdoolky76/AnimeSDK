#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class GLDAMFHLMPM_BCDMCGDEKNP;
class OFODGHAMPON;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_CLEARDEBUGGUI_OFFSET UNITYSDK_OFFSET(0xCB913C0)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_CTOR_OFFSET UNITYSDK_OFFSET(0xCB91460)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETISVALID_OFFSET UNITYSDK_OFFSET(0xCB90BF0)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCB90D50)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETUIELEMENTSCREENRECT_1_OFFSET UNITYSDK_OFFSET(0xCB90DE0)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETUIELEMENTSCREENRECT_OFFSET UNITYSDK_OFFSET(0xCB90D90)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_START_OFFSET UNITYSDK_OFFSET(0xCB90B70)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_UPDATEDEBUGGUI_OFFSET UNITYSDK_OFFSET(0xCB910D0)

namespace RPG::Client
{
	class CloudUIPosReporterMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::CloudUIBattlePosRegion Region; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x20
		::UnityEngine::CanvasGroup* MLMFIEKIPHG; // 0x28
		::System::Collections::Generic::List_1<::OFODGHAMPON*>* NPEDAOBEDIA; // 0x30
		static ::System::Boolean* StaticGet_ShowDebugGUI()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "CloudUIPosReporterMono")->GetStaticField(0x5930);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_START_OFFSET))(this);
		}

		::System::Boolean GetIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETISVALID_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GetRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETRECTTRANSFORM_OFFSET))(this);
		}

		::GLDAMFHLMPM_BCDMCGDEKNP* GetUIElementScreenRect()
		{
			return ((::GLDAMFHLMPM_BCDMCGDEKNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETUIELEMENTSCREENRECT_OFFSET))(this);
		}

		::GLDAMFHLMPM_BCDMCGDEKNP* GetUIElementScreenRect_1(::UnityEngine::RectTransform* a1)
		{
			return ((::GLDAMFHLMPM_BCDMCGDEKNP*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETUIELEMENTSCREENRECT_1_OFFSET))(this, a1);
		}

		::System::Void UpdateDebugGUI(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_UPDATEDEBUGGUI_OFFSET))(this, a1);
		}

		::System::Void ClearDebugGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_CLEARDEBUGGUI_OFFSET))(this);
		}

	};
}
