#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG::Client
{
	template <typename T>
	class WorkNode_ActionParam_1 : public ::System::Object
	{
	public:
		::System::Action* Action; // 0x0
		T Param; // 0x0
	};
}
