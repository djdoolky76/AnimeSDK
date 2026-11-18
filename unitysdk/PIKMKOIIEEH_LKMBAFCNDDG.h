#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define PIKMKOIIEEH_LKMBAFCNDDG_LPIDLLCICJN_OFFSET UNITYSDK_OFFSET(0x1D9CDCD0)
#define PIKMKOIIEEH_LKMBAFCNDDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CDCC0)

inline static constexpr unsigned int PIKMKOIIEEH_LKMBAFCNDDG_TypeDefinitionIndex = 53359;

class PIKMKOIIEEH_LKMBAFCNDDG : public ::System::Object
{
public:
	::System::String* CJBJONJDOLI; // 0x10
	::UnityEngine::GameObject* AMPCAMJGJJA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKMKOIIEEH_LKMBAFCNDDG__CTOR_OFFSET))(this);
	}

	::System::Void LPIDLLCICJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKMKOIIEEH_LKMBAFCNDDG_LPIDLLCICJN_OFFSET))(this);
	}
};
