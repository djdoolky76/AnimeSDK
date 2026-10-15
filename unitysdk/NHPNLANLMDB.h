#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
class EFHJJIGLPDL;
class NOEBJBDLNGN;
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }

#define NHPNLANLMDB_CTOR_OFFSET UNITYSDK_OFFSET(0xBBDB660)
#define NHPNLANLMDB_FDKEHBDDNGC_OFFSET UNITYSDK_OFFSET(0xBBDC020)
#define NHPNLANLMDB_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xBBDC0A0)
#define NHPNLANLMDB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBBDB6A0)
#define NHPNLANLMDB_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0xBBDBD40)
#define NHPNLANLMDB_IGHCAHNNMFN_OFFSET UNITYSDK_OFFSET(0xBBDB9C0)
#define NHPNLANLMDB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBBDB770)
#define NHPNLANLMDB_LFOBLDPMHCM_OFFSET UNITYSDK_OFFSET(0xBBDBE90)
#define NHPNLANLMDB_LICLBMEDGJM_OFFSET UNITYSDK_OFFSET(0xBBDB700)
#define NHPNLANLMDB_NDAENKCAIJF_OFFSET UNITYSDK_OFFSET(0xBBDB850)
#define NHPNLANLMDB_NMJGILFHFPC_OFFSET UNITYSDK_OFFSET(0xBBDB8F0)

inline static constexpr unsigned int NHPNLANLMDB_TypeDefinitionIndex = 57045;

	class NHPNLANLMDB : public ::BDENDNDOFLF
	{
	public:
		::EFHJJIGLPDL* CHAOCFGKDAP; // 0x68
		::NOEBJBDLNGN* JDCOENADNJN; // 0x70
		::RPG::GameCore::GameEntity* PAKNEPALMLB; // 0x78
		::RPG::GameCore::GameEntity* FILNMMHDBAE; // 0x80
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x88
		::System::Boolean HKJJJPIEBNO; // 0x8C
		// static const ::System::String* OOJOGBKLJJG; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NHPNLANLMDB_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPNLANLMDB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void LICLBMEDGJM(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + NHPNLANLMDB_LICLBMEDGJM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NDAENKCAIJF(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + NHPNLANLMDB_NDAENKCAIJF_OFFSET))(this, a1);
		}

		::System::Void NMJGILFHFPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPNLANLMDB_NMJGILFHFPC_OFFSET))(this);
		}

		::System::Void IEHGJKIODLM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NHPNLANLMDB_IEHGJKIODLM_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHPNLANLMDB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureFeatureMuteLevel FDKEHBDDNGC()
		{
			return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPNLANLMDB_FDKEHBDDNGC_OFFSET))(this);
		}

		::System::Boolean LFOBLDPMHCM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NHPNLANLMDB_LFOBLDPMHCM_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* IGHCAHNNMFN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NHPNLANLMDB_IGHCAHNNMFN_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPNLANLMDB_GET_FLAG_OFFSET))(this);
		}

	};
