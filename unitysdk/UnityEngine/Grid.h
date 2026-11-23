#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GridLayout.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_GRID_B0D8578D4C2BAF42_OFFSET UNITYSDK_OFFSET(0x418EA90)
#define UNITYENGINE_GRID_E78C010CB16285ED_OFFSET UNITYSDK_OFFSET(0x418EAE0)
#define UNITYENGINE_GRID__CTOR_OFFSET UNITYSDK_OFFSET(0x40E9D70)

namespace UnityEngine
{
	inline static constexpr unsigned int Grid_TypeDefinitionIndex = 21544;

	class Grid : public ::UnityEngine::GridLayout
	{
	public:
		::System::Void B0D8578D4C2BAF42(::UnityEngine::Vector3& FEC8DC0392823C8D)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GRID_B0D8578D4C2BAF42_OFFSET))(this, FEC8DC0392823C8D);
		}

		::UnityEngine::Vector3 E78C010CB16285ED()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRID_E78C010CB16285ED_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRID__CTOR_OFFSET))(this);
		}
	};
}
