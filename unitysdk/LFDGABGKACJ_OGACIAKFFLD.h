#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorUpdateMode.h"

class LFDGABGKACJ;
namespace UnityEngine { class Animator; }

#define LFDGABGKACJ_OGACIAKFFLD_KIKOKPKDOMN_OFFSET UNITYSDK_OFFSET(0x126D8FD0)
#define LFDGABGKACJ_OGACIAKFFLD_MJEBONICOHG_OFFSET UNITYSDK_OFFSET(0x126D9080)
#define LFDGABGKACJ_OGACIAKFFLD__CTOR_OFFSET UNITYSDK_OFFSET(0x126D8CA0)

inline static constexpr unsigned int LFDGABGKACJ_OGACIAKFFLD_TypeDefinitionIndex = 38972;

class LFDGABGKACJ_OGACIAKFFLD : public ::System::Object
{
public:
	::LFDGABGKACJ* KLHPEBKNIFB; // 0x10
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x18
	::UnityEngine::AnimatorUpdateMode EFEMMELDFDK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDGABGKACJ_OGACIAKFFLD__CTOR_OFFSET))(this);
	}

	::System::Void KIKOKPKDOMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDGABGKACJ_OGACIAKFFLD_KIKOKPKDOMN_OFFSET))(this);
	}

	::System::Void MJEBONICOHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDGABGKACJ_OGACIAKFFLD_MJEBONICOHG_OFFSET))(this);
	}
};
