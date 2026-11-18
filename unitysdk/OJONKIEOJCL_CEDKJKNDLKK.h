#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OJONKIEOJCL_CEDKJKNDLKK_GFHPANNCENG_OFFSET UNITYSDK_OFFSET(0x1844B0E0)
#define OJONKIEOJCL_CEDKJKNDLKK_GGGHOKEAOBB_OFFSET UNITYSDK_OFFSET(0x1844B0F0)
#define OJONKIEOJCL_CEDKJKNDLKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1844B0D0)

inline static constexpr unsigned int OJONKIEOJCL_CEDKJKNDLKK_TypeDefinitionIndex = 91168;

class OJONKIEOJCL_CEDKJKNDLKK : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJONKIEOJCL_CEDKJKNDLKK__CTOR_OFFSET))(this);
	}

	::System::Void GFHPANNCENG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJONKIEOJCL_CEDKJKNDLKK_GFHPANNCENG_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void GGGHOKEAOBB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJONKIEOJCL_CEDKJKNDLKK_GGGHOKEAOBB_OFFSET))(this, PIIPCLCCOIG);
	}
};
