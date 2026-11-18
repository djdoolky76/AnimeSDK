#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Collider; }

#define HPKFJHNCHBF__CTOR_OFFSET UNITYSDK_OFFSET(0xF8327C0)

inline static constexpr unsigned int HPKFJHNCHBF_TypeDefinitionIndex = 65938;

class HPKFJHNCHBF : public ::System::Object
{
public:
	::UnityEngine::Collider* NKJCNJAFDLK; // 0x10
	::UnityEngine::Collider* BKKMAHANACP; // 0x18
	::System::Boolean NILMDHLDLKA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKFJHNCHBF__CTOR_OFFSET))(this);
	}
};
