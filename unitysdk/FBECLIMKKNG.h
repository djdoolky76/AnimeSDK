#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JDMPFJDCDKG.h"

class DMDOIHPMGAB;
class GFKLHDOEAIJ;
namespace System { class String; }

#define FBECLIMKKNG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x11CECCA0)
#define FBECLIMKKNG_KHABHIGBPIN_OFFSET UNITYSDK_OFFSET(0x11CECA70)
#define FBECLIMKKNG_KMLCCEMBKKH_OFFSET UNITYSDK_OFFSET(0x11CECCE0)
#define FBECLIMKKNG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11CECC10)
#define FBECLIMKKNG__CTOR_OFFSET UNITYSDK_OFFSET(0x11CECA60)

inline static constexpr unsigned int FBECLIMKKNG_TypeDefinitionIndex = 49279;

class FBECLIMKKNG : public ::System::Object
{
public:
	::Il2CppArray<::GFKLHDOEAIJ*>* CJDMINIKNFO; // 0x10

	::System::Void _ctor(::Il2CppArray<::GFKLHDOEAIJ*>* HBEPDMIABKM)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::GFKLHDOEAIJ*>*))((::PBYTE)hIl2Cpp + FBECLIMKKNG__CTOR_OFFSET))(this, HBEPDMIABKM);
	}

	::System::Boolean KHABHIGBPIN(::DMDOIHPMGAB* FHIOPFNMGDF, ::JDMPFJDCDKG& HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::DMDOIHPMGAB*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + FBECLIMKKNG_KHABHIGBPIN_OFFSET))(this, FHIOPFNMGDF, HBMGHPEPBNC);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBECLIMKKNG_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBECLIMKKNG_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean KMLCCEMBKKH(::DMDOIHPMGAB* FHIOPFNMGDF, ::JDMPFJDCDKG& HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::DMDOIHPMGAB*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + FBECLIMKKNG_KMLCCEMBKKH_OFFSET))(this, FHIOPFNMGDF, HBMGHPEPBNC);
	}
};
