#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJCHCMEFPIF.h"
#include "unitysdk/System/Object.h"

class LKMLFIAKFOO_MBFEFNLCIKI;
class PLPHBLLCFBF;

#define LKMLFIAKFOO_JEOJBFFKNNN_LGGPLJHCPBG_OFFSET UNITYSDK_OFFSET(0x12D39180)
#define LKMLFIAKFOO_JEOJBFFKNNN__CTOR_OFFSET UNITYSDK_OFFSET(0x12D39170)

inline static constexpr unsigned int LKMLFIAKFOO_JEOJBFFKNNN_TypeDefinitionIndex = 43598;

class LKMLFIAKFOO_JEOJBFFKNNN : public ::System::Object
{
public:
	::LKMLFIAKFOO_MBFEFNLCIKI* EEMOEMFLABI; // 0x10
	::DJCHCMEFPIF HNPGPDCCPEF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_JEOJBFFKNNN__CTOR_OFFSET))(this);
	}

	::System::Void LGGPLJHCPBG(::PLPHBLLCFBF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PLPHBLLCFBF*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_JEOJBFFKNNN_LGGPLJHCPBG_OFFSET))(this, GLAOEHCGCFO);
	}
};
