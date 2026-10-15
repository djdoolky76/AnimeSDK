#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class EntityMoveTrack; }
namespace RPG::GameCore { class GameEntity; }

#define GDELHFNPNKD_AGBKADDLFFF_OFFSET UNITYSDK_OFFSET(0x1599AFD0)
#define GDELHFNPNKD_CONHCMOGADH_OFFSET UNITYSDK_OFFSET(0x1599B640)
#define GDELHFNPNKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1599B650)
#define GDELHFNPNKD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1599B520)
#define GDELHFNPNKD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1599AE50)

inline static constexpr unsigned int GDELHFNPNKD_TypeDefinitionIndex = 58589;

	class GDELHFNPNKD : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x10
		::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>* MJHIMCFFIHD; // 0x18
		::System::Single FHGDBJGOLOM; // 0x20
		::UnityEngine::Vector3 CJFHPEDCMKB; // 0x24
		::UnityEngine::Quaternion AHANGHKAIBO; // 0x30
		::UnityEngine::Vector3 DAPNFDEFLBD; // 0x40
		::System::Boolean LFJHKGPGMKN; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Single HPCHCEFOKJB; // 0x50
		::System::Single GHCBLGBCPIA; // 0x54
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x58
		::System::Single NEHHIFNALHJ; // 0x64
		::System::Int32 JGNAANKNEGD; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDELHFNPNKD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>* a2, ::System::Single a3, ::RPG::MVector3 a4, ::RPG::MVector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>*, ::System::Single, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GDELHFNPNKD_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDELHFNPNKD_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean AGBKADDLFFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDELHFNPNKD_AGBKADDLFFF_OFFSET))(this);
		}

		::System::Boolean CONHCMOGADH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDELHFNPNKD_CONHCMOGADH_OFFSET))(this);
		}

	};
