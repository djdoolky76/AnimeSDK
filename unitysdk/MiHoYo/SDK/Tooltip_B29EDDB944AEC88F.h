#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Tooltip; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MIHOYO_SDK_TOOLTIP_B29EDDB944AEC88F_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A29EE0)
#define MIHOYO_SDK_TOOLTIP_B29EDDB944AEC88F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Tooltip_B29EDDB944AEC88F_TypeDefinitionIndex = 12861;

	class Tooltip_B29EDDB944AEC88F : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* EBA09DAA48563DDB; // 0x10
		::System::String* E0C0689B1CEBE48C; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_B29EDDB944AEC88F__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Tooltip* FDA7979CE82824CB)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Tooltip*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOOLTIP_B29EDDB944AEC88F_BF3138F24160F012_OFFSET))(this, FDA7979CE82824CB);
		}
	};
}
