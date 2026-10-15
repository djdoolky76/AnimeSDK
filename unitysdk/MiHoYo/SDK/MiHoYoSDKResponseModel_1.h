#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

namespace MiHoYo::SDK
{
	template <typename T>
	class MiHoYoSDKResponseModel_1 : public ::System::Object
	{
	public:
		T data; // 0x0
		::System::Int32 retcode; // 0x0
		::System::String* message; // 0x0
		::System::String* msg; // 0x0
	};
}
