#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BIAGAMOMOHO;
class CMIMAMMMOKA;
class ENAEFMHBIID;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPKHJMHFGJB_DIJNNKOOMNA_OFFSET UNITYSDK_OFFSET(0x11E49FA0)
#define MPKHJMHFGJB_PEJEGDLOBOB_OFFSET UNITYSDK_OFFSET(0x11E49D80)
#define MPKHJMHFGJB_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x11E49B30)
#define MPKHJMHFGJB__CTOR_OFFSET UNITYSDK_OFFSET(0x11E49F90)

inline static constexpr unsigned int MPKHJMHFGJB_TypeDefinitionIndex = 89963;

class MPKHJMHFGJB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKHJMHFGJB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* PKOGNPKCHHE(::ENAEFMHBIID* AAOCANGHBDG)
	{
		return ((::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*(*)(::PVOID, ::ENAEFMHBIID*))((::PBYTE)hIl2Cpp + MPKHJMHFGJB_PKOGNPKCHHE_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean DIJNNKOOMNA(::BIAGAMOMOHO* BPGCPDLINPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIAGAMOMOHO*))((::PBYTE)hIl2Cpp + MPKHJMHFGJB_DIJNNKOOMNA_OFFSET))(this, BPGCPDLINPK);
	}

	::CMIMAMMMOKA* PEJEGDLOBOB(::ENAEFMHBIID* AAOCANGHBDG, ::BIAGAMOMOHO* BPGCPDLINPK)
	{
		return ((::CMIMAMMMOKA*(*)(::PVOID, ::ENAEFMHBIID*, ::BIAGAMOMOHO*))((::PBYTE)hIl2Cpp + MPKHJMHFGJB_PEJEGDLOBOB_OFFSET))(this, AAOCANGHBDG, BPGCPDLINPK);
	}
};
