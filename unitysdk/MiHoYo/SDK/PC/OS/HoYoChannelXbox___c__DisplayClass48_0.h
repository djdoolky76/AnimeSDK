#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelXbox; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS48_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3B820)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS48_0__ENSURECOLLECTIONSID_B__0_OFFSET UNITYSDK_OFFSET(0x1BF3E290)

namespace MiHoYo::SDK::PC::OS
{
	class HoYoChannelXbox___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::String* token; // 0x18
		::MiHoYo::SDK::PC::OS::HoYoChannelXbox* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS48_0_CTOR_OFFSET))(this);
		}

		::System::Void _EnsureCollectionsId_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS48_0__ENSURECOLLECTIONSID_B__0_OFFSET))(this, a1);
		}

	};
}
