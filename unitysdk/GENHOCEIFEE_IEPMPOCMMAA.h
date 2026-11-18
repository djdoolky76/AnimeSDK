#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class POCKECALIMF;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_IEPMPOCMMAA_DGCJLHGHCIM_OFFSET UNITYSDK_OFFSET(0x15CE0C80)
#define GENHOCEIFEE_IEPMPOCMMAA_KFEHODNBGHK_OFFSET UNITYSDK_OFFSET(0x15CE0C70)
#define GENHOCEIFEE_IEPMPOCMMAA__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE0C60)

inline static constexpr unsigned int GENHOCEIFEE_IEPMPOCMMAA_TypeDefinitionIndex = 52655;

class GENHOCEIFEE_IEPMPOCMMAA : public ::System::Object
{
public:
	::System::Action_1<::POCKECALIMF*>* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_IEPMPOCMMAA__CTOR_OFFSET))(this);
	}

	::System::Void KFEHODNBGHK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_IEPMPOCMMAA_KFEHODNBGHK_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void DGCJLHGHCIM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_IEPMPOCMMAA_DGCJLHGHCIM_OFFSET))(this, BHDNBGLCNOM);
	}
};
