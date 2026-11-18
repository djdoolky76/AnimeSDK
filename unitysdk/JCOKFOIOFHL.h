#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJKOBLGHNHA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCOKFOIOFHL_GNENEJHEBCF_OFFSET UNITYSDK_OFFSET(0x1872FD40)
#define JCOKFOIOFHL_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x1872FD20)
#define JCOKFOIOFHL_OKPHEOMPFHB_OFFSET UNITYSDK_OFFSET(0x1872FD80)
#define JCOKFOIOFHL_PHHIBCKONMD_OFFSET UNITYSDK_OFFSET(0x1872FD60)
#define JCOKFOIOFHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1872FD10)

inline static constexpr unsigned int JCOKFOIOFHL_TypeDefinitionIndex = 81882;

class JCOKFOIOFHL : public ::System::Object
{
public:
	::AJKOBLGHNHA* PHMIDIMJCCM; // 0x10

	::System::Void _ctor(::AJKOBLGHNHA* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::AJKOBLGHNHA*))((::PBYTE)hIl2Cpp + JCOKFOIOFHL__CTOR_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOKFOIOFHL_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::String* GNENEJHEBCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOKFOIOFHL_GNENEJHEBCF_OFFSET))(this);
	}

	::System::String* PHHIBCKONMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOKFOIOFHL_PHHIBCKONMD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OKPHEOMPFHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOKFOIOFHL_OKPHEOMPFHB_OFFSET))(this);
	}
};
