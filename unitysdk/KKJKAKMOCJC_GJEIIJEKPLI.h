#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define KKJKAKMOCJC_GJEIIJEKPLI_EHKNINPBFDP_OFFSET UNITYSDK_OFFSET(0x17662410)
#define KKJKAKMOCJC_GJEIIJEKPLI__CTOR_OFFSET UNITYSDK_OFFSET(0x17662400)

inline static constexpr unsigned int KKJKAKMOCJC_GJEIIJEKPLI_TypeDefinitionIndex = 66235;

class KKJKAKMOCJC_GJEIIJEKPLI : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 MODAECOCCBC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_GJEIIJEKPLI__CTOR_OFFSET))(this);
	}

	::System::Void EHKNINPBFDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_GJEIIJEKPLI_EHKNINPBFDP_OFFSET))(this);
	}
};
