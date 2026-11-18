#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define NMMDCJGKHOB_JPAAEKNCOCL_CMDKPOGKGCI_OFFSET UNITYSDK_OFFSET(0xE59D880)
#define NMMDCJGKHOB_JPAAEKNCOCL__CTOR_OFFSET UNITYSDK_OFFSET(0xE59D870)

inline static constexpr unsigned int NMMDCJGKHOB_JPAAEKNCOCL_TypeDefinitionIndex = 54825;

class NMMDCJGKHOB_JPAAEKNCOCL : public ::System::Object
{
public:
	::System::Action* FDIAFFIHIFF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_JPAAEKNCOCL__CTOR_OFFSET))(this);
	}

	::System::Void CMDKPOGKGCI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_JPAAEKNCOCL_CMDKPOGKGCI_OFFSET))(this, PIIPCLCCOIG);
	}
};
