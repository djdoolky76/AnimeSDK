#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class TipsBar; }
namespace System { class String; }

#define MIHOYO_SDK_TIPSBAR_E8BAF9792F2FACE5_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A29EE0)
#define MIHOYO_SDK_TIPSBAR_E8BAF9792F2FACE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TipsBar_E8BAF9792F2FACE5_TypeDefinitionIndex = 12211;

	class TipsBar_E8BAF9792F2FACE5 : public ::System::Object
	{
	public:
		::System::String* E0C0689B1CEBE48C; // 0x10
		::System::String* EF2BE4C40C833054; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_E8BAF9792F2FACE5__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::TipsBar* EF6FFA59F4A85712)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::TipsBar*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIPSBAR_E8BAF9792F2FACE5_BF3138F24160F012_OFFSET))(this, EF6FFA59F4A85712);
		}
	};
}
