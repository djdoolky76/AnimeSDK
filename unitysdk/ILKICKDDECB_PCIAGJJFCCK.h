#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILKICKDDECB;
namespace System { class Action; }

#define ILKICKDDECB_PCIAGJJFCCK_PFIDILIBNND_OFFSET UNITYSDK_OFFSET(0x14A2C060)
#define ILKICKDDECB_PCIAGJJFCCK__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2C050)

inline static constexpr unsigned int ILKICKDDECB_PCIAGJJFCCK_TypeDefinitionIndex = 83985;

class ILKICKDDECB_PCIAGJJFCCK : public ::System::Object
{
public:
	::ILKICKDDECB* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKICKDDECB_PCIAGJJFCCK__CTOR_OFFSET))(this);
	}

	::System::Void PFIDILIBNND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKICKDDECB_PCIAGJJFCCK_PFIDILIBNND_OFFSET))(this);
	}
};
