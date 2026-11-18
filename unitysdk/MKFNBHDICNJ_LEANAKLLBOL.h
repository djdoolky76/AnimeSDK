#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGBMOOJHMBF;
class MKFNBHDICNJ;
namespace System { class Action; }

#define MKFNBHDICNJ_LEANAKLLBOL_HHLKFJLNBDO_OFFSET UNITYSDK_OFFSET(0x12D90CA0)
#define MKFNBHDICNJ_LEANAKLLBOL_KNEEHLCFKGL_OFFSET UNITYSDK_OFFSET(0x12D90C50)
#define MKFNBHDICNJ_LEANAKLLBOL__CTOR_OFFSET UNITYSDK_OFFSET(0x12D90C40)

inline static constexpr unsigned int MKFNBHDICNJ_LEANAKLLBOL_TypeDefinitionIndex = 61360;

class MKFNBHDICNJ_LEANAKLLBOL : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Action* DKDBPEPKALE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_LEANAKLLBOL__CTOR_OFFSET))(this);
	}

	::System::Void KNEEHLCFKGL(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_LEANAKLLBOL_KNEEHLCFKGL_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void HHLKFJLNBDO(::JGBMOOJHMBF* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_LEANAKLLBOL_HHLKFJLNBDO_OFFSET))(this, HMMMOCJAEOA);
	}
};
