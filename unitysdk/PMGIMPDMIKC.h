#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IJLIGGBIDBA;

#define PMGIMPDMIKC_CTOR_OFFSET UNITYSDK_OFFSET(0x20700B80)
#define PMGIMPDMIKC_MNDENOAHKAP_OFFSET UNITYSDK_OFFSET(0x20700B70)

inline static constexpr unsigned int PMGIMPDMIKC_TypeDefinitionIndex = 44669;

	class PMGIMPDMIKC : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* DCLGGMAEMAO; // 0x10
		::Il2CppArray<::IJLIGGBIDBA*>* JIILNFBDFDK; // 0x18
		::RPG::GameCore::FixPoint DIBNINJBFHN; // 0x20
		::UnityEngine::Quaternion OMFNPCMGBHF; // 0x28
		::System::Int32 NBFOFKGNNIO; // 0x38
		::RPG::GameCore::PixAirEnchantmentType CCBIIDDBFGK; // 0x3C
		::UnityEngine::Vector3 JLPCCEMMJKG; // 0x40
		::System::Int32 EEFIPNFMELC; // 0x4C
		::RPG::GameCore::FixPoint DHMPEOAJCCK; // 0x50
		::System::Boolean NCCJHHCGFHF; // 0x58
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 NPKPNMLFOCA; // 0x5C
		::RPG::GameCore::FixPoint BKEHIGDONML; // 0x68
		::RPG::GameCore::FixPoint EPKJNNKPIPI; // 0x70
		::RPG::GameCore::FixPoint KIEICALFCEM; // 0x78
		::RPG::GameCore::FixPoint FIDNHPLBGAO; // 0x80
		::System::UInt32 AAGKEBFHLMC; // 0x88
		::RPG::GameCore::PixAirSlotType MPADIDFJBEF; // 0x8C
		::RPG::GameCore::FixPoint DDPBPJMBFMH; // 0x90
		::RPG::GameCore::FixPoint CLNMPKLGCIH; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGIMPDMIKC_CTOR_OFFSET))(this);
		}

		::System::Int32 MNDENOAHKAP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGIMPDMIKC_MNDENOAHKAP_OFFSET))(this);
		}

	};
