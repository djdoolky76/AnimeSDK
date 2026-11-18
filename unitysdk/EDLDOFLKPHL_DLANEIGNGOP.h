#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EDLDOFLKPHL_DLANEIGNGOP_BLNJCNGIEPH_OFFSET UNITYSDK_OFFSET(0x15498820)
#define EDLDOFLKPHL_DLANEIGNGOP_FNIECEDMLCC_OFFSET UNITYSDK_OFFSET(0x15498810)
#define EDLDOFLKPHL_DLANEIGNGOP__CTOR_OFFSET UNITYSDK_OFFSET(0x15498800)

inline static constexpr unsigned int EDLDOFLKPHL_DLANEIGNGOP_TypeDefinitionIndex = 61492;

class EDLDOFLKPHL_DLANEIGNGOP : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_DLANEIGNGOP__CTOR_OFFSET))(this);
	}

	::System::Void FNIECEDMLCC(::OAEFGCLEHHO* PPDEFOFBJKE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_DLANEIGNGOP_FNIECEDMLCC_OFFSET))(this, PPDEFOFBJKE);
	}

	::System::Void BLNJCNGIEPH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_DLANEIGNGOP_BLNJCNGIEPH_OFFSET))(this, BHDNBGLCNOM);
	}
};
