#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKACJBCOKJI.h"
#include "unitysdk/OMDJLKPMLMM.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"
#include "unitysdk/System/ValueType.h"

class MKNKKCOFIEI;

#define JFEPFCJBDAD__CTOR_OFFSET UNITYSDK_OFFSET(0x7B4020)

inline static constexpr unsigned int JFEPFCJBDAD_TypeDefinitionIndex = 40377;

struct alignas(4) JFEPFCJBDAD
{
	::ProtoScript::NodeState EEKCLNEKBPD; // 0x10
	::ProtoScript::NodeVisible AEHPDODKEGB; // 0x14
	::IKACJBCOKJI LPKHABFHCLM; // 0x18
	::OMDJLKPMLMM PIOCAOJDNNK; // 0x1C

	::System::Void _ctor(::MKNKKCOFIEI* MLCFEGOMFGH)
	{
		return ((::System::Void(*)(::PVOID, ::MKNKKCOFIEI*))((::PBYTE)hIl2Cpp + JFEPFCJBDAD__CTOR_OFFSET))(this, MLCFEGOMFGH);
	}
};
