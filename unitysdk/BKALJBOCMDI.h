#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class HLFBHOBMOIJ;
namespace System { class Type; }

#define BKALJBOCMDI_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AC370)
#define BKALJBOCMDI_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xB7AC2C0)
#define BKALJBOCMDI_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xB7AC320)
#define BKALJBOCMDI_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xB7AC3C0)

inline static constexpr unsigned int BKALJBOCMDI_TypeDefinitionIndex = 62682;

	class BKALJBOCMDI : public ::System::Object
	{
	public:
		::HLFBHOBMOIJ* CEFLLELKFOP; // 0x10
		::System::Void _ctor(::HLFBHOBMOIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLFBHOBMOIJ*))((::PBYTE)hIl2Cpp + BKALJBOCMDI_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALJBOCMDI_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALJBOCMDI_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + BKALJBOCMDI_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
