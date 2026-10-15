#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class DPNDNLJFHKH;
namespace System { class Type; }

#define EHCLMBHKPCK_CTOR_OFFSET UNITYSDK_OFFSET(0x15497CE0)
#define EHCLMBHKPCK_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x15497C30)
#define EHCLMBHKPCK_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x15497C90)
#define EHCLMBHKPCK_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x15497D30)

inline static constexpr unsigned int EHCLMBHKPCK_TypeDefinitionIndex = 62817;

	class EHCLMBHKPCK : public ::System::Object
	{
	public:
		::DPNDNLJFHKH* LPLLBJFGDLM; // 0x10
		::System::Void _ctor(::DPNDNLJFHKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPNDNLJFHKH*))((::PBYTE)hIl2Cpp + EHCLMBHKPCK_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCLMBHKPCK_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCLMBHKPCK_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + EHCLMBHKPCK_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
