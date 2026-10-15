#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class EntityMoveTrack; }
namespace RPG::GameCore { class GameEntity; }

#define GDELHFNPNKD_AGBKADDLFFF_OFFSET UNITYSDK_OFFSET(0x15990580)
#define GDELHFNPNKD_CONHCMOGADH_OFFSET UNITYSDK_OFFSET(0x15990BF0)
#define GDELHFNPNKD_CTOR_OFFSET UNITYSDK_OFFSET(0x15990C00)
#define GDELHFNPNKD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15990AD0)
#define GDELHFNPNKD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15990400)

inline static constexpr unsigned int GDELHFNPNKD_TypeDefinitionIndex = 58589;

	class GDELHFNPNKD : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x10
		::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>* MJHIMCFFIHD; // 0x18
		::UnityEngine::Vector3 CJFHPEDCMKB; // 0x20
		::System::Single HPCHCEFOKJB; // 0x2C
		::System::Int32 JGNAANKNEGD; // 0x30
		::UnityEngine::Vector3 DAPNFDEFLBD; // 0x34
		::System::Single GHCBLGBCPIA; // 0x40
		::UnityEngine::Quaternion AHANGHKAIBO; // 0x44
		::System::Single NEHHIFNALHJ; // 0x54
		::System::Single FHGDBJGOLOM; // 0x58
		::System::Boolean LFJHKGPGMKN; // 0x5C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x60
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
