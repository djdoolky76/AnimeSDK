#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EPJOGMLKEHJ;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define AKAAONCKJJP_OBJDJIJMDMN_CDOMJIPLLJN_OFFSET UNITYSDK_OFFSET(0x11BA6530)
#define AKAAONCKJJP_OBJDJIJMDMN_DHLNGLMGDPE_OFFSET UNITYSDK_OFFSET(0x11BA65A0)
#define AKAAONCKJJP_OBJDJIJMDMN__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA6520)

inline static constexpr unsigned int AKAAONCKJJP_OBJDJIJMDMN_TypeDefinitionIndex = 42171;

class AKAAONCKJJP_OBJDJIJMDMN : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action_1<::EPJOGMLKEHJ*>* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_OBJDJIJMDMN__CTOR_OFFSET))(this);
	}

	::System::Void CDOMJIPLLJN(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_OBJDJIJMDMN_CDOMJIPLLJN_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DHLNGLMGDPE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_OBJDJIJMDMN_DHLNGLMGDPE_OFFSET))(this, PIIPCLCCOIG);
	}
};
