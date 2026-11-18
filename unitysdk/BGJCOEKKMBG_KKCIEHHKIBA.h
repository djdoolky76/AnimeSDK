#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIOOPDMDJBC;
namespace System { class Action; }

#define BGJCOEKKMBG_KKCIEHHKIBA_ILFLBLKNBDP_OFFSET UNITYSDK_OFFSET(0x12D2BE30)
#define BGJCOEKKMBG_KKCIEHHKIBA__CTOR_OFFSET UNITYSDK_OFFSET(0x12D2BE20)

inline static constexpr unsigned int BGJCOEKKMBG_KKCIEHHKIBA_TypeDefinitionIndex = 46534;

class BGJCOEKKMBG_KKCIEHHKIBA : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_KKCIEHHKIBA__CTOR_OFFSET))(this);
	}

	::System::Void ILFLBLKNBDP(::HIOOPDMDJBC* FKDAHCPNEBI)
	{
		return ((::System::Void(*)(::PVOID, ::HIOOPDMDJBC*))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_KKCIEHHKIBA_ILFLBLKNBDP_OFFSET))(this, FKDAHCPNEBI);
	}
};
