#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class LFACJHHPEEF;
namespace System { class Type; }

#define EIIFPLIFJAI_CTOR_OFFSET UNITYSDK_OFFSET(0x154CBD90)
#define EIIFPLIFJAI_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x154CBDA0)
#define EIIFPLIFJAI_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x154CBE00)
#define EIIFPLIFJAI_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x154CBE50)

inline static constexpr unsigned int EIIFPLIFJAI_TypeDefinitionIndex = 81213;

	class EIIFPLIFJAI : public ::System::Object
	{
	public:
		::LFACJHHPEEF* OFJAAJJPHFN; // 0x10
		::System::Void _ctor(::LFACJHHPEEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFACJHHPEEF*))((::PBYTE)hIl2Cpp + EIIFPLIFJAI_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIFPLIFJAI_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIFPLIFJAI_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + EIIFPLIFJAI_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
