#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define NIJFPODENJA_CTOR_OFFSET UNITYSDK_OFFSET(0xBBED950)
#define NIJFPODENJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBEDAB0)
#define NIJFPODENJA_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0xBBEDC80)
#define NIJFPODENJA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBBEDB20)

	class NIJFPODENJA : public ::System::Object
	{
	public:
		::RPG::GameCore::TransformComponent* PDGDCPLEPFC; // 0x10
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x18
		::System::Boolean PIPLLENMLIM; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single GJMAJEOIEOP; // 0x24
		::System::Single KBDPMBDJIOF; // 0x28
		::UnityEngine::Vector3 BGNACBGBMHG; // 0x2C
		::System::Single EJGDNPHNEHG; // 0x38
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x3C
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NIJFPODENJA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJFPODENJA_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NIJFPODENJA_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJFPODENJA_GCCAABJLGIG_OFFSET))(this);
		}

	};
