#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OADMLJJGIIL.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class KCOBNIDGPMM;
class LGINJIKKBJA;
class PEBJBCONAGN;
namespace MoleMole { class MonoUILayoutAdaptorBase; }
namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_UIMONOCONTROLLER_APPLYLAYOUTBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x18821180)
#define MOLEMOLE_UIMONOCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x18820E30)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0x18821AF0)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLIMAGE_OFFSET UNITYSDK_OFFSET(0x18821890)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLRAWIMAGE_OFFSET UNITYSDK_OFFSET(0x18821D50)
#define MOLEMOLE_UIMONOCONTROLLER_DESTROYVIEW_OFFSET UNITYSDK_OFFSET(0x188221B0)
#define MOLEMOLE_UIMONOCONTROLLER_DOUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1881F200)
#define MOLEMOLE_UIMONOCONTROLLER_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x18820E20)
#define MOLEMOLE_UIMONOCONTROLLER_HIDE_OFFSET UNITYSDK_OFFSET(0x18822050)
#define MOLEMOLE_UIMONOCONTROLLER_INITMONOUILAYOUTADAPTOR_OFFSET UNITYSDK_OFFSET(0x18820E90)
#define MOLEMOLE_UIMONOCONTROLLER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x188213D0)
#define MOLEMOLE_UIMONOCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18822110)
#define MOLEMOLE_UIMONOCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18821550)
#define MOLEMOLE_UIMONOCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18821410)
#define MOLEMOLE_UIMONOCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1881F2D0)
#define MOLEMOLE_UIMONOCONTROLLER_SETPARENT_OFFSET UNITYSDK_OFFSET(0x18821690)
#define MOLEMOLE_UIMONOCONTROLLER_SHOW_OFFSET UNITYSDK_OFFSET(0x18821FB0)
#define MOLEMOLE_UIMONOCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1881F760)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonoController_TypeDefinitionIndex = 90670;

	class UIMonoController : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::MoleMole::UIWindowController* _parentController; // 0x58
		::PEBJBCONAGN* _childWindowProxy; // 0x60
		::System::Collections::Generic::List_1<::KCOBNIDGPMM*>* _controlObjects; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::MonoUILayoutAdaptorBase*>* _uiLayoutAdaptors; // 0x70
		::System::Boolean _isDestroy; // 0x78
		::System::Byte _padding0[0x1];
		::OADMLJJGIIL _uiUpdaterData; // 0x7A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetParent(::MoleMole::UIWindowController* parent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_SETPARENT_OFFSET))(this, parent);
		}

		::FGCOIBFFCHB* CreatUIControlImage(::UnityEngine::UI::Image* image)
		{
			return ((::FGCOIBFFCHB*(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLIMAGE_OFFSET))(this, image);
		}

		::LGINJIKKBJA* CreatUIControlButton(::UnityEngine::UI::Extension::UIButtonEx* btn)
		{
			return ((::LGINJIKKBJA*(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLBUTTON_OFFSET))(this, btn);
		}

		::FILNFMCNCFE* CreatUIControlRawImage(::UnityEngine::UI::RawImage* rawImage)
		{
			return ((::FILNFMCNCFE*(*)(::PVOID, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLRAWIMAGE_OFFSET))(this, rawImage);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_HIDE_OFFSET))(this);
		}

		::System::Void InitMonoUILayoutAdaptor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_INITMONOUILAYOUTADAPTOR_OFFSET))(this);
		}

		::System::Void ApplyLayoutByPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_APPLYLAYOUTBYPLATFORM_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_DOUIDESTROY_OFFSET))(this);
		}

		::System::Void DestroyView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_DESTROYVIEW_OFFSET))(this);
		}
	};
}
