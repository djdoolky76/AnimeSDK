#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphNodeConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172C01C0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConnectorConfig_TypeDefinitionIndex = 76702;

	class PathGraphConnectorConfig : public ::NPCCrowd::AI::PathGraphNodeConfig
	{
	public:
		::UnityEngine::Vector3 centerPosition; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* connections; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG__CTOR_OFFSET))(this);
		}
	};
}
