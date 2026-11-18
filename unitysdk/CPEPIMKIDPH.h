#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FIPDPALIGNP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPEPIMKIDPH_GNENEJHEBCF_OFFSET UNITYSDK_OFFSET(0x145E0790)
#define CPEPIMKIDPH_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x145E0770)
#define CPEPIMKIDPH_OKPHEOMPFHB_OFFSET UNITYSDK_OFFSET(0x145E07D0)
#define CPEPIMKIDPH_PHHIBCKONMD_OFFSET UNITYSDK_OFFSET(0x145E07B0)
#define CPEPIMKIDPH__CTOR_OFFSET UNITYSDK_OFFSET(0x145E0760)

inline static constexpr unsigned int CPEPIMKIDPH_TypeDefinitionIndex = 80269;

class CPEPIMKIDPH : public ::System::Object
{
public:
	::FIPDPALIGNP* PHMIDIMJCCM; // 0x10

	::System::Void _ctor(::FIPDPALIGNP* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::FIPDPALIGNP*))((::PBYTE)hIl2Cpp + CPEPIMKIDPH__CTOR_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEPIMKIDPH_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::String* GNENEJHEBCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEPIMKIDPH_GNENEJHEBCF_OFFSET))(this);
	}

	::System::String* PHHIBCKONMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEPIMKIDPH_PHHIBCKONMD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OKPHEOMPFHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEPIMKIDPH_OKPHEOMPFHB_OFFSET))(this);
	}
};
