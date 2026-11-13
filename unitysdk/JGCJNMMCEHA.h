#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/PetPartyAssignmentMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JGCJNMMCEHA_AJJMOIHDCAO_OFFSET UNITYSDK_OFFSET(0x3E36AE0)
#define JGCJNMMCEHA_JDLKHAILEOF_OFFSET UNITYSDK_OFFSET(0x3E36B30)

inline static constexpr unsigned int JGCJNMMCEHA_TypeDefinitionIndex = 54669;

	struct alignas(4) JGCJNMMCEHA
	{
		::RPG::GameCore::PetPartyAssignmentMode FCGFFAJIBKA; // 0x10
		::System::UInt32 DCAJKDIBHHP; // 0x14
		::UnityEngine::Vector3 OPMGDNNAEJF; // 0x18
		::UnityEngine::Vector3 BNNOBAMFNCJ; // 0x24
		::System::Boolean LKBKPEELELG; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion GMAGENDCBLH; // 0x34
		::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x44
		::System::Boolean AJJMOIHDCAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCJNMMCEHA_AJJMOIHDCAO_OFFSET))(this);
		}

		::System::Boolean JDLKHAILEOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCJNMMCEHA_JDLKHAILEOF_OFFSET))(this);
		}

	};
