#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IEDHKGPALKM_ICILMDCEGLC_IBABIOOGJHB_OFFSET UNITYSDK_OFFSET(0x16F5EBD0)
#define IEDHKGPALKM_ICILMDCEGLC_LDKLBAJKDCE_OFFSET UNITYSDK_OFFSET(0x16F5EBE0)
#define IEDHKGPALKM_ICILMDCEGLC__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5EBC0)

inline static constexpr unsigned int IEDHKGPALKM_ICILMDCEGLC_TypeDefinitionIndex = 89858;

class IEDHKGPALKM_ICILMDCEGLC : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_ICILMDCEGLC__CTOR_OFFSET))(this);
	}

	::System::Void IBABIOOGJHB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_ICILMDCEGLC_IBABIOOGJHB_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LDKLBAJKDCE(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_ICILMDCEGLC_LDKLBAJKDCE_OFFSET))(this, JCHFKGGDDFB);
	}
};
