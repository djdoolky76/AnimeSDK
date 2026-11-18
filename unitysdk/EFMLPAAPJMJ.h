#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OEGFJABLDPO;

#define EFMLPAAPJMJ_MDLEBAPAGED_OFFSET UNITYSDK_OFFSET(0x16994470)
#define EFMLPAAPJMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x78EC40)

inline static constexpr unsigned int EFMLPAAPJMJ_TypeDefinitionIndex = 88026;

struct alignas(4) EFMLPAAPJMJ
{
	::UnityEngine::Vector3 KKFNDJBANAC; // 0x10
	::System::Single KIGIFAFHJFK; // 0x1C
	::UnityEngine::Vector3 HOHIOPPGFFA; // 0x20
	::System::Single AMPGJFAEAMD; // 0x2C

	::System::Void _ctor(::UnityEngine::Vector3 FKBPOCJCIIH, ::System::Single PJEJBDHCPPI, ::UnityEngine::Vector3 PIOEPMMCBDH, ::System::Single CBLANDNGOPP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EFMLPAAPJMJ__CTOR_OFFSET))(this, FKBPOCJCIIH, PJEJBDHCPPI, PIOEPMMCBDH, CBLANDNGOPP);
	}

	/*
	static ::System::Boolean MDLEBAPAGED(::OEGFJABLDPO* GBMLHHANFFN, ::OEGFJABLDPO* HODAIDNDKHD, ::EFMLPAAPJMJ& FLPDANMPEFJ)
	{
		return ((::System::Boolean(*)(::OEGFJABLDPO*, ::OEGFJABLDPO*, ::EFMLPAAPJMJ&))((::PBYTE)hIl2Cpp + EFMLPAAPJMJ_MDLEBAPAGED_OFFSET))(GBMLHHANFFN, HODAIDNDKHD, FLPDANMPEFJ);
	}
	*/
};
