#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class Confirm; }
namespace MiHoYo::SDK::UI { class Confirm_B5F0E06A8DBF23BA; }
namespace System { class String; }

#define MIHOYO_SDK_UI_CONFIRM_BCC3A2A3607E1B99_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A5BA70)
#define MIHOYO_SDK_UI_CONFIRM_BCC3A2A3607E1B99__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Confirm_BCC3A2A3607E1B99_TypeDefinitionIndex = 12999;

	class Confirm_BCC3A2A3607E1B99 : public ::System::Object
	{
	public:
		::System::String* E0C0689B1CEBE48C; // 0x10
		::System::String* E0E2FB74317C93BD; // 0x18
		::System::String* B2DE86A168292335; // 0x20
		::MiHoYo::SDK::UI::Confirm_B5F0E06A8DBF23BA* E04D2BE64FCE9814; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_BCC3A2A3607E1B99__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::UI::Confirm* E65C5019B0F9A5D8)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM_BCC3A2A3607E1B99_BF3138F24160F012_OFFSET))(this, E65C5019B0F9A5D8);
		}
	};
}
