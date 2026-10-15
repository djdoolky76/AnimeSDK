#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PLANESLICE_LGIIEBPAOMP_CTOR_OFFSET UNITYSDK_OFFSET(0xEE790)

namespace RPG::Client
{
	inline static constexpr unsigned int PlaneSlice_LGIIEBPAOMP_TypeDefinitionIndex = 70699;

	struct alignas(4) PlaneSlice_LGIIEBPAOMP
	{
		::System::Int32 HBBBLAMDEFF; // 0x10
		::UnityEngine::Vector3 NPHAFNPMMDF; // 0x14
		::System::Int32 DDKMLPAPLPE; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_LGIIEBPAOMP_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
}
