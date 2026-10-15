#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKPDKBNFDGM;

#define EKEBHCELDJO_CTOR_OFFSET UNITYSDK_OFFSET(0x154F58B0)
#define EKEBHCELDJO_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0x154F5850)

inline static constexpr unsigned int EKEBHCELDJO_TypeDefinitionIndex = 61952;

	class EKEBHCELDJO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEBHCELDJO_CTOR_OFFSET))(this);
		}

		::System::Boolean MJEGFOMAOFH(::GKPDKBNFDGM* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKPDKBNFDGM*, ::System::UInt32))((::PBYTE)hIl2Cpp + EKEBHCELDJO_MJEGFOMAOFH_OFFSET))(this, a1, a2);
		}

	};
