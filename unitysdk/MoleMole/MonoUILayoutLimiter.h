#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class LayoutLimiter;

#define MOLEMOLE_MONOUILAYOUTLIMITER_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A9364C0)
#define MOLEMOLE_MONOUILAYOUTLIMITER_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1A936690)
#define MOLEMOLE_MONOUILAYOUTLIMITER_REINITFROMLAYOUTLIMITER_OFFSET UNITYSDK_OFFSET(0x1A936510)
#define MOLEMOLE_MONOUILAYOUTLIMITER_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A9364D0)
#define MOLEMOLE_MONOUILAYOUTLIMITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9364E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUILayoutLimiter_TypeDefinitionIndex = 41881;

	class MonoUILayoutLimiter : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 preferredWidthLimit; // 0x10
		::UnityEngine::Vector2 minHeightLimit; // 0x18
		::UnityEngine::Vector2 preferredHeightLimit; // 0x20
		::System::Boolean _valueChanged_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 minWidthLimit; // 0x2C

		::System::Void _ctor(::LayoutLimiter* layoutLimiter)
		{
			return ((::System::Void(*)(::PVOID, ::LayoutLimiter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTLIMITER__CTOR_OFFSET))(this, layoutLimiter);
		}

		::System::Boolean get_valueChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTLIMITER_GET_VALUECHANGED_OFFSET))(this);
		}

		::System::Void set_valueChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTLIMITER_SET_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Boolean ReInitFromLayoutLimiter(::LayoutLimiter* layoutLimiter)
		{
			return ((::System::Boolean(*)(::PVOID, ::LayoutLimiter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTLIMITER_REINITFROMLAYOUTLIMITER_OFFSET))(this, layoutLimiter);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTLIMITER_MARKVALUECHANGE_OFFSET))(this);
		}
	};
}
