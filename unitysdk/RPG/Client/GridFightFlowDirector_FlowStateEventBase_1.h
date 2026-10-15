#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_FlowStateEventBase_1_TypeDefinitionIndex = 64577;

	template <typename T>
	class GridFightFlowDirector_FlowStateEventBase_1 : public ::System::Object
	{
	public:
		static T* StaticGet__Instance()
		{
			return (T*)UnitySDK::FromName("RPG.Client", "FlowStateEventBase`1")->GetStaticField(0x0);
		}

	};
}
