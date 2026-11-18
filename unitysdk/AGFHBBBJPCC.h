#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JDMPFJDCDKG.h"

class DMDOIHPMGAB;
class GFKLHDOEAIJ;
namespace System { class String; }

#define AGFHBBBJPCC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x16479060)
#define AGFHBBBJPCC_KHABHIGBPIN_OFFSET UNITYSDK_OFFSET(0x16478E40)
#define AGFHBBBJPCC_KMLCCEMBKKH_OFFSET UNITYSDK_OFFSET(0x16479000)
#define AGFHBBBJPCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16478F60)
#define AGFHBBBJPCC__CTOR_OFFSET UNITYSDK_OFFSET(0x16478E30)

inline static constexpr unsigned int AGFHBBBJPCC_TypeDefinitionIndex = 82184;

class AGFHBBBJPCC : public ::System::Object
{
public:
	::GFKLHDOEAIJ* GKMGNFPIFLD; // 0x10

	::System::Void _ctor(::GFKLHDOEAIJ* BDLKAKKCAII)
	{
		return ((::System::Void(*)(::PVOID, ::GFKLHDOEAIJ*))((::PBYTE)hIl2Cpp + AGFHBBBJPCC__CTOR_OFFSET))(this, BDLKAKKCAII);
	}

	::System::Boolean KHABHIGBPIN(::DMDOIHPMGAB* FHIOPFNMGDF, ::JDMPFJDCDKG& HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::DMDOIHPMGAB*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + AGFHBBBJPCC_KHABHIGBPIN_OFFSET))(this, FHIOPFNMGDF, HBMGHPEPBNC);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFHBBBJPCC_TOSTRING_OFFSET))(this);
	}

	::System::Boolean KMLCCEMBKKH(::DMDOIHPMGAB* FHIOPFNMGDF, ::JDMPFJDCDKG& HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::DMDOIHPMGAB*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + AGFHBBBJPCC_KMLCCEMBKKH_OFFSET))(this, FHIOPFNMGDF, HBMGHPEPBNC);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFHBBBJPCC_DPIHOJBBGLA_OFFSET))(this);
	}
};
