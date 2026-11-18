#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EJJPHOIGHED;
namespace MoleMole { class UIStickerShowWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWFRAME_OFFSET UNITYSDK_OFFSET(0x10D552B0)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWSETTINGSCOPEDFRONT_OFFSET UNITYSDK_OFFSET(0x10D55290)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWSTICKER_OFFSET UNITYSDK_OFFSET(0x10D552D0)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWVOLUME_OFFSET UNITYSDK_OFFSET(0x10D55270)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_GET_RESETSETTINGTABINDEX_OFFSET UNITYSDK_OFFSET(0x10D552F0)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWFRAME_OFFSET UNITYSDK_OFFSET(0x10D552C0)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWSETTINGSCOPEDFRONT_OFFSET UNITYSDK_OFFSET(0x10D552A0)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWSTICKER_OFFSET UNITYSDK_OFFSET(0x10D552E0)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWVOLUME_OFFSET UNITYSDK_OFFSET(0x10D55280)
#define MOLEMOLE_PHOTOSETTINGCONTEXT_SET_RESETSETTINGTABINDEX_OFFSET UNITYSDK_OFFSET(0x10D55300)
#define MOLEMOLE_PHOTOSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D55310)

namespace MoleMole
{
	inline static constexpr unsigned int PhotoSettingContext_TypeDefinitionIndex = 74119;

	class PhotoSettingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EJJPHOIGHED* SpecialGestureData; // 0x28
		::System::Func_1<::UnityEngine::RectTransform*>* GetStickerRoot; // 0x30
		::System::Func_2<::MoleMole::InputActionEvent, ::System::Boolean>* OnInputActiveHandle; // 0x38
		::System::Func_1<::System::Collections::Generic::IList_1<::MoleMole::UIStickerShowWidgetController*>*>* GetActiveStickerWidgetCtrlList; // 0x40
		::System::Boolean _IsShowVolume_k__BackingField; // 0x48
		::System::Boolean _IsShowSticker_k__BackingField; // 0x49
		::System::Boolean _ResetSettingTabIndex_k__BackingField; // 0x4A
		::System::Boolean _IsShowFrame_k__BackingField; // 0x4B
		::System::Boolean _IsShowSettingScopedFront_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShowVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWVOLUME_OFFSET))(this);
		}

		::System::Void set_IsShowVolume(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWVOLUME_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowSettingScopedFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWSETTINGSCOPEDFRONT_OFFSET))(this);
		}

		::System::Void set_IsShowSettingScopedFront(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWSETTINGSCOPEDFRONT_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWFRAME_OFFSET))(this);
		}

		::System::Void set_IsShowFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowSticker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_GET_ISSHOWSTICKER_OFFSET))(this);
		}

		::System::Void set_IsShowSticker(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_SET_ISSHOWSTICKER_OFFSET))(this, value);
		}

		::System::Boolean get_ResetSettingTabIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_GET_RESETSETTINGTABINDEX_OFFSET))(this);
		}

		::System::Void set_ResetSettingTabIndex(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOSETTINGCONTEXT_SET_RESETSETTINGTABINDEX_OFFSET))(this, value);
		}
	};
}
