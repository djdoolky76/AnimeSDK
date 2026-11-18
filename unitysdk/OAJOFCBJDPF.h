#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JDMPFJDCDKG.h"

class DMDOIHPMGAB;
namespace System { class String; }

#define OAJOFCBJDPF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x15FBDFE0)
#define OAJOFCBJDPF_KHABHIGBPIN_OFFSET UNITYSDK_OFFSET(0x15FBDEA0)
#define OAJOFCBJDPF_KMLCCEMBKKH_OFFSET UNITYSDK_OFFSET(0x15FBDF50)
#define OAJOFCBJDPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15FBDF10)
#define OAJOFCBJDPF__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBDE70)

inline static constexpr unsigned int OAJOFCBJDPF_TypeDefinitionIndex = 38796;

class OAJOFCBJDPF : public ::System::Object
{
public:
	::System::String* DKEJPPGIMHA; // 0x10

	::System::Void _ctor(::System::String* FHLDAJFKJGN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OAJOFCBJDPF__CTOR_OFFSET))(this, FHLDAJFKJGN);
	}

	::System::Boolean KHABHIGBPIN(::DMDOIHPMGAB* FHIOPFNMGDF, ::JDMPFJDCDKG& HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::DMDOIHPMGAB*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + OAJOFCBJDPF_KHABHIGBPIN_OFFSET))(this, FHIOPFNMGDF, HBMGHPEPBNC);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJOFCBJDPF_TOSTRING_OFFSET))(this);
	}

	::System::Boolean KMLCCEMBKKH(::DMDOIHPMGAB* FHIOPFNMGDF, ::JDMPFJDCDKG& HBMGHPEPBNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::DMDOIHPMGAB*, ::JDMPFJDCDKG&))((::PBYTE)hIl2Cpp + OAJOFCBJDPF_KMLCCEMBKKH_OFFSET))(this, FHIOPFNMGDF, HBMGHPEPBNC);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJOFCBJDPF_DPIHOJBBGLA_OFFSET))(this);
	}
};
