#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KPAKKOJMBHN;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_MCCDDEIPNHD_ABIOPDMIOCD_OFFSET UNITYSDK_OFFSET(0x125CC530)
#define GENHOCEIFEE_MCCDDEIPNHD_DGOEFFJCAFL_OFFSET UNITYSDK_OFFSET(0x125CC5A0)
#define GENHOCEIFEE_MCCDDEIPNHD__CTOR_OFFSET UNITYSDK_OFFSET(0x125CC520)

inline static constexpr unsigned int GENHOCEIFEE_MCCDDEIPNHD_TypeDefinitionIndex = 52654;

class GENHOCEIFEE_MCCDDEIPNHD : public ::System::Object
{
public:
	::System::Action_1<::KPAKKOJMBHN*>* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_MCCDDEIPNHD__CTOR_OFFSET))(this);
	}

	::System::Void ABIOPDMIOCD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_MCCDDEIPNHD_ABIOPDMIOCD_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void DGOEFFJCAFL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_MCCDDEIPNHD_DGOEFFJCAFL_OFFSET))(this, BHDNBGLCNOM);
	}
};
