#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFELDMGEGFN.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/JNHHFPBDCBI.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/NCLJABCKKFJ_BPCDPLPHFIP.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/Container/CellLocation.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"

#define NCLJABCKKFJ_BAEEIBLICFC_OFFSET UNITYSDK_OFFSET(0x13B593B0)
#define NCLJABCKKFJ_COMPARE_OFFSET UNITYSDK_OFFSET(0x600660)
#define NCLJABCKKFJ_FJHEEHLBOEI_OFFSET UNITYSDK_OFFSET(0x71B750)
#define NCLJABCKKFJ_GETCELLKEY_OFFSET UNITYSDK_OFFSET(0x71B1C0)
#define NCLJABCKKFJ_GETKEY_OFFSET UNITYSDK_OFFSET(0x71B2C0)
#define NCLJABCKKFJ_KFEPCHGAGAG_OFFSET UNITYSDK_OFFSET(0x71B760)
#define NCLJABCKKFJ_NAEDHNCMHBI_OFFSET UNITYSDK_OFFSET(0x71B770)
#define NCLJABCKKFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x71AF30)

inline static constexpr unsigned int NCLJABCKKFJ_TypeDefinitionIndex = 43546;

struct alignas(8) NCLJABCKKFJ
{
	::UnityEngine::Vector3 MKEGNKPNOAB; // 0x10
	::UnityEngine::Vector3 IAIGNDIOBAC; // 0x1C
	::System::Single GKMDDKKDFBG; // 0x28
	::System::Single GEEMKIKDHLB; // 0x2C
	::System::UInt32 NOFGFDFAGPP; // 0x30
	::JNHHFPBDCBI KMBIKGLAOCA; // 0x34
	::MoleMole::Config::CampType LIEPPGJCBCA; // 0x38
	::DFELDMGEGFN LOJGPJEAPEF; // 0x3C
	::System::UInt32 OOCNPEBLOMG; // 0x40
	::System::Boolean FBIJKJEHGGD; // 0x44
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 HDEMOCLAKKP; // 0x48
	::UnityEngine::PhysicsScene AEGLKKNFODD; // 0x54
	::System::Int32 FFNLMKBFLMN; // 0x58
	::System::Byte _padding1[0x4];
	::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> EFFAONJBCOG; // 0x60
	::System::Byte _padding2[0x18];
	::NCLJABCKKFJ_BPCDPLPHFIP FFJHGPPHIDJ; // 0x80
	::System::Int32 _OPJILCPGDJA_k__BackingField; // 0x100

	::System::Void _ctor(::UnityEngine::Vector3 MPLDDNMCECG, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> DHJFLLEPJBM, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> LJBPECKCCEA, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Single PBHDHLEPPEJ, ::System::Single NCCDJLDKFGA, ::System::UInt32 IJDPOHJHGEB, ::JNHHFPBDCBI AMBJMIGBJLA, ::MoleMole::Config::CampType ELKJIPJHAFK, ::DFELDMGEGFN BFJBPCKDGFK, ::System::UInt32 COKLHBHNAGA, ::System::Boolean LPDHIPHILHH, ::UnityEngine::Vector3 GICKFNPFEHD, ::UnityEngine::PhysicsScene AHGGAKHJMPI, ::System::Int32 JAHMLOGCLMB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::UInt32, ::JNHHFPBDCBI, ::MoleMole::Config::CampType, ::DFELDMGEGFN, ::System::UInt32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::PhysicsScene, ::System::Int32))((::PBYTE)hIl2Cpp + NCLJABCKKFJ__CTOR_OFFSET))(this, MPLDDNMCECG, DHJFLLEPJBM, LJBPECKCCEA, CFJFMMGPGKE, PBHDHLEPPEJ, NCCDJLDKFGA, IJDPOHJHGEB, AMBJMIGBJLA, ELKJIPJHAFK, BFJBPCKDGFK, COKLHBHNAGA, LPDHIPHILHH, GICKFNPFEHD, AHGGAKHJMPI, JAHMLOGCLMB);
	}

	::System::Double GetCellKey(::Foundation::Container::CellLocation EKPEBNCLJPM)
	{
		return ((::System::Double(*)(::PVOID, ::Foundation::Container::CellLocation))((::PBYTE)hIl2Cpp + NCLJABCKKFJ_GETCELLKEY_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Double GetKey(::NPCCrowd::Ability::NavigationObstacleItem& IPMMCGDMODG)
	{
		return ((::System::Double(*)(::PVOID, ::NPCCrowd::Ability::NavigationObstacleItem&))((::PBYTE)hIl2Cpp + NCLJABCKKFJ_GETKEY_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Int32 Compare(::System::Double HAAEBCOBKFF, ::System::Double BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + NCLJABCKKFJ_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Void FJHEEHLBOEI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCLJABCKKFJ_FJHEEHLBOEI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double KFEPCHGAGAG(::NPCCrowd::Ability::NavigationObstacleItem& IPMMCGDMODG)
	{
		return ((::System::Double(*)(::PVOID, ::NPCCrowd::Ability::NavigationObstacleItem&))((::PBYTE)hIl2Cpp + NCLJABCKKFJ_KFEPCHGAGAG_OFFSET))(this, IPMMCGDMODG);
	}

	static ::System::Boolean BAEEIBLICFC(::DFELDMGEGFN PCMJJJEDAEJ, ::System::UInt32 JIAIDIJBEKB, ::System::UInt32 DOAMHNAEFAI)
	{
		return ((::System::Boolean(*)(::DFELDMGEGFN, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NCLJABCKKFJ_BAEEIBLICFC_OFFSET))(PCMJJJEDAEJ, JIAIDIJBEKB, DOAMHNAEFAI);
	}

	::System::Int32 NAEDHNCMHBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLJABCKKFJ_NAEDHNCMHBI_OFFSET))(this);
	}
};
