#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_OPENWORLD_MONOSTAGEPREFABINFOEDITORDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE493FB0)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int MonoStagePrefabInfoEditorData_TypeDefinitionIndex = 75867;

	class MonoStagePrefabInfoEditorData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_MONOSTAGEPREFABINFOEDITORDATA_CTOR_OFFSET))(this);
		}

	};
}
