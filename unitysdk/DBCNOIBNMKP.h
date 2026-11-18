#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDNMHHIKMIL.h"

class JMNDEAFIAAF;

#define DBCNOIBNMKP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A30780)
#define DBCNOIBNMKP_OMCCGHBCCNI_OFFSET UNITYSDK_OFFSET(0x19A307C0)
#define DBCNOIBNMKP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A30AE0)

inline static constexpr unsigned int DBCNOIBNMKP_TypeDefinitionIndex = 82272;

class DBCNOIBNMKP : public ::BDNMHHIKMIL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCNOIBNMKP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCNOIBNMKP_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void OMCCGHBCCNI(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + DBCNOIBNMKP_OMCCGHBCCNI_OFFSET))(this, AAOCANGHBDG);
	}
};
