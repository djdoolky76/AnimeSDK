#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class LFACJHHPEEF;
namespace System { class Type; }

#define KIKLIMIBGNE_CTOR_OFFSET UNITYSDK_OFFSET(0xB42BF30)
#define KIKLIMIBGNE_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0xB42BF40)
#define KIKLIMIBGNE_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0xB42BFA0)
#define KIKLIMIBGNE_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0xB42BFF0)

inline static constexpr unsigned int KIKLIMIBGNE_TypeDefinitionIndex = 81211;

	class KIKLIMIBGNE : public ::System::Object
	{
	public:
		::LFACJHHPEEF* OFJAAJJPHFN; // 0x10
		::System::Void _ctor(::LFACJHHPEEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFACJHHPEEF*))((::PBYTE)hIl2Cpp + KIKLIMIBGNE_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKLIMIBGNE_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKLIMIBGNE_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + KIKLIMIBGNE_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
