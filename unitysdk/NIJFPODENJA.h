#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define NIJFPODENJA_CTOR_OFFSET UNITYSDK_OFFSET(0xC4D06F0)
#define NIJFPODENJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4D0850)
#define NIJFPODENJA_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0xC4D0A20)
#define NIJFPODENJA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC4D08C0)

inline static constexpr unsigned int NIJFPODENJA_TypeDefinitionIndex = 61463;

	class NIJFPODENJA : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x10
		::RPG::GameCore::TransformComponent* PDGDCPLEPFC; // 0x18
		::UnityEngine::Vector3 BGNACBGBMHG; // 0x20
		::System::Single EJGDNPHNEHG; // 0x2C
		::System::Boolean PIPLLENMLIM; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single GJMAJEOIEOP; // 0x34
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x38
		::System::Single KBDPMBDJIOF; // 0x44
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
