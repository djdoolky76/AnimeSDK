#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelNPCNameWidgetController__IconAnimationTag.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x18CE3A90)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_GET_PLAYDURATION_OFFSET UNITYSDK_OFFSET(0x18CE3A70)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONFINISH_OFFSET UNITYSDK_OFFSET(0x18CE3B90)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONPLAY_OFFSET UNITYSDK_OFFSET(0x18CE3AE0)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONSKIP_OFFSET UNITYSDK_OFFSET(0x18CE3B50)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x18CE3C10)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_SET_PLAYDURATION_OFFSET UNITYSDK_OFFSET(0x18CE3A80)
#define MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE3C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelNPCNameWidgetController__IconAnimationItem_TypeDefinitionIndex = 58316;

	class UIInLevelNPCNameWidgetController__IconAnimationItem : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* AfterPlayCallback; // 0x10
		::System::Func_2<::System::Object*, ::System::Boolean>* ChecCouldPlay; // 0x18
		::System::Action* PrePlayCallback; // 0x20
		::System::String* animName; // 0x28
		::System::Boolean onlySample; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single playTime; // 0x34
		::System::Single _playDuration_k__BackingField; // 0x38
		::MoleMole::UIInLevelNPCNameWidgetController__IconAnimationTag _replaceTag; // 0x3C
		::MoleMole::UIInLevelNPCNameWidgetController__IconAnimationTag playTag; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM__CTOR_OFFSET))(this);
		}

		::System::Single get_playDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_GET_PLAYDURATION_OFFSET))(this);
		}

		::System::Void set_playDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_SET_PLAYDURATION_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Void OnPlay(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONPLAY_OFFSET))(this, duration);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONFINISH_OFFSET))(this);
		}

		::System::Void OnStopped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELNPCNAMEWIDGETCONTROLLER__ICONANIMATIONITEM_ONSTOPPED_OFFSET))(this);
		}
	};
}
