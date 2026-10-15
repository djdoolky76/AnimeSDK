#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG::Client
{
	template <typename T>
	class ObjectLoadHandler_1 : public ::System::Object
	{
	public:
		T Obj; // 0x0
		::System::Action* OnLoad; // 0x0
		::System::Action* OnPostLoad; // 0x0
		::System::Int32 _index; // 0x0
		::System::UInt32 _loadFlags; // 0x0
		::System::UInt32 _desiredLoadFlags; // 0x0
	};
}
