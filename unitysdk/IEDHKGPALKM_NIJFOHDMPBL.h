#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IEDHKGPALKM_NIJFOHDMPBL_ONKPACMFJPL_OFFSET UNITYSDK_OFFSET(0x153A28C0)
#define IEDHKGPALKM_NIJFOHDMPBL_PBHPOEIBIKP_OFFSET UNITYSDK_OFFSET(0x153A28D0)
#define IEDHKGPALKM_NIJFOHDMPBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1539FE20)

inline static constexpr unsigned int IEDHKGPALKM_NIJFOHDMPBL_TypeDefinitionIndex = 89855;

class IEDHKGPALKM_NIJFOHDMPBL : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_NIJFOHDMPBL__CTOR_OFFSET))(this);
	}

	::System::Void ONKPACMFJPL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_NIJFOHDMPBL_ONKPACMFJPL_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PBHPOEIBIKP(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_NIJFOHDMPBL_PBHPOEIBIKP_OFFSET))(this, JCHFKGGDDFB);
	}
};
