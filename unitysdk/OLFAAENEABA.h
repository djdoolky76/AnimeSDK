#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace UnityEngine { class Transform; }

#define OLFAAENEABA_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x11B42870)
#define OLFAAENEABA_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x11B42980)
#define OLFAAENEABA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B42910)

inline static constexpr unsigned int OLFAAENEABA_TypeDefinitionIndex = 41680;

class OLFAAENEABA : public ::PKMJPMFCNBK
{
public:
	::UnityEngine::Transform* FLIBOKNMPFE; // 0x80
	::System::Boolean BMJCIEEMEJH; // 0x88
	::System::Byte _padding0[0x3];
	::System::Single NFKAEIJMNML; // 0x8C
	::System::Int32 FICNMDFGKCM; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFAAENEABA__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFAAENEABA_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFAAENEABA_KHJELIBOECB_OFFSET))(this);
	}
};
