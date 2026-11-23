#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60;
namespace System { class Action; }

#define F3F08B203D851D60_B4473421229F24A3_F41212BAB5ED1F79_OFFSET UNITYSDK_OFFSET(0x3981480)
#define F3F08B203D851D60_B4473421229F24A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_B4473421229F24A3_TypeDefinitionIndex = 12514;

class F3F08B203D851D60_B4473421229F24A3 : public ::System::Object
{
public:
	::System::Action* E09B0611C97A91F6; // 0x10
	::F3F08B203D851D60* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_B4473421229F24A3__CTOR_OFFSET))(this);
	}

	::System::Void F41212BAB5ED1F79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_B4473421229F24A3_F41212BAB5ED1F79_OFFSET))(this);
	}
};
