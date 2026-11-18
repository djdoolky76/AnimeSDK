#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_BCDNEIBHDNF_GEDGPFJFNGK_OFFSET UNITYSDK_OFFSET(0x12D8E5A0)
#define MJDCEGKHJEG_BCDNEIBHDNF_OMCHOGGNNBE_OFFSET UNITYSDK_OFFSET(0x12D8E590)
#define MJDCEGKHJEG_BCDNEIBHDNF__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8E580)

inline static constexpr unsigned int MJDCEGKHJEG_BCDNEIBHDNF_TypeDefinitionIndex = 56443;

class MJDCEGKHJEG_BCDNEIBHDNF : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_BCDNEIBHDNF__CTOR_OFFSET))(this);
	}

	::System::Void OMCHOGGNNBE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_BCDNEIBHDNF_OMCHOGGNNBE_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void GEDGPFJFNGK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_BCDNEIBHDNF_GEDGPFJFNGK_OFFSET))(this, PIIPCLCCOIG);
	}
};
