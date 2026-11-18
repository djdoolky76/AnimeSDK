#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNMCCALIKFI.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class LHBMLBDAEEJ;
class UIControllerExtensionData;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_AKPDHPIICGP_OFFSET UNITYSDK_OFFSET(0x187BBF90)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_DOANIM_OFFSET UNITYSDK_OFFSET(0x180C5AF0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_DOROTATE_OFFSET UNITYSDK_OFFSET(0x180C5DB0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_HPBBLOEDGHA_OFFSET UNITYSDK_OFFSET(0x187BC4A0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_JNPKDNIGBFM_OFFSET UNITYSDK_OFFSET(0x187BCAB0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_KOIEPLMAEKO_OFFSET UNITYSDK_OFFSET(0x187BBF40)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_OMHEMGBOGIG_OFFSET UNITYSDK_OFFSET(0x187BC6A0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180C5CA0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180C5D30)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180C55C0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x180C5C30)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_SETOFFICON_OFFSET UNITYSDK_OFFSET(0x180C60E0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_SETONICON_OFFSET UNITYSDK_OFFSET(0x180C5F60)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187BBCA0)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187BBD00)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187BBD90)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187BBE20)
#define MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187BBEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerMiniGamePointWidgetController_TypeDefinitionIndex = 65918;

	class UIHackerMiniGamePointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::LHBMLBDAEEJ* _view; // 0x2C8
		::UnityEngine::Transform* IHOGOPFDLOD; // 0x2D0
		::UnityEngine::Transform* ICLOOIJJCLM; // 0x2D8
		::UnityEngine::UI::Image* OAMGIJLDGNN; // 0x2E0
		::UnityEngine::UI::Image* ACECDJKNGCE; // 0x2E8
		::UnityEngine::Transform* PMNHFFGPDJH; // 0x2F0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* IAMJJMGDMMF; // 0x2F8
		::UnityEngine::AnimationCurve* rotateCurve; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoAnim(::KNMCCALIKFI animType)
		{
			return ((::System::Void(*)(::PVOID, ::KNMCCALIKFI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_DOANIM_OFFSET))(this, animType);
		}

		::System::Void DoRotate(::System::Single targetAngleZ, ::System::Single animTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_DOROTATE_OFFSET))(this, targetAngleZ, animTime);
		}

		::System::Void SetOnIcon(::System::String* assetPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_SETONICON_OFFSET))(this, assetPath);
		}

		::System::Void SetOffIcon(::System::String* assetPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_SETOFFICON_OFFSET))(this, assetPath);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void KOIEPLMAEKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_KOIEPLMAEKO_OFFSET))(this);
		}

		::System::Void HPBBLOEDGHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_HPBBLOEDGHA_OFFSET))(this);
		}

		::System::Void OMHEMGBOGIG(::UIControllerExtensionData* LJBPECKCCEA, ::System::String* HDDMKLGOGMO, ::UnityEngine::UI::Image*& DNKEKDIEAMH)
		{
			return ((::System::Void(*)(::PVOID, ::UIControllerExtensionData*, ::System::String*, ::UnityEngine::UI::Image*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_OMHEMGBOGIG_OFFSET))(this, LJBPECKCCEA, HDDMKLGOGMO, DNKEKDIEAMH);
		}

		::System::Void JNPKDNIGBFM(::UnityEngine::Transform* HODAIDNDKHD, ::System::Single GPIJNFMPAID, ::System::Single FNIOFNFDEEL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_JNPKDNIGBFM_OFFSET))(this, HODAIDNDKHD, GPIJNFMPAID, FNIOFNFDEEL);
		}

		::System::Void AKPDHPIICGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERMINIGAMEPOINTWIDGETCONTROLLER_AKPDHPIICGP_OFFSET))(this);
		}
	};
}
