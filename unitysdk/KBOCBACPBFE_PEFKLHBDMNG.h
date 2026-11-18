#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBOCBACPBFE_FGBAPPGMBKE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBOCBACPBFE_PEFKLHBDMNG_BBPFGGFACIB_OFFSET UNITYSDK_OFFSET(0x14FCC190)
#define KBOCBACPBFE_PEFKLHBDMNG_DGLBFKPIJDK_OFFSET UNITYSDK_OFFSET(0x14FCBDC0)
#define KBOCBACPBFE_PEFKLHBDMNG_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x14FCC280)
#define KBOCBACPBFE_PEFKLHBDMNG_FCJONLMADOP_OFFSET UNITYSDK_OFFSET(0x14FCBE80)
#define KBOCBACPBFE_PEFKLHBDMNG_ILHJOAIBAEO_OFFSET UNITYSDK_OFFSET(0x14FCBF60)
#define KBOCBACPBFE_PEFKLHBDMNG_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x14FCBF10)
#define KBOCBACPBFE_PEFKLHBDMNG__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCBDB0)

inline static constexpr unsigned int KBOCBACPBFE_PEFKLHBDMNG_TypeDefinitionIndex = 89577;

class KBOCBACPBFE_PEFKLHBDMNG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* KBDKIACNKBL; // 0x10
	::System::Int32 JAJEENEHFPG; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Object*>* FCPEADCEDGI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KBOCBACPBFE_PEFKLHBDMNG__CTOR_OFFSET))(this, FCPEADCEDGI);
	}

	::System::Int32 DGLBFKPIJDK(::System::Int32 IECOJPMPJMP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBOCBACPBFE_PEFKLHBDMNG_DGLBFKPIJDK_OFFSET))(this, IECOJPMPJMP);
	}

	::KBOCBACPBFE_FGBAPPGMBKE* FCJONLMADOP()
	{
		return ((::KBOCBACPBFE_FGBAPPGMBKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOCBACPBFE_PEFKLHBDMNG_FCJONLMADOP_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOCBACPBFE_PEFKLHBDMNG_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void ILHJOAIBAEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOCBACPBFE_PEFKLHBDMNG_ILHJOAIBAEO_OFFSET))(this);
	}

	::System::Int32 BBPFGGFACIB(::System::Int32 NOLLMOIGJHF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBOCBACPBFE_PEFKLHBDMNG_BBPFGGFACIB_OFFSET))(this, NOLLMOIGJHF);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOCBACPBFE_PEFKLHBDMNG_EDEFLFIKNFK_OFFSET))(this);
	}
};
