#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IEDHKGPALKM_IAOCOHJNDFB_EGFKBOPLGCL_OFFSET UNITYSDK_OFFSET(0x101382C0)
#define IEDHKGPALKM_IAOCOHJNDFB_KCHODBKCCPJ_OFFSET UNITYSDK_OFFSET(0x101382B0)
#define IEDHKGPALKM_IAOCOHJNDFB__CTOR_OFFSET UNITYSDK_OFFSET(0x101382A0)

inline static constexpr unsigned int IEDHKGPALKM_IAOCOHJNDFB_TypeDefinitionIndex = 89866;

class IEDHKGPALKM_IAOCOHJNDFB : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_IAOCOHJNDFB__CTOR_OFFSET))(this);
	}

	::System::Void KCHODBKCCPJ(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_IAOCOHJNDFB_KCHODBKCCPJ_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EGFKBOPLGCL(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_IAOCOHJNDFB_EGFKBOPLGCL_OFFSET))(this, JCHFKGGDDFB);
	}
};
