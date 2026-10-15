#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LevelPedestrianV2RoadPointInfo; }

#define MNIADKMONBH_KIGFGHEPGOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA00)

inline static constexpr unsigned int MNIADKMONBH_KIGFGHEPGOH_TypeDefinitionIndex = 69305;

	struct alignas(4) MNIADKMONBH_KIGFGHEPGOH
	{
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
		::UnityEngine::Vector3 HLENMDAPAGH; // 0x1C
		::UnityEngine::Vector3 NKDECDGECFL; // 0x28
		::UnityEngine::Vector3 CLMKNFILOLB; // 0x34
		::UnityEngine::Vector3 EKLLJLGNOGB; // 0x40
		::System::Single NKPKPNKBBAP; // 0x4C
		::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2RoadPointInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2RoadPointInfo*))((::PBYTE)hIl2Cpp + MNIADKMONBH_KIGFGHEPGOH_CTOR_OFFSET))(this, a1);
		}

	};
