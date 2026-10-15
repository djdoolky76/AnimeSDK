#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class PPMELJBNKPF;
namespace System { class Type; }

#define FOOJAKDJPLM_CTOR_OFFSET UNITYSDK_OFFSET(0x158FDF70)
#define FOOJAKDJPLM_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x158FDEC0)
#define FOOJAKDJPLM_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x158FDF20)
#define FOOJAKDJPLM_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x158FDFC0)

inline static constexpr unsigned int FOOJAKDJPLM_TypeDefinitionIndex = 62601;

	class FOOJAKDJPLM : public ::System::Object
	{
	public:
		::PPMELJBNKPF* GFJOBPEKAPA; // 0x10
		::System::Void _ctor(::PPMELJBNKPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPMELJBNKPF*))((::PBYTE)hIl2Cpp + FOOJAKDJPLM_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOJAKDJPLM_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOJAKDJPLM_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + FOOJAKDJPLM_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
