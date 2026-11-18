#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define KJEMLLJMLJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1862FF70)

inline static constexpr unsigned int KJEMLLJMLJP_TypeDefinitionIndex = 82564;

class KJEMLLJMLJP : public ::System::Object
{
public:
	::UnityEngine::GameObject* EGGKPLBMNFF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEMLLJMLJP__CTOR_OFFSET))(this);
	}
};
