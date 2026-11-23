#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Toast; }
namespace System { class String; }

#define MIHOYO_SDK_TOAST_E5D022109AACA9F4_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A109A0)
#define MIHOYO_SDK_TOAST_E5D022109AACA9F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Toast_E5D022109AACA9F4_TypeDefinitionIndex = 11950;

	class Toast_E5D022109AACA9F4 : public ::System::Object
	{
	public:
		::System::String* E0C0689B1CEBE48C; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_E5D022109AACA9F4__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Toast* FDA7979CE82824CB)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Toast*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_E5D022109AACA9F4_BF3138F24160F012_OFFSET))(this, FDA7979CE82824CB);
		}
	};
}
