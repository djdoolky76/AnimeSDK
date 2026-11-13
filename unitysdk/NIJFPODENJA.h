#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define NIJFPODENJA_CTOR_OFFSET UNITYSDK_OFFSET(0x148C6460)
#define NIJFPODENJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x148C65C0)
#define NIJFPODENJA_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x148C6790)
#define NIJFPODENJA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x148C6630)

inline static constexpr unsigned int NIJFPODENJA_TypeDefinitionIndex = 61463;

	class NIJFPODENJA : public ::System::Object
	{
	public:
		::RPG::GameCore::TransformComponent* PDGDCPLEPFC; // 0x10
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x18
		::System::Single GJMAJEOIEOP; // 0x20
		::System::Boolean PIPLLENMLIM; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x28
		::System::Single EJGDNPHNEHG; // 0x34
		::System::Single KBDPMBDJIOF; // 0x38
		::UnityEngine::Vector3 BGNACBGBMHG; // 0x3C
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
