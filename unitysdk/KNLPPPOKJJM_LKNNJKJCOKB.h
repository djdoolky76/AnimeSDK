#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_LKNNJKJCOKB_AAHPKAANKLO_OFFSET UNITYSDK_OFFSET(0x199678F0)
#define KNLPPPOKJJM_LKNNJKJCOKB_NICLGOJOGAI_OFFSET UNITYSDK_OFFSET(0x199679E0)
#define KNLPPPOKJJM_LKNNJKJCOKB__CTOR_OFFSET UNITYSDK_OFFSET(0x199678E0)

inline static constexpr unsigned int KNLPPPOKJJM_LKNNJKJCOKB_TypeDefinitionIndex = 67490;

class KNLPPPOKJJM_LKNNJKJCOKB : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LKNNJKJCOKB__CTOR_OFFSET))(this);
	}

	::System::Void AAHPKAANKLO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LKNNJKJCOKB_AAHPKAANKLO_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void NICLGOJOGAI(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LKNNJKJCOKB_NICLGOJOGAI_OFFSET))(this, BHDNBGLCNOM);
	}
};
