#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class EpicEntitlementData; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_EPICENTITLEMENTSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2DBF0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int EpicEntitlementsExtension_TypeDefinitionIndex = 19811;

	class EpicEntitlementsExtension : public ::System::Object
	{
	public:
		::System::String* accountId; // 0x10
		::System::String* accessToken; // 0x18
		::Il2CppArray<::MiHoYo::SDK::PC::OS::EpicEntitlementData*>* entitlements; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_EPICENTITLEMENTSEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
