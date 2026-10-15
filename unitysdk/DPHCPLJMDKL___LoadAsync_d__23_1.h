#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolLoadMode.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolPathType.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG::GameCore { template <typename T> class ConfigDataPool_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

	template <typename T>
	struct alignas(8) DPHCPLJMDKL___LoadAsync_d__23_1
	{
		::System::Int32 __1__state; // 0x0
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x0
		::System::String* path; // 0x0
		::RPG::GameCore::ConfigDataPoolPathType pathType; // 0x0
		::RPG::GameCore::ConfigDataPoolLoadMode loadMode; // 0x0
		::System::Object* __8__1; // 0x0
		::System::Action* onComplete; // 0x0
		::System::Object* userData; // 0x0
		::System::Boolean excludeLru; // 0x0
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x0
		::System::Runtime::CompilerServices::TaskAwaiter __u__2; // 0x0
		::System::Runtime::CompilerServices::TaskAwaiter __u__3; // 0x0
	};
