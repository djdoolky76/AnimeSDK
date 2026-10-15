#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
namespace System { class Type; }

#define AICFKHOFOIL_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA0680)
#define AICFKHOFOIL_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xEBA0540)
#define AICFKHOFOIL_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xEBA05A0)
#define AICFKHOFOIL_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xEBA05F0)

inline static constexpr unsigned int AICFKHOFOIL_TypeDefinitionIndex = 62685;

	class AICFKHOFOIL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICFKHOFOIL_CTOR_OFFSET))(this);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + AICFKHOFOIL_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AICFKHOFOIL_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + AICFKHOFOIL_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
