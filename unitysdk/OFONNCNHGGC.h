#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JDMPFJDCDKG.h"

class DMDOIHPMGAB;
class GFKLHDOEAIJ;
namespace System { class String; }

#define OFONNCNHGGC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x11B26F10)
#define OFONNCNHGGC_KHABHIGBPIN_OFFSET UNITYSDK_OFFSET(0x11B26CE0)
#define OFONNCNHGGC_KMLCCEMBKKH_OFFSET UNITYSDK_OFFSET(0x11B26F50)
#define OFONNCNHGGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11B26E80)
#define OFONNCNHGGC__CTOR_OFFSET UNITYSDK_OFFSET(0x11B26CD0)

inline static constexpr unsigned int OFONNCNHGGC_TypeDefinitionIndex = 80908;

class OFONNCNHGGC : public ::System::Object
{
public:
	::Il2CppArray<::GFKLHDOEAIJ*>* CJDMINIKNFO; // 0x10

	::System::Void _ctor(::Il2CppArray<::GFKLHDOEAIJ*>* HBEPDMIABKM)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::GFKLHDOEAIJ*>*))((::PBYTE)hIl2Cpp + OFONNCNHGGC__CTOR_OFFSET))(this, HBEPDMIABKM);
	}

	::System::Boolean KHABHIGBPIN(::DMDOIHPMGAB* FHIOPFNMGDF, ::JDMPFJDCDKG& HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::DMDOIHPMGAB*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + OFONNCNHGGC_KHABHIGBPIN_OFFSET))(this, FHIOPFNMGDF, HBMGHPEPBNC);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFONNCNHGGC_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFONNCNHGGC_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean KMLCCEMBKKH(::DMDOIHPMGAB* FHIOPFNMGDF, ::JDMPFJDCDKG& HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::DMDOIHPMGAB*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + OFONNCNHGGC_KMLCCEMBKKH_OFFSET))(this, FHIOPFNMGDF, HBMGHPEPBNC);
	}
};
