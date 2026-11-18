#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define LMPKENDCEBM_ANIIOKLLGFL_OFFSET UNITYSDK_OFFSET(0x14DCA260)
#define LMPKENDCEBM__CTOR_OFFSET UNITYSDK_OFFSET(0x14DCA250)

inline static constexpr unsigned int LMPKENDCEBM_TypeDefinitionIndex = 80691;

class LMPKENDCEBM : public ::System::Object
{
public:
	::System::String* OBEGMFGKBCA; // 0x10
	::UnityEngine::Transform* HIICLDDAEEG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPKENDCEBM__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask ANIIOKLLGFL()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPKENDCEBM_ANIIOKLLGFL_OFFSET))(this);
	}
};
