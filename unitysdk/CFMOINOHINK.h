#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBJFFDGJBON.h"

class KMJECECBGEM;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CFMOINOHINK_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x10E37540)
#define CFMOINOHINK_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x10E37300)
#define CFMOINOHINK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E36630)
#define CFMOINOHINK_DLOGHCKBDIO_OFFSET UNITYSDK_OFFSET(0x10E374B0)
#define CFMOINOHINK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x10E37470)
#define CFMOINOHINK_EJOHAHHKLAM_OFFSET UNITYSDK_OFFSET(0x10E36C10)
#define CFMOINOHINK_JPEAPNLLEKD_OFFSET UNITYSDK_OFFSET(0x10E36760)
#define CFMOINOHINK_KAEMMABNMGK_OFFSET UNITYSDK_OFFSET(0x10E37230)
#define CFMOINOHINK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10E36130)
#define CFMOINOHINK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10E36710)
#define CFMOINOHINK__CTOR_OFFSET UNITYSDK_OFFSET(0x10E366C0)

inline static constexpr unsigned int CFMOINOHINK_TypeDefinitionIndex = 39606;

class CFMOINOHINK : public ::DBJFFDGJBON
{
public:
	::KMJECECBGEM* HFPLICABNOE; // 0x28
	::System::String* INPMBOAGOCP; // 0x30
	::System::String* HFEEAAJGMJA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMOINOHINK__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 CLACNEMIOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFMOINOHINK__CTOR_1_OFFSET))(this, CLACNEMIOBA);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMOINOHINK_TOSTRING_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMOINOHINK_DISPOSE_OFFSET))(this);
	}

	static ::CFMOINOHINK* JPEAPNLLEKD(::System::Int32 CLACNEMIOBA)
	{
		return ((::CFMOINOHINK*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CFMOINOHINK_JPEAPNLLEKD_OFFSET))(CLACNEMIOBA);
	}

	static ::CFMOINOHINK* EJOHAHHKLAM(::System::Int32 CLACNEMIOBA)
	{
		return ((::CFMOINOHINK*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CFMOINOHINK_EJOHAHHKLAM_OFFSET))(CLACNEMIOBA);
	}

	static ::CFMOINOHINK* COKNIICCODC(::System::Int32 CLACNEMIOBA)
	{
		return ((::CFMOINOHINK*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CFMOINOHINK_COKNIICCODC_OFFSET))(CLACNEMIOBA);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMOINOHINK_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Single DLOGHCKBDIO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFMOINOHINK_DLOGHCKBDIO_OFFSET))(this, KECKGDFIALJ);
	}

	static ::CFMOINOHINK* KAEMMABNMGK(::CFMOINOHINK* IMFFCLHHPOD, ::System::Int32 CJDFCANOBHM)
	{
		return ((::CFMOINOHINK*(*)(::CFMOINOHINK*, ::System::Int32))((::PBYTE)hIl2Cpp + CFMOINOHINK_KAEMMABNMGK_OFFSET))(IMFFCLHHPOD, CJDFCANOBHM);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMOINOHINK_CMFOIAAGPFL_OFFSET))(this);
	}
};
