#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class EGNBLHHKMFB;
namespace System { class Type; }

#define BGGMBHMBCLH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0CB80)
#define BGGMBHMBCLH_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xBB0CAD0)
#define BGGMBHMBCLH_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xBB0CB30)
#define BGGMBHMBCLH_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xBB0CBD0)

inline static constexpr unsigned int BGGMBHMBCLH_TypeDefinitionIndex = 64118;

	class BGGMBHMBCLH : public ::System::Object
	{
	public:
		::EGNBLHHKMFB* CEFLLELKFOP; // 0x10
		::System::Void _ctor(::EGNBLHHKMFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGNBLHHKMFB*))((::PBYTE)hIl2Cpp + BGGMBHMBCLH_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGMBHMBCLH_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGMBHMBCLH_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + BGGMBHMBCLH_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
