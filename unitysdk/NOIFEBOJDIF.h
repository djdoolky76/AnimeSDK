#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define NOIFEBOJDIF_LOGMNFFOOCB_OFFSET UNITYSDK_OFFSET(0x106807A0)

inline static constexpr unsigned int NOIFEBOJDIF_TypeDefinitionIndex = 91564;

struct alignas(8) NOIFEBOJDIF
{
	::System::Nullable_1<::UnityEngine::Vector3> OHOGDOMNHNK; // 0x10
	::System::Byte _padding0[0x8];
	::System::Nullable_1<::System::Object*> CDNNEKJCKLN; // 0x20

	/*
	static ::NOIFEBOJDIF LOGMNFFOOCB()
	{
		return ((::NOIFEBOJDIF(*)())((::PBYTE)hIl2Cpp + NOIFEBOJDIF_LOGMNFFOOCB_OFFSET))();
	}
	*/
};
