#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_B48C7BD67C9B4CD5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_B48C7BD67C9B4CD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace ProceduralWorlds::Setup
{
	inline static constexpr unsigned int PWPackageInfo_B48C7BD67C9B4CD5_TypeDefinitionIndex = 15844;

	class PWPackageInfo_B48C7BD67C9B4CD5 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_B48C7BD67C9B4CD5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_B48C7BD67C9B4CD5_INVOKE_OFFSET))(this);
		}
	};
}
