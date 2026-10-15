#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class GBJLCLBJEKP;
namespace System { class Type; }

#define MOJKHJGDGPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2D0D0)
#define MOJKHJGDGPJ_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xBA2D020)
#define MOJKHJGDGPJ_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xBA2D080)
#define MOJKHJGDGPJ_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xBA2D120)

inline static constexpr unsigned int MOJKHJGDGPJ_TypeDefinitionIndex = 62590;

	class MOJKHJGDGPJ : public ::System::Object
	{
	public:
		::GBJLCLBJEKP* DMPBPBBMAHL; // 0x10
		::System::Void _ctor(::GBJLCLBJEKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJLCLBJEKP*))((::PBYTE)hIl2Cpp + MOJKHJGDGPJ_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJKHJGDGPJ_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJKHJGDGPJ_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + MOJKHJGDGPJ_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
