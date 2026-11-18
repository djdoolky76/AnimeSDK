#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PNJDGHBEMLK_CFHKNIIIPMD_CBLEPOCBFPF_OFFSET UNITYSDK_OFFSET(0x1BF338B0)
#define PNJDGHBEMLK_CFHKNIIIPMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF338A0)

inline static constexpr unsigned int PNJDGHBEMLK_CFHKNIIIPMD_TypeDefinitionIndex = 64962;

class PNJDGHBEMLK_CFHKNIIIPMD : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CFHKNIIIPMD__CTOR_OFFSET))(this);
	}

	::System::Void CBLEPOCBFPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CFHKNIIIPMD_CBLEPOCBFPF_OFFSET))(this);
	}
};
