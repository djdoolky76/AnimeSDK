#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define IOFOPGBNFHL_HDAJOLPNCNO_OFFSET UNITYSDK_OFFSET(0x160C0A60)
#define IOFOPGBNFHL_IFLLODAPGPO_OFFSET UNITYSDK_OFFSET(0x160C0A00)
#define IOFOPGBNFHL_KDNDHKNBANK_OFFSET UNITYSDK_OFFSET(0x160C0A10)
#define IOFOPGBNFHL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x160C0AC0)
#define IOFOPGBNFHL__CTOR_OFFSET UNITYSDK_OFFSET(0x160C09F0)

inline static constexpr unsigned int IOFOPGBNFHL_TypeDefinitionIndex = 64506;

class IOFOPGBNFHL : public ::System::Object
{
public:
	::System::Action* EOMHKBLHFCE; // 0x10

	::System::Void _ctor(::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IOFOPGBNFHL__CTOR_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Boolean IFLLODAPGPO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFOPGBNFHL_IFLLODAPGPO_OFFSET))(this);
	}

	::System::Void KDNDHKNBANK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFOPGBNFHL_KDNDHKNBANK_OFFSET))(this);
	}

	::System::Void HDAJOLPNCNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFOPGBNFHL_HDAJOLPNCNO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFOPGBNFHL_PHOADBJGFBE_OFFSET))(this);
	}
};
