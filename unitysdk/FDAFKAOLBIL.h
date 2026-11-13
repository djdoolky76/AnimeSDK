#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;

#define FDAFKAOLBIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C02B780)
#define FDAFKAOLBIL_LOPHDMAFCEF_OFFSET UNITYSDK_OFFSET(0x1C02B550)

inline static constexpr unsigned int FDAFKAOLBIL_TypeDefinitionIndex = 64115;

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
