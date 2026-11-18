#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OEGFJABLDPO;

#define IMBJPCHADKF_MDLEBAPAGED_OFFSET UNITYSDK_OFFSET(0x16589500)
#define IMBJPCHADKF__CTOR_OFFSET UNITYSDK_OFFSET(0x786220)

inline static constexpr unsigned int IMBJPCHADKF_TypeDefinitionIndex = 71378;

struct alignas(4) IMBJPCHADKF
{
	::UnityEngine::Vector3 FKKOGLLPFCB; // 0x10
	::UnityEngine::Quaternion LCNDHBKDLPD; // 0x1C
	::UnityEngine::Vector3 IAGIPAIGJJC; // 0x2C
	::System::Single CPILHLELHCO; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3 MONIMCLDHLJ, ::UnityEngine::Quaternion JLEHKEKMDLJ, ::UnityEngine::Vector3 FCNPOKNKMOD, ::System::Single IAIIOAPEABF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IMBJPCHADKF__CTOR_OFFSET))(this, MONIMCLDHLJ, JLEHKEKMDLJ, FCNPOKNKMOD, IAIIOAPEABF);
	}

	/*
	static ::System::Boolean MDLEBAPAGED(::OEGFJABLDPO* GBMLHHANFFN, ::OEGFJABLDPO* HODAIDNDKHD, ::System::Single IAIIOAPEABF, ::IMBJPCHADKF& FLPDANMPEFJ)
	{
		return ((::System::Boolean(*)(::OEGFJABLDPO*, ::OEGFJABLDPO*, ::System::Single, ::IMBJPCHADKF&))((::PBYTE)hIl2Cpp + IMBJPCHADKF_MDLEBAPAGED_OFFSET))(GBMLHHANFFN, HODAIDNDKHD, IAIIOAPEABF, FLPDANMPEFJ);
	}
	*/
};
