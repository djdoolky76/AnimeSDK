#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFELDMGEGFN.h"
#include "unitysdk/FHLPIONCIKP_JGCFGNIFGML.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/JNHHFPBDCBI.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/Container/CellLocation.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"

#define FHLPIONCIKP_BAEEIBLICFC_OFFSET UNITYSDK_OFFSET(0x11C4F5A0)
#define FHLPIONCIKP_COMPARE_OFFSET UNITYSDK_OFFSET(0x600660)
#define FHLPIONCIKP_FJHEEHLBOEI_OFFSET UNITYSDK_OFFSET(0x6BE7D0)
#define FHLPIONCIKP_GETCELLKEY_OFFSET UNITYSDK_OFFSET(0x6BE330)
#define FHLPIONCIKP_GETKEY_OFFSET UNITYSDK_OFFSET(0x6BE370)
#define FHLPIONCIKP_KFEPCHGAGAG_OFFSET UNITYSDK_OFFSET(0x6BE7E0)
#define FHLPIONCIKP_NAEDHNCMHBI_OFFSET UNITYSDK_OFFSET(0x6BE7C0)
#define FHLPIONCIKP__CTOR_OFFSET UNITYSDK_OFFSET(0x6BE120)

inline static constexpr unsigned int FHLPIONCIKP_TypeDefinitionIndex = 64458;

struct alignas(8) FHLPIONCIKP
{
	::UnityEngine::Vector3 MKEGNKPNOAB; // 0x10
	::System::Single GEEMKIKDHLB; // 0x1C
	::System::UInt32 NOFGFDFAGPP; // 0x20
	::JNHHFPBDCBI KMBIKGLAOCA; // 0x24
	::MoleMole::Config::CampType LIEPPGJCBCA; // 0x28
	::DFELDMGEGFN LOJGPJEAPEF; // 0x2C
	::System::UInt32 OOCNPEBLOMG; // 0x30
	::System::Boolean FBIJKJEHGGD; // 0x34
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 HDEMOCLAKKP; // 0x38
	::UnityEngine::PhysicsScene AEGLKKNFODD; // 0x44
	::System::Int32 FFNLMKBFLMN; // 0x48
	::System::Byte _padding1[0x4];
	::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> EFFAONJBCOG; // 0x50
	::System::Byte _padding2[0x18];
	::FHLPIONCIKP_JGCFGNIFGML FFJHGPPHIDJ; // 0x70
	::System::Int32 _OPJILCPGDJA_k__BackingField; // 0xF0

	::System::Void _ctor(::UnityEngine::Vector3 MPLDDNMCECG, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> DHJFLLEPJBM, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> LJBPECKCCEA, ::System::Single NCCDJLDKFGA, ::System::UInt32 IJDPOHJHGEB, ::JNHHFPBDCBI AMBJMIGBJLA, ::MoleMole::Config::CampType ELKJIPJHAFK, ::DFELDMGEGFN BFJBPCKDGFK, ::System::UInt32 COKLHBHNAGA, ::System::Boolean LPDHIPHILHH, ::UnityEngine::Vector3 GICKFNPFEHD, ::UnityEngine::PhysicsScene AHGGAKHJMPI, ::System::Int32 JAHMLOGCLMB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>, ::System::Single, ::System::UInt32, ::JNHHFPBDCBI, ::MoleMole::Config::CampType, ::DFELDMGEGFN, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::PhysicsScene, ::System::Int32))((::PBYTE)hIl2Cpp + FHLPIONCIKP__CTOR_OFFSET))(this, MPLDDNMCECG, DHJFLLEPJBM, LJBPECKCCEA, NCCDJLDKFGA, IJDPOHJHGEB, AMBJMIGBJLA, ELKJIPJHAFK, BFJBPCKDGFK, COKLHBHNAGA, LPDHIPHILHH, GICKFNPFEHD, AHGGAKHJMPI, JAHMLOGCLMB);
	}

	::System::Double GetCellKey(::Foundation::Container::CellLocation EKPEBNCLJPM)
	{
		return ((::System::Double(*)(::PVOID, ::Foundation::Container::CellLocation))((::PBYTE)hIl2Cpp + FHLPIONCIKP_GETCELLKEY_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Double GetKey(::NPCCrowd::Ability::NavigationObstacleItem& IPMMCGDMODG)
	{
		return ((::System::Double(*)(::PVOID, ::NPCCrowd::Ability::NavigationObstacleItem&))((::PBYTE)hIl2Cpp + FHLPIONCIKP_GETKEY_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Int32 Compare(::System::Double HAAEBCOBKFF, ::System::Double BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FHLPIONCIKP_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	static ::System::Boolean BAEEIBLICFC(::DFELDMGEGFN PCMJJJEDAEJ, ::System::UInt32 JIAIDIJBEKB, ::System::UInt32 DOAMHNAEFAI)
	{
		return ((::System::Boolean(*)(::DFELDMGEGFN, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FHLPIONCIKP_BAEEIBLICFC_OFFSET))(PCMJJJEDAEJ, JIAIDIJBEKB, DOAMHNAEFAI);
	}

	::System::Int32 NAEDHNCMHBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLPIONCIKP_NAEDHNCMHBI_OFFSET))(this);
	}

	::System::Void FJHEEHLBOEI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FHLPIONCIKP_FJHEEHLBOEI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double KFEPCHGAGAG(::NPCCrowd::Ability::NavigationObstacleItem& IPMMCGDMODG)
	{
		return ((::System::Double(*)(::PVOID, ::NPCCrowd::Ability::NavigationObstacleItem&))((::PBYTE)hIl2Cpp + FHLPIONCIKP_KFEPCHGAGAG_OFFSET))(this, IPMMCGDMODG);
	}
};
