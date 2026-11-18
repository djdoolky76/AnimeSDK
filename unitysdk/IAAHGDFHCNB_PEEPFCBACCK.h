#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define IAAHGDFHCNB_PEEPFCBACCK_JBEAGFFCJBG_OFFSET UNITYSDK_OFFSET(0x140D2EA0)
#define IAAHGDFHCNB_PEEPFCBACCK__CTOR_OFFSET UNITYSDK_OFFSET(0x140D2E90)

inline static constexpr unsigned int IAAHGDFHCNB_PEEPFCBACCK_TypeDefinitionIndex = 88132;

class IAAHGDFHCNB_PEEPFCBACCK : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_PEEPFCBACCK__CTOR_OFFSET))(this);
	}

	::System::Void JBEAGFFCJBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_PEEPFCBACCK_JBEAGFFCJBG_OFFSET))(this);
	}
};
