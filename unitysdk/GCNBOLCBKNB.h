#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }

#define GCNBOLCBKNB_CTOR_OFFSET UNITYSDK_OFFSET(0x2E7A0C0)
#define GCNBOLCBKNB_ICDIPLCJHGP_OFFSET UNITYSDK_OFFSET(0x2E7A170)

	struct alignas(8) GCNBOLCBKNB
	{
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x18
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x24
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GCNBOLCBKNB_CTOR_OFFSET))(this, a1);
		}

		::System::Void ICDIPLCJHGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNBOLCBKNB_ICDIPLCJHGP_OFFSET))(this);
		}

	};
