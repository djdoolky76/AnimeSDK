#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG::Client
{
	inline static constexpr unsigned int WorkNode_ActionParam_1_TypeDefinitionIndex = 61064;

	template <typename T>
	class WorkNode_ActionParam_1 : public ::System::Object
	{
	public:
		::System::Action* Action; // 0x0
		T Param; // 0x0
	};
}
