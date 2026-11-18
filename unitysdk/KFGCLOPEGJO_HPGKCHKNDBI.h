#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define KFGCLOPEGJO_HPGKCHKNDBI_NNFGOFPLKIL_OFFSET UNITYSDK_OFFSET(0x13C55600)
#define KFGCLOPEGJO_HPGKCHKNDBI__CTOR_OFFSET UNITYSDK_OFFSET(0x13C555F0)

inline static constexpr unsigned int KFGCLOPEGJO_HPGKCHKNDBI_TypeDefinitionIndex = 78923;

class KFGCLOPEGJO_HPGKCHKNDBI : public ::System::Object
{
public:
	::System::String* CJGAMEOMLIO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HPGKCHKNDBI__CTOR_OFFSET))(this);
	}

	::System::Void NNFGOFPLKIL(::UnityEngine::Animator* GBELIHABEDH, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HPGKCHKNDBI_NNFGOFPLKIL_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}
};
