#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MJKKBBPPPPE;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define AKAAONCKJJP_DEDPFIFGCOC_GFGPIGAMJMJ_OFFSET UNITYSDK_OFFSET(0x16FF41C0)
#define AKAAONCKJJP_DEDPFIFGCOC_OLFAECJOIAM_OFFSET UNITYSDK_OFFSET(0x16FF4060)
#define AKAAONCKJJP_DEDPFIFGCOC__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF4050)

inline static constexpr unsigned int AKAAONCKJJP_DEDPFIFGCOC_TypeDefinitionIndex = 42190;

class AKAAONCKJJP_DEDPFIFGCOC : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action_1<::MJKKBBPPPPE*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_DEDPFIFGCOC__CTOR_OFFSET))(this);
	}

	::System::Void OLFAECJOIAM(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_DEDPFIFGCOC_OLFAECJOIAM_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void GFGPIGAMJMJ(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_DEDPFIFGCOC_GFGPIGAMJMJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
