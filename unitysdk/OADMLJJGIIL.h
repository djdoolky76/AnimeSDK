#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJIOEHPHKEH.h"
#include "unitysdk/System/ValueType.h"

#define OADMLJJGIIL_AEJEMGJCKLN_OFFSET UNITYSDK_OFFSET(0x3CEEA0)
#define OADMLJJGIIL_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x5932C0)
#define OADMLJJGIIL_KGEEIHBKOFN_OFFSET UNITYSDK_OFFSET(0x593270)
#define OADMLJJGIIL_LIHCAKILJBJ_OFFSET UNITYSDK_OFFSET(0x36BE70)
#define OADMLJJGIIL_PABCCCGJECK_OFFSET UNITYSDK_OFFSET(0x593220)
#define OADMLJJGIIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0E16A0)
#define OADMLJJGIIL__CTOR_OFFSET UNITYSDK_OFFSET(0x3CEE90)

inline static constexpr unsigned int OADMLJJGIIL_TypeDefinitionIndex = 46093;

struct alignas(4) OADMLJJGIIL
{
	static ::OADMLJJGIIL* StaticGet_KLLIOBJLGJH()
	{
		return (::OADMLJJGIIL*)Il2CppClass::FromTypeDefinitionIndex(OADMLJJGIIL_TypeDefinitionIndex)->GetStaticField(0xB350);
	}
	static ::OADMLJJGIIL* StaticGet_DDGNFJDLOKA()
	{
		return (::OADMLJJGIIL*)Il2CppClass::FromTypeDefinitionIndex(OADMLJJGIIL_TypeDefinitionIndex)->GetStaticField(0xB354);
	}
	static ::OADMLJJGIIL* StaticGet_HOECBMCOCHD()
	{
		return (::OADMLJJGIIL*)Il2CppClass::FromTypeDefinitionIndex(OADMLJJGIIL_TypeDefinitionIndex)->GetStaticField(0xB358);
	}
	static ::OADMLJJGIIL* StaticGet_ILGDMIKOMGA()
	{
		return (::OADMLJJGIIL*)Il2CppClass::FromTypeDefinitionIndex(OADMLJJGIIL_TypeDefinitionIndex)->GetStaticField(0xB35C);
	}
	static ::OADMLJJGIIL* StaticGet_INMADLLDNGO()
	{
		return (::OADMLJJGIIL*)Il2CppClass::FromTypeDefinitionIndex(OADMLJJGIIL_TypeDefinitionIndex)->GetStaticField(0xB360);
	}
	static ::OADMLJJGIIL* StaticGet_ONEKBNHMLMC()
	{
		return (::OADMLJJGIIL*)Il2CppClass::FromTypeDefinitionIndex(OADMLJJGIIL_TypeDefinitionIndex)->GetStaticField(0xB364);
	}
	static ::OADMLJJGIIL* StaticGet_IOOFFDFGFDE()
	{
		return (::OADMLJJGIIL*)Il2CppClass::FromTypeDefinitionIndex(OADMLJJGIIL_TypeDefinitionIndex)->GetStaticField(0xB368);
	}
	static ::OADMLJJGIIL* StaticGet_DCBIJJBMJOL()
	{
		return (::OADMLJJGIIL*)Il2CppClass::FromTypeDefinitionIndex(OADMLJJGIIL_TypeDefinitionIndex)->GetStaticField(0xB36C);
	}
	::PJIOEHPHKEH _DIPPDDOFDLE_k__BackingField; // 0x10
	::PJIOEHPHKEH _DAEGDGOOEDG_k__BackingField; // 0x12

	::System::Void _ctor(::PJIOEHPHKEH NFIEIKEBNJK, ::PJIOEHPHKEH HMBMDLEOGEK)
	{
		return ((::System::Void(*)(::PVOID, ::PJIOEHPHKEH, ::PJIOEHPHKEH))((::PBYTE)hIl2Cpp + OADMLJJGIIL__CTOR_OFFSET))(this, NFIEIKEBNJK, HMBMDLEOGEK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OADMLJJGIIL__CCTOR_OFFSET))();
	}

	::PJIOEHPHKEH LIHCAKILJBJ()
	{
		return ((::PJIOEHPHKEH(*)(::PVOID))((::PBYTE)hIl2Cpp + OADMLJJGIIL_LIHCAKILJBJ_OFFSET))(this);
	}

	::System::Boolean PABCCCGJECK(::PJIOEHPHKEH NFIEIKEBNJK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PJIOEHPHKEH))((::PBYTE)hIl2Cpp + OADMLJJGIIL_PABCCCGJECK_OFFSET))(this, NFIEIKEBNJK);
	}

	::System::Boolean KGEEIHBKOFN(::PJIOEHPHKEH HMBMDLEOGEK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PJIOEHPHKEH))((::PBYTE)hIl2Cpp + OADMLJJGIIL_KGEEIHBKOFN_OFFSET))(this, HMBMDLEOGEK);
	}

	::PJIOEHPHKEH AEJEMGJCKLN()
	{
		return ((::PJIOEHPHKEH(*)(::PVOID))((::PBYTE)hIl2Cpp + OADMLJJGIIL_AEJEMGJCKLN_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OADMLJJGIIL_JDAPDDEOCEA_OFFSET))(this);
	}
};
