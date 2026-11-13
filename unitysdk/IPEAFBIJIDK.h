#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class IJMJDBOBDOP;
namespace System { class Type; }

#define IPEAFBIJIDK_CTOR_OFFSET UNITYSDK_OFFSET(0x192FE6D0)
#define IPEAFBIJIDK_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x192FE620)
#define IPEAFBIJIDK_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x192FE680)
#define IPEAFBIJIDK_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x192FE750)

inline static constexpr unsigned int IPEAFBIJIDK_TypeDefinitionIndex = 64014;

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
