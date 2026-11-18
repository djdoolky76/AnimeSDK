#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_FCNINFEBPIA_ACCDBEADOML_OFFSET UNITYSDK_OFFSET(0x172D1A40)
#define OKEIICNPAMA_FCNINFEBPIA_DJNGCGMNOAJ_OFFSET UNITYSDK_OFFSET(0x172D1A30)
#define OKEIICNPAMA_FCNINFEBPIA__CTOR_OFFSET UNITYSDK_OFFSET(0x172D1A20)

inline static constexpr unsigned int OKEIICNPAMA_FCNINFEBPIA_TypeDefinitionIndex = 87982;

class OKEIICNPAMA_FCNINFEBPIA : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_FCNINFEBPIA__CTOR_OFFSET))(this);
	}

	::System::Void DJNGCGMNOAJ(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_FCNINFEBPIA_DJNGCGMNOAJ_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void ACCDBEADOML(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_FCNINFEBPIA_ACCDBEADOML_OFFSET))(this, PIIPCLCCOIG);
	}
};
