#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKNBPHAJEJF.h"

namespace RPG::Client
{
	template <typename T>
	class RPGHttpPlatformActResponse_1 : public ::HKNBPHAJEJF
	{
	public:
		T Data; // 0x0
	};
}
