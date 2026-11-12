#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
class IHOBDIDICLJ;
namespace System { class Type; }

#define EOEAGIFGDMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164CEC50)
#define EOEAGIFGDMJ_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x164CEBA0)
#define EOEAGIFGDMJ_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x164CEC00)
#define EOEAGIFGDMJ_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x164CECA0)

inline static constexpr unsigned int EOEAGIFGDMJ_TypeDefinitionIndex = 64012;

	class EOEAGIFGDMJ : public ::System::Object
	{
	public:
		::IHOBDIDICLJ* HLPIMHEFCLH; // 0x10
		::System::Void _ctor(::IHOBDIDICLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHOBDIDICLJ*))((::PBYTE)hIl2Cpp + EOEAGIFGDMJ_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEAGIFGDMJ_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEAGIFGDMJ_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + EOEAGIFGDMJ_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
