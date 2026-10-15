#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;

#define FDAFKAOLBIL_CTOR_OFFSET UNITYSDK_OFFSET(0x156D0F60)
#define FDAFKAOLBIL_LOPHDMAFCEF_OFFSET UNITYSDK_OFFSET(0x156D0D30)

inline static constexpr unsigned int FDAFKAOLBIL_TypeDefinitionIndex = 62681;

	class FDAFKAOLBIL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDAFKAOLBIL_CTOR_OFFSET))(this);
		}

		::System::Void LOPHDMAFCEF(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + FDAFKAOLBIL_LOPHDMAFCEF_OFFSET))(this, a1);
		}

	};
