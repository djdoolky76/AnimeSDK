#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageBudgetTool/EntityType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define STAGEBUDGETTOOL_ENTITYBUDGETCOMPONENTEDITORONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC499F0)

namespace StageBudgetTool
{
	inline static constexpr unsigned int EntityBudgetComponentEditorOnly_TypeDefinitionIndex = 48741;

	class EntityBudgetComponentEditorOnly : public ::UnityEngine::MonoBehaviour
	{
	public:
		::StageBudgetTool::EntityType Type; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_ENTITYBUDGETCOMPONENTEDITORONLY_CTOR_OFFSET))(this);
		}

	};
}
