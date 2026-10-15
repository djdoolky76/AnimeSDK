#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG::Client
{
	template <typename T1, typename T2>
	class WorkNode_ActionParam_2 : public ::System::Object
	{
	public:
		::System::Action* Action; // 0x0
		T2 Param1; // 0x0
		T2 Param2; // 0x0
	};
}
