#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolLoadMode.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolPathType.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

	template <typename T>
	struct alignas(8) DPHCPLJMDKL__LoadAsync_d__86_1
	{
		::System::Int32 __1__state; // 0x0
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x0
		::System::String* path; // 0x0
		::RPG::GameCore::ConfigDataPoolPathType pathType; // 0x0
		::RPG::GameCore::ConfigDataPoolLoadMode loadMode; // 0x0
		::System::Action* onComplete; // 0x0
		::System::Object* userData; // 0x0
		::System::Boolean excludeLru; // 0x0
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x0
	};
