#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMJCNNPMJME.h"
#include "unitysdk/System/Object.h"

class AGALFHMPJLF;
class DLOICFALMNK;
class OLOOCNFMODP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGKCEEFIALL_DCAMONJGNHG_OFFSET UNITYSDK_OFFSET(0x14DAAC90)
#define LGKCEEFIALL_GMALKIGAINN_OFFSET UNITYSDK_OFFSET(0x14DAAB10)
#define LGKCEEFIALL_GNGODONDIDM_OFFSET UNITYSDK_OFFSET(0x14DAB100)
#define LGKCEEFIALL_JDHAIBAIIIJ_OFFSET UNITYSDK_OFFSET(0x14DAADC0)
#define LGKCEEFIALL_LNHLCEJBOIN_OFFSET UNITYSDK_OFFSET(0x14DAAF80)
#define LGKCEEFIALL_MDEHCBBDBFK_OFFSET UNITYSDK_OFFSET(0x14DAAD80)
#define LGKCEEFIALL_OMILKIMGCEM_OFFSET UNITYSDK_OFFSET(0x14DAB280)
#define LGKCEEFIALL_PCHKFMDEBNN_OFFSET UNITYSDK_OFFSET(0x14DAACF0)
#define LGKCEEFIALL__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAAA90)

inline static constexpr unsigned int LGKCEEFIALL_TypeDefinitionIndex = 88202;

class LGKCEEFIALL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AGALFHMPJLF*>* BIGLEMFIPJB; // 0x10
	::OLOOCNFMODP* NOANHNDHJAE; // 0x18
	::DLOICFALMNK* HPCHKHGJPPM; // 0x20
	::System::Int32 JBGNHMJGAIC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKCEEFIALL__CTOR_OFFSET))(this);
	}

	::System::Void GMALKIGAINN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKCEEFIALL_GMALKIGAINN_OFFSET))(this);
	}

	::System::Int32 DCAMONJGNHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKCEEFIALL_DCAMONJGNHG_OFFSET))(this);
	}

	::System::Void PCHKFMDEBNN(::AGALFHMPJLF* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::AGALFHMPJLF*))((::PBYTE)hIl2Cpp + LGKCEEFIALL_PCHKFMDEBNN_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void MDEHCBBDBFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKCEEFIALL_MDEHCBBDBFK_OFFSET))(this);
	}

	::System::Boolean JDHAIBAIIIJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKCEEFIALL_JDHAIBAIIIJ_OFFSET))(this);
	}

	::System::Int64 LNHLCEJBOIN()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKCEEFIALL_LNHLCEJBOIN_OFFSET))(this);
	}

	::DMJCNNPMJME GNGODONDIDM()
	{
		return ((::DMJCNNPMJME(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKCEEFIALL_GNGODONDIDM_OFFSET))(this);
	}

	::System::Void OMILKIMGCEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKCEEFIALL_OMILKIMGCEM_OFFSET))(this);
	}
};
