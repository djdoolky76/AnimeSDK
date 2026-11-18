#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define MJDCEGKHJEG_KDLFFCMJKLJ_KMDOPJGHOPA_OFFSET UNITYSDK_OFFSET(0x11F4EC70)
#define MJDCEGKHJEG_KDLFFCMJKLJ_MCODJGKKABO_OFFSET UNITYSDK_OFFSET(0x11F4EAD0)
#define MJDCEGKHJEG_KDLFFCMJKLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F4EAC0)

inline static constexpr unsigned int MJDCEGKHJEG_KDLFFCMJKLJ_TypeDefinitionIndex = 56441;

class MJDCEGKHJEG_KDLFFCMJKLJ : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x10
	::System::Boolean JONHEOHHGFA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_KDLFFCMJKLJ__CTOR_OFFSET))(this);
	}

	::System::Void MCODJGKKABO(::OAEFGCLEHHO* EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_KDLFFCMJKLJ_MCODJGKKABO_OFFSET))(this, EBFCACIEKBC);
	}

	::System::Void KMDOPJGHOPA(::OAEFGCLEHHO* EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_KDLFFCMJKLJ_KMDOPJGHOPA_OFFSET))(this, EBFCACIEKBC);
	}
};
