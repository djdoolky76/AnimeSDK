#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_IJELBOBFOIG_HFLEKFKHOHI_OFFSET UNITYSDK_OFFSET(0x12D00B80)
#define AKAAONCKJJP_IJELBOBFOIG_IJNFCCJMCKJ_OFFSET UNITYSDK_OFFSET(0x12D00B70)
#define AKAAONCKJJP_IJELBOBFOIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12D00B60)

inline static constexpr unsigned int AKAAONCKJJP_IJELBOBFOIG_TypeDefinitionIndex = 42169;

class AKAAONCKJJP_IJELBOBFOIG : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_IJELBOBFOIG__CTOR_OFFSET))(this);
	}

	::System::Void IJNFCCJMCKJ(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_IJELBOBFOIG_IJNFCCJMCKJ_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void HFLEKFKHOHI(::OAEFGCLEHHO* HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_IJELBOBFOIG_HFLEKFKHOHI_OFFSET))(this, HAAEBCOBKFF);
	}
};
