#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CrowdAnimator/CrowdAssembly.h"

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdLod_TypeDefinitionIndex = 73742;

	struct alignas(8) CrowdLod
	{
		::System::Single Distance; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdAssembly>* Assemblies; // 0x18
	};
}
