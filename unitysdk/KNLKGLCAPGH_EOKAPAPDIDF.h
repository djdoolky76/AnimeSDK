#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_EOKAPAPDIDF_MJONNLFPECN_OFFSET UNITYSDK_OFFSET(0x19967780)
#define KNLKGLCAPGH_EOKAPAPDIDF__CTOR_OFFSET UNITYSDK_OFFSET(0x19967770)

inline static constexpr unsigned int KNLKGLCAPGH_EOKAPAPDIDF_TypeDefinitionIndex = 41106;

class KNLKGLCAPGH_EOKAPAPDIDF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_EOKAPAPDIDF__CTOR_OFFSET))(this);
	}

	::System::Void MJONNLFPECN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_EOKAPAPDIDF_MJONNLFPECN_OFFSET))(this, PIIPCLCCOIG);
	}
};
