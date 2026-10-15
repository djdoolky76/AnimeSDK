#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class CapsuleCollider; }

#define CFGLBPHCFGG_LNBPOLDGCIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE4720)
#define CFGLBPHCFGG_LNBPOLDGCIP_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE4770)

inline static constexpr unsigned int CFGLBPHCFGG_LNBPOLDGCIP_TypeDefinitionIndex = 69276;

	struct alignas(4) CFGLBPHCFGG_LNBPOLDGCIP
	{
		::RPG::GameCore::AxisType AFMHBENIEPG; // 0x10
		::UnityEngine::Vector3 CLIFHNODGEH; // 0x14
		::UnityEngine::Vector3 EDGNGCFCNID; // 0x20
		::System::Void _ctor(::RPG::GameCore::AxisType a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AxisType, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_LNBPOLDGCIP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::CapsuleCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CFGLBPHCFGG_LNBPOLDGCIP_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
