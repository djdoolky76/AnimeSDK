#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIKBEJKPCB;
namespace System { class Action; }

#define OCIKBEJKPCB_PCHMNBIMLKE_PNGIAKHNPDD_OFFSET UNITYSDK_OFFSET(0x13A4ACF0)
#define OCIKBEJKPCB_PCHMNBIMLKE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4ACE0)

inline static constexpr unsigned int OCIKBEJKPCB_PCHMNBIMLKE_TypeDefinitionIndex = 66589;

class OCIKBEJKPCB_PCHMNBIMLKE : public ::System::Object
{
public:
	::OCIKBEJKPCB* KLHPEBKNIFB; // 0x10
	::System::Action* GJBHEJGENMI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_PCHMNBIMLKE__CTOR_OFFSET))(this);
	}

	::System::Void PNGIAKHNPDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKBEJKPCB_PCHMNBIMLKE_PNGIAKHNPDD_OFFSET))(this);
	}
};
