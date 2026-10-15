#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class LFJCCPIADAL;
namespace System { class Type; }

#define EJPKCFDEDCC_CTOR_OFFSET UNITYSDK_OFFSET(0x154F8620)
#define EJPKCFDEDCC_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x154F8310)
#define EJPKCFDEDCC_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x154F8370)
#define EJPKCFDEDCC_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x154F8670)

inline static constexpr unsigned int EJPKCFDEDCC_TypeDefinitionIndex = 62589;

	class EJPKCFDEDCC : public ::System::Object
	{
	public:
		::LFJCCPIADAL* JNGNEGEGKHD; // 0x10
		::System::Void _ctor(::LFJCCPIADAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFJCCPIADAL*))((::PBYTE)hIl2Cpp + EJPKCFDEDCC_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKCFDEDCC_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKCFDEDCC_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + EJPKCFDEDCC_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
