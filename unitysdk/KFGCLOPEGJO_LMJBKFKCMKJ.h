#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define KFGCLOPEGJO_LMJBKFKCMKJ_MKHFDKPBPBP_OFFSET UNITYSDK_OFFSET(0x177034C0)
#define KFGCLOPEGJO_LMJBKFKCMKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x177034B0)

inline static constexpr unsigned int KFGCLOPEGJO_LMJBKFKCMKJ_TypeDefinitionIndex = 78963;

class KFGCLOPEGJO_LMJBKFKCMKJ : public ::System::Object
{
public:
	::System::String* CJGAMEOMLIO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_LMJBKFKCMKJ__CTOR_OFFSET))(this);
	}

	::System::Void MKHFDKPBPBP(::UnityEngine::Animator* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_LMJBKFKCMKJ_MKHFDKPBPBP_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}
};
