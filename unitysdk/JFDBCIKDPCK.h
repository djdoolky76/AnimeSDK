#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BIAGAMOMOHO;
class CMIMAMMMOKA;
class ENAEFMHBIID;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFDBCIKDPCK_DIJNNKOOMNA_OFFSET UNITYSDK_OFFSET(0x1980F650)
#define JFDBCIKDPCK_PEJEGDLOBOB_OFFSET UNITYSDK_OFFSET(0x1980F4A0)
#define JFDBCIKDPCK_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1980F250)
#define JFDBCIKDPCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1980F640)

inline static constexpr unsigned int JFDBCIKDPCK_TypeDefinitionIndex = 48907;

class JFDBCIKDPCK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDBCIKDPCK__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* PKOGNPKCHHE(::ENAEFMHBIID* AAOCANGHBDG)
	{
		return ((::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*(*)(::PVOID, ::ENAEFMHBIID*))((::PBYTE)hIl2Cpp + JFDBCIKDPCK_PKOGNPKCHHE_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean DIJNNKOOMNA(::BIAGAMOMOHO* BPGCPDLINPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIAGAMOMOHO*))((::PBYTE)hIl2Cpp + JFDBCIKDPCK_DIJNNKOOMNA_OFFSET))(this, BPGCPDLINPK);
	}

	::CMIMAMMMOKA* PEJEGDLOBOB(::ENAEFMHBIID* AAOCANGHBDG, ::BIAGAMOMOHO* BPGCPDLINPK)
	{
		return ((::CMIMAMMMOKA*(*)(::PVOID, ::ENAEFMHBIID*, ::BIAGAMOMOHO*))((::PBYTE)hIl2Cpp + JFDBCIKDPCK_PEJEGDLOBOB_OFFSET))(this, AAOCANGHBDG, BPGCPDLINPK);
	}
};
