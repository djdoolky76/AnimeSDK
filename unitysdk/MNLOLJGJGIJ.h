#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKPDKBNFDGM;

#define MNLOLJGJGIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1FD890)
#define MNLOLJGJGIJ_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0x1B1FD820)

inline static constexpr unsigned int MNLOLJGJGIJ_TypeDefinitionIndex = 63362;

	class MNLOLJGJGIJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLOLJGJGIJ_CTOR_OFFSET))(this);
		}

		::System::Boolean MJEGFOMAOFH(::GKPDKBNFDGM* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKPDKBNFDGM*, ::System::UInt32))((::PBYTE)hIl2Cpp + MNLOLJGJGIJ_MJEGFOMAOFH_OFFSET))(this, a1, a2);
		}

	};
