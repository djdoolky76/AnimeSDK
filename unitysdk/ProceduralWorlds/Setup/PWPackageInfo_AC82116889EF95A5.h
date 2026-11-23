#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_AC82116889EF95A5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_AC82116889EF95A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace ProceduralWorlds::Setup
{
	inline static constexpr unsigned int PWPackageInfo_AC82116889EF95A5_TypeDefinitionIndex = 15843;

	class PWPackageInfo_AC82116889EF95A5 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_AC82116889EF95A5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGEINFO_AC82116889EF95A5_INVOKE_OFFSET))(this);
		}
	};
}
