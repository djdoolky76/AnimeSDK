#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class LEABOMCMOPJ;
namespace System { class Type; }

#define KNFOLNMBDAN_CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0490)
#define KNFOLNMBDAN_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xBDD03E0)
#define KNFOLNMBDAN_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xBDD0440)
#define KNFOLNMBDAN_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xBDD04E0)

inline static constexpr unsigned int KNFOLNMBDAN_TypeDefinitionIndex = 64021;

	class KNFOLNMBDAN : public ::System::Object
	{
	public:
		::LEABOMCMOPJ* JPLNJEMAFPN; // 0x10
		::System::Void _ctor(::LEABOMCMOPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEABOMCMOPJ*))((::PBYTE)hIl2Cpp + KNFOLNMBDAN_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFOLNMBDAN_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFOLNMBDAN_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + KNFOLNMBDAN_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
