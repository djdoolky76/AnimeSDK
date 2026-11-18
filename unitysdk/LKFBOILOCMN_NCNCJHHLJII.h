#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LKFBOILOCMN_NCNCJHHLJII_DLEFPPDBKBJ_OFFSET UNITYSDK_OFFSET(0x1A60FC40)
#define LKFBOILOCMN_NCNCJHHLJII__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60FC30)

inline static constexpr unsigned int LKFBOILOCMN_NCNCJHHLJII_TypeDefinitionIndex = 82642;

class LKFBOILOCMN_NCNCJHHLJII : public ::System::Object
{
public:
	::System::Action* IKFEFIMLPOD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_NCNCJHHLJII__CTOR_OFFSET))(this);
	}

	::System::Void DLEFPPDBKBJ(::System::Action* NNCFPPKALND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_NCNCJHHLJII_DLEFPPDBKBJ_OFFSET))(this, NNCFPPKALND);
	}
};
