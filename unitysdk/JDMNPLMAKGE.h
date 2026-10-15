#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/ElementDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
class AHPGNJNPGPA;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define JDMNPLMAKGE_BFKDBGMADKP_OFFSET UNITYSDK_OFFSET(0x2E850F0)
#define JDMNPLMAKGE_BIOGBGLMBHB_OFFSET UNITYSDK_OFFSET(0x2E85100)
#define JDMNPLMAKGE_DMAIICFHMFD_OFFSET UNITYSDK_OFFSET(0x2E850E0)
#define JDMNPLMAKGE_EELGKPGOMGC_OFFSET UNITYSDK_OFFSET(0x165D9350)
#define JDMNPLMAKGE_HNFKDENOAJK_OFFSET UNITYSDK_OFFSET(0x2E85130)
#define JDMNPLMAKGE_LOEOILGHEEP_OFFSET UNITYSDK_OFFSET(0x2E850D0)

inline static constexpr unsigned int JDMNPLMAKGE_TypeDefinitionIndex = 54425;

	struct alignas(8) JDMNPLMAKGE
	{
		::RPG::GameCore::AttackType HIFKEKCELFB; // 0x10
		::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x14
		::System::Single MDKBODIBCDC; // 0x18
		::System::Single ELIFOHAHNHA; // 0x1C
		::System::Single GNJLNCCPFOG; // 0x20
		::RPG::MVector3 ACGINICEHML; // 0x24
		::RPG::MVector3 PMPIDAPFIHE; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* IFNAGLOMHBK; // 0x40
		::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x48
		::System::Single IEHPFADHJFD; // 0x4C
		::System::Single NEMDKBKDFDN; // 0x50
		::System::Boolean JECHCGIBKCH; // 0x54
		::System::Byte _padding1[0x3];
		::RPG::Client::TextID ENNKPIBOJLE; // 0x58
		::System::Boolean GCMDDOMIPPH; // 0x68
		::System::Boolean CPFEDPAGDFF; // 0x69
		::System::Byte _padding2[0x6];
		::System::String* HFLDHJHJNCF; // 0x70
		::RPG::MVector3 MCKNKIMMPCC; // 0x78
		::System::Byte _padding3[0x4];
		::System::Nullable_1<::RPG::GameCore::FixPoint> PGANAAKKMOA; // 0x88
		::System::Byte _padding4[0x8];
		::System::Nullable_1<::System::UInt32> LIHDDCJDALN; // 0x98
		::System::Single HFBFNLKGIDN; // 0xA0
		::System::Byte _padding5[0x4];
		::System::String* MAOMFGBJACJ; // 0xA8
		::System::Nullable_1<::RPG::GameCore::ElementDamageType> DOGLPHFNGPK; // 0xB0
		::System::String* OCMJCIFFBHF; // 0xB8
		::System::Boolean PBOJPLGNLKD; // 0xC0
		::System::Boolean JAHAMKOPFHG; // 0xC1
		::System::Boolean EGGMAJKNIGC; // 0xC2
		::System::Boolean NHBHKLEFHLJ; // 0xC3
		::System::Void LOEOILGHEEP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::DamageDisplayData* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JDMNPLMAKGE_LOEOILGHEEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DMAIICFHMFD(::AHPGNJNPGPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHPGNJNPGPA*))((::PBYTE)hIl2Cpp + JDMNPLMAKGE_DMAIICFHMFD_OFFSET))(this, a1);
		}

		::System::Void BFKDBGMADKP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::DamageDisplayData* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JDMNPLMAKGE_BFKDBGMADKP_OFFSET))(this, a1, a2, a3);
		}

		::RPG::MVector3 BIOGBGLMBHB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::DamageDisplayData* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JDMNPLMAKGE_BIOGBGLMBHB_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::MVector3 EELGKPGOMGC(::RPG::GameCore::DamageDisplayData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JDMNPLMAKGE_EELGKPGOMGC_OFFSET))(a1, a2);
		}

		::RPG::MVector3 HNFKDENOAJK(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::DamageDisplayData* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::DamageDisplayData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JDMNPLMAKGE_HNFKDENOAJK_OFFSET))(this, a1, a2, a3);
		}

	};
