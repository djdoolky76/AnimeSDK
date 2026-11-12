#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKNBPHAJEJF.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RPGHttpPlatformActResponse_1_TypeDefinitionIndex = 60589;

	template <typename T>
	class RPGHttpPlatformActResponse_1 : public ::HKNBPHAJEJF
	{
	public:
		T Data; // 0x0
	};
}
