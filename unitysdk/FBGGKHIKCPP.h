#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/ValueType.h"

#define FBGGKHIKCPP__CTOR_OFFSET UNITYSDK_OFFSET(0x635860)

inline static constexpr unsigned int FBGGKHIKCPP_TypeDefinitionIndex = 91554;

struct alignas(4) FBGGKHIKCPP
{
	::HPBIMDNDPLK BFEKICPGLBK; // 0x10
	::HPBIMDNDPLK JFCGODPKBKD; // 0x14
	::MoleMole::LogicButtonInputType DEEEKAKAPJL; // 0x18
	::System::Int32 GFBALMHLAJP; // 0x1C
	::System::Int32 CBBIHGAOGAH; // 0x20
	::AIOFAMODPOO BPDAECLLMGL; // 0x24

	::System::Void _ctor(::HPBIMDNDPLK PIMBPDIANCL, ::HPBIMDNDPLK LPIHAHMNBIG, ::MoleMole::LogicButtonInputType KKKMLLLKPHB, ::System::Int32 CGEOMPGDEKI, ::System::Int32 NAIOJPENPBM, ::AIOFAMODPOO JGGPPJNIAKN)
	{
		return ((::System::Void(*)(::PVOID, ::HPBIMDNDPLK, ::HPBIMDNDPLK, ::MoleMole::LogicButtonInputType, ::System::Int32, ::System::Int32, ::AIOFAMODPOO))((::PBYTE)hIl2Cpp + FBGGKHIKCPP__CTOR_OFFSET))(this, PIMBPDIANCL, LPIHAHMNBIG, KKKMLLLKPHB, CGEOMPGDEKI, NAIOJPENPBM, JGGPPJNIAKN);
	}
};
