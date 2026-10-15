#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class IJMJDBOBDOP;
namespace System { class Type; }

#define IPEAFBIJIDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1651F240)
#define IPEAFBIJIDK_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x1651F190)
#define IPEAFBIJIDK_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x1651F1F0)
#define IPEAFBIJIDK_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x1651F2C0)

inline static constexpr unsigned int IPEAFBIJIDK_TypeDefinitionIndex = 62592;

	class IPEAFBIJIDK : public ::System::Object
	{
	public:
		::IJMJDBOBDOP* JJNDKEOGJFA; // 0x10
		::System::Void _ctor(::IJMJDBOBDOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJMJDBOBDOP*))((::PBYTE)hIl2Cpp + IPEAFBIJIDK_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEAFBIJIDK_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPEAFBIJIDK_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + IPEAFBIJIDK_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
