#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }

#define LLFLBBCHACG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A000)
#define LLFLBBCHACG_CTOR_OFFSET UNITYSDK_OFFSET(0x19FE0)
#define LLFLBBCHACG_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x1A020)
#define LLFLBBCHACG_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0x1A0E0)

inline static constexpr unsigned int LLFLBBCHACG_TypeDefinitionIndex = 56979;

	struct alignas(8) LLFLBBCHACG
	{
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x20
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LLFLBBCHACG_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LLFLBBCHACG_CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFLBBCHACG_KKKIONIDKFA_OFFSET))(this);
		}

		::UnityEngine::Vector3 NINDHOGICJD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFLBBCHACG_NINDHOGICJD_OFFSET))(this);
		}

	};
