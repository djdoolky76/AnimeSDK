#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOKBBHAHIE;
class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_MIHNAEKCLDP_GJGMPNGECHC_OFFSET UNITYSDK_OFFSET(0x153A5A70)
#define IFOKBBHAHIE_MIHNAEKCLDP_KFKLIMPKNOH_OFFSET UNITYSDK_OFFSET(0x153A59F0)
#define IFOKBBHAHIE_MIHNAEKCLDP__CTOR_OFFSET UNITYSDK_OFFSET(0x153A59E0)

inline static constexpr unsigned int IFOKBBHAHIE_MIHNAEKCLDP_TypeDefinitionIndex = 67426;

class IFOKBBHAHIE_MIHNAEKCLDP : public ::System::Object
{
public:
	::IFOKBBHAHIE* KLHPEBKNIFB; // 0x10
	::System::Action* AFKOOINGNAK; // 0x18
	::System::Action* OIPJFHJAKLA; // 0x20
	::System::Int32 DIEEDEBJCMP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_MIHNAEKCLDP__CTOR_OFFSET))(this);
	}

	::System::Void KFKLIMPKNOH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_MIHNAEKCLDP_KFKLIMPKNOH_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void GJGMPNGECHC(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_MIHNAEKCLDP_GJGMPNGECHC_OFFSET))(this, JMFEPDAHBED);
	}
};
