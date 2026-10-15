#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGDFBGCMLEG.h"
#include "unitysdk/ALCOGHNNPMF.h"
#include "unitysdk/GELIALJDFBL.h"
class OLABFALNLJM;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SetSkillTargetFormationByPos; }
namespace RPG::GameCore { class TargetFormationPosConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCCMCBNNOHC_BKAJENBJGGG_OFFSET UNITYSDK_OFFSET(0xBB01920)
#define NCCMCBNNOHC_CTOR_OFFSET UNITYSDK_OFFSET(0xBAFFD70)
#define NCCMCBNNOHC_DGOPIGCHPCE_OFFSET UNITYSDK_OFFSET(0xBB02440)
#define NCCMCBNNOHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAFFE50)
#define NCCMCBNNOHC_ICMONKPLCMH_OFFSET UNITYSDK_OFFSET(0xBB01A40)
#define NCCMCBNNOHC_JHBFMCLNBAM_OFFSET UNITYSDK_OFFSET(0xBB020C0)
#define NCCMCBNNOHC_MICODGJPHAE_OFFSET UNITYSDK_OFFSET(0xBB02600)
#define NCCMCBNNOHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB00060)
#define NCCMCBNNOHC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB02D40)
#define NCCMCBNNOHC_TICK_OFFSET UNITYSDK_OFFSET(0xBB00000)

inline static constexpr unsigned int NCCMCBNNOHC_TypeDefinitionIndex = 56421;

	class NCCMCBNNOHC : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>* GBMAIEBEKGM; // 0x18
		::RPG::GameCore::SetSkillTargetFormationByPos* OFKGLJOAMLD; // 0x20
		::RPG::PoolList_1<::ALCOGHNNPMF>* FJHJNKHLPNP; // 0x28
		::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>* BPOPEEOIBEG; // 0x30
		::System::Collections::Generic::LinkedList_1<::System::Object*>* LMLLIFFMOMC; // 0x38
		::System::Collections::Generic::LinkedListNode_1<::System::Object*>* JBJLKAEGGDG; // 0x40
		::AGDFBGCMLEG GEOGOILLHKO; // 0x48
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* LGBOLNEKFML; // 0x78
		::RPG::GameCore::GameEntity* DPGHBJPAAEN; // 0x80
		::OLABFALNLJM* JBDCABFMHNC; // 0x88
		::System::Boolean OEEOPDMIBNC; // 0x90
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormationByPos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormationByPos*))((::PBYTE)hIl2Cpp + NCCMCBNNOHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMCBNNOHC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCCMCBNNOHC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMCBNNOHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void MICODGJPHAE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCCMCBNNOHC_MICODGJPHAE_OFFSET))(this, a1);
		}

		::System::Void ICMONKPLCMH(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + NCCMCBNNOHC_ICMONKPLCMH_OFFSET))(this, a1);
		}

		::System::Void JHBFMCLNBAM(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NCCMCBNNOHC_JHBFMCLNBAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGOPIGCHPCE(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + NCCMCBNNOHC_DGOPIGCHPCE_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMCBNNOHC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BKAJENBJGGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCMCBNNOHC_BKAJENBJGGG_OFFSET))(this);
		}

	};
