#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class NAJKJIGFPHI;
namespace System { class Type; }

#define IENIJPJLHNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15F05F20)
#define IENIJPJLHNJ_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x15F05E70)
#define IENIJPJLHNJ_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x15F05ED0)
#define IENIJPJLHNJ_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x15F05F70)

inline static constexpr unsigned int IENIJPJLHNJ_TypeDefinitionIndex = 62598;

	class IENIJPJLHNJ : public ::System::Object
	{
	public:
		::NAJKJIGFPHI* MJLPKMACKNF; // 0x10
		::System::Void _ctor(::NAJKJIGFPHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAJKJIGFPHI*))((::PBYTE)hIl2Cpp + IENIJPJLHNJ_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + IENIJPJLHNJ_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IENIJPJLHNJ_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + IENIJPJLHNJ_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
