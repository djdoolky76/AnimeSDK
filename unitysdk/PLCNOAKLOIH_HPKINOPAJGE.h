#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JLAFANJKHHN;

#define PLCNOAKLOIH_HPKINOPAJGE_OOPAALOFGHL_OFFSET UNITYSDK_OFFSET(0x194B2BD0)
#define PLCNOAKLOIH_HPKINOPAJGE__CTOR_OFFSET UNITYSDK_OFFSET(0x194B2BC0)

inline static constexpr unsigned int PLCNOAKLOIH_HPKINOPAJGE_TypeDefinitionIndex = 89228;

class PLCNOAKLOIH_HPKINOPAJGE : public ::System::Object
{
public:
	::System::Int32 KJMPMHECMMB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_HPKINOPAJGE__CTOR_OFFSET))(this);
	}

	::System::Boolean OOPAALOFGHL(::JLAFANJKHHN* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::JLAFANJKHHN*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_HPKINOPAJGE_OOPAALOFGHL_OFFSET))(this, HAAEBCOBKFF);
	}
};
