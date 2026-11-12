#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGPERFORMANCEBLOCKINFOPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD55FD30)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugPerformanceBlockInfoPanel_TypeDefinitionIndex = 74816;

	class DebugPerformanceBlockInfoPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGPERFORMANCEBLOCKINFOPANEL_CTOR_OFFSET))(this);
		}

	};
}
