#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFHOPECDEFA;

#define AFHOPECDEFA_ABBLFCLEPOP_BBLEMPMKLJD_OFFSET UNITYSDK_OFFSET(0x18DB0FB0)
#define AFHOPECDEFA_ABBLFCLEPOP_CTOR_OFFSET UNITYSDK_OFFSET(0x18DB0F50)
#define AFHOPECDEFA_ABBLFCLEPOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DB0F60)

inline static constexpr unsigned int AFHOPECDEFA_ABBLFCLEPOP_TypeDefinitionIndex = 62710;

	class AFHOPECDEFA_ABBLFCLEPOP : public ::System::Object
	{
	public:
		::AFHOPECDEFA* IEPCIODGJJD; // 0x10
		::System::Void _ctor(::AFHOPECDEFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFHOPECDEFA*))((::PBYTE)hIl2Cpp + AFHOPECDEFA_ABBLFCLEPOP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHOPECDEFA_ABBLFCLEPOP_DISPOSE_OFFSET))(this);
		}

		::AFHOPECDEFA* BBLEMPMKLJD()
		{
			return ((::AFHOPECDEFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHOPECDEFA_ABBLFCLEPOP_BBLEMPMKLJD_OFFSET))(this);
		}

	};
