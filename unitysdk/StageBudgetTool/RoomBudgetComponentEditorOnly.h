#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace StageBudgetTool { class Room; }

#define STAGEBUDGETTOOL_ROOMBUDGETCOMPONENTEDITORONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC4A2B0)

namespace StageBudgetTool
{
	inline static constexpr unsigned int RoomBudgetComponentEditorOnly_TypeDefinitionIndex = 48743;

	class RoomBudgetComponentEditorOnly : public ::UnityEngine::MonoBehaviour
	{
	public:
		::StageBudgetTool::Room* room; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_ROOMBUDGETCOMPONENTEDITORONLY_CTOR_OFFSET))(this);
		}

	};
}
