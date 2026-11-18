#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CPMEKIGICIL_EPFHBBFALIL_BMPHGFONINE_OFFSET UNITYSDK_OFFSET(0x147B98D0)
#define CPMEKIGICIL_EPFHBBFALIL_OALCAMNMIJH_OFFSET UNITYSDK_OFFSET(0x147B98C0)
#define CPMEKIGICIL_EPFHBBFALIL__CTOR_OFFSET UNITYSDK_OFFSET(0x147B98B0)

inline static constexpr unsigned int CPMEKIGICIL_EPFHBBFALIL_TypeDefinitionIndex = 83478;

class CPMEKIGICIL_EPFHBBFALIL : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMEKIGICIL_EPFHBBFALIL__CTOR_OFFSET))(this);
	}

	::System::Void OALCAMNMIJH(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CPMEKIGICIL_EPFHBBFALIL_OALCAMNMIJH_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void BMPHGFONINE(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CPMEKIGICIL_EPFHBBFALIL_BMPHGFONINE_OFFSET))(this, JCHFKGGDDFB);
	}
};
