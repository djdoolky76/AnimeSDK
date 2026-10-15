#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/JOGBIBJLPJB.h"
class MNIADKMONBH;
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryConnectInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }

#define ICOHAPENNHF_CKPLOEHPLNF_AJIEMHCFFMB_OFFSET UNITYSDK_OFFSET(0x2E7FC30)
#define ICOHAPENNHF_CKPLOEHPLNF_BJEPBNPGMNP_OFFSET UNITYSDK_OFFSET(0x2E7FB90)
#define ICOHAPENNHF_CKPLOEHPLNF_CTOR_OFFSET UNITYSDK_OFFSET(0x2E7FB80)
#define ICOHAPENNHF_CKPLOEHPLNF_GHNLIKDPCNP_OFFSET UNITYSDK_OFFSET(0x2E7FC20)
#define ICOHAPENNHF_CKPLOEHPLNF_LIJBLJLAGAD_OFFSET UNITYSDK_OFFSET(0x2E7FBB0)

inline static constexpr unsigned int ICOHAPENNHF_CKPLOEHPLNF_TypeDefinitionIndex = 69327;

	struct alignas(8) ICOHAPENNHF_CKPLOEHPLNF
	{
		::MNIADKMONBH* NDJINIMPHFH; // 0x10
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* AHMPPCLODGL; // 0x18
		::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo* BFNFPKJIFOP; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* BECDIKBLMEO; // 0x28
		::Il2CppArray<::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>>* AONMMNAAAGO; // 0x30
		::System::Void _ctor(::MNIADKMONBH* a1, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* a2, ::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MNIADKMONBH*, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*, ::RPG::GameCore::LevelPedestrianV2RoadEntryConnectInfo*))((::PBYTE)hIl2Cpp + ICOHAPENNHF_CKPLOEHPLNF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 BJEPBNPGMNP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHAPENNHF_CKPLOEHPLNF_BJEPBNPGMNP_OFFSET))(this);
		}

		::JOGBIBJLPJB LIJBLJLAGAD()
		{
			return ((::JOGBIBJLPJB(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHAPENNHF_CKPLOEHPLNF_LIJBLJLAGAD_OFFSET))(this);
		}

		/*
		::System::Void GHNLIKDPCNP(::ICOHAPENNHF_CKPLOEHPLNF a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICOHAPENNHF_CKPLOEHPLNF))((::PBYTE)hIl2Cpp + ICOHAPENNHF_CKPLOEHPLNF_GHNLIKDPCNP_OFFSET))(this, a1);
		}
		*/

		::System::Void AJIEMHCFFMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHAPENNHF_CKPLOEHPLNF_AJIEMHCFFMB_OFFSET))(this);
		}

	};
