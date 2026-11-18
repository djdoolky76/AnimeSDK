#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define NPGBGLGJGCF_IJLKILALPMK_LNHGOPJMJBB__CTOR_OFFSET UNITYSDK_OFFSET(0x635BD0)

inline static constexpr unsigned int NPGBGLGJGCF_IJLKILALPMK_LNHGOPJMJBB_TypeDefinitionIndex = 59326;

struct alignas(8) NPGBGLGJGCF_IJLKILALPMK_LNHGOPJMJBB
{
	::System::String* MCOHLHMKLIP; // 0x10
	::UnityEngine::Vector3 CKPGOKHECCH; // 0x18
	::System::Boolean NNJLDLIHINN; // 0x24

	::System::Void _ctor(::System::String* NONAHPBFJPB, ::UnityEngine::Vector3 IKDNJGDGDDI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_IJLKILALPMK_LNHGOPJMJBB__CTOR_OFFSET))(this, NONAHPBFJPB, IKDNJGDGDDI);
	}
};
