#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPICNGFLLCA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BNBNHLHIJAJ;
class KFELGAIGHAP;
class MEALFBJIJGC;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FABMDCOFHCG_CPBNNPDAKCO_OFFSET UNITYSDK_OFFSET(0x156648B0)
#define FABMDCOFHCG_CTOR_OFFSET UNITYSDK_OFFSET(0x156646D0)
#define FABMDCOFHCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156647C0)
#define FABMDCOFHCG_GET_CURRENTABILITYTARGETGROUPLEADER_OFFSET UNITYSDK_OFFSET(0x156649F0)
#define FABMDCOFHCG_GET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0x156649D0)
#define FABMDCOFHCG_GET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x156649B0)
#define FABMDCOFHCG_GET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0x15664920)
#define FABMDCOFHCG_GET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0x15664900)
#define FABMDCOFHCG_GET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x15664940)
#define FABMDCOFHCG_KPGKHDDJDHI_OFFSET UNITYSDK_OFFSET(0x15664960)
#define FABMDCOFHCG_LNIMDPPAHJO_OFFSET UNITYSDK_OFFSET(0x15664A10)
#define FABMDCOFHCG_OMFLDIGGPHC_OFFSET UNITYSDK_OFFSET(0x15664840)
#define FABMDCOFHCG_SET_CURRENTABILITYTARGETGROUPLEADER_OFFSET UNITYSDK_OFFSET(0x15664A00)
#define FABMDCOFHCG_SET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0x156649E0)
#define FABMDCOFHCG_SET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x156649C0)
#define FABMDCOFHCG_SET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0x15664930)
#define FABMDCOFHCG_SET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0x15664910)
#define FABMDCOFHCG_SET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x15664950)

inline static constexpr unsigned int FABMDCOFHCG_TypeDefinitionIndex = 55823;

	class FABMDCOFHCG : public ::HPICNGFLLCA
	{
	public:
		::RPG::GameCore::TurnBasedAbilityConfig* EABKOHGCHFP; // 0x90
		::RPG::GameCore::GameEntity* _CurrentAbilityTargetGroupLeader_k__BackingField; // 0x98
		::BNBNHLHIJAJ* _ParallelRoot_k__BackingField; // 0xA0
		::MEALFBJIJGC* _ParentParallelTaskList_k__BackingField; // 0xA8
		::KFELGAIGHAP* GEIKINNJCBD; // 0xB0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HBKFLPIHGLL; // 0xB8
		::RPG::GameCore::FixPoint _ParallelDelayTime_k__BackingField; // 0xC0
		::RPG::GameCore::FixPoint _TargetTimeStamp_k__BackingField; // 0xC8
		::RPG::GameCore::FixPoint _ParallelLocalTimeStamp_k__BackingField; // 0xD0
		::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::TurnBasedAbilityConfig*))((::PBYTE)hIl2Cpp + FABMDCOFHCG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FABMDCOFHCG_DISPOSE_OFFSET))(this);
		}

		::System::Void OMFLDIGGPHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FABMDCOFHCG_OMFLDIGGPHC_OFFSET))(this);
		}

		::System::Void CPBNNPDAKCO(::MEALFBJIJGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEALFBJIJGC*))((::PBYTE)hIl2Cpp + FABMDCOFHCG_CPBNNPDAKCO_OFFSET))(this, a1);
		}

		::MEALFBJIJGC* get_ParentParallelTaskList()
		{
			return ((::MEALFBJIJGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FABMDCOFHCG_GET_PARENTPARALLELTASKLIST_OFFSET))(this);
		}

		::System::Void set_ParentParallelTaskList(::MEALFBJIJGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEALFBJIJGC*))((::PBYTE)hIl2Cpp + FABMDCOFHCG_SET_PARENTPARALLELTASKLIST_OFFSET))(this, a1);
		}

		::BNBNHLHIJAJ* get_ParallelRoot()
		{
			return ((::BNBNHLHIJAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FABMDCOFHCG_GET_PARALLELROOT_OFFSET))(this);
		}

		::System::Void set_ParallelRoot(::BNBNHLHIJAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBNHLHIJAJ*))((::PBYTE)hIl2Cpp + FABMDCOFHCG_SET_PARALLELROOT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_TargetTimeStamp()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FABMDCOFHCG_GET_TARGETTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_TargetTimeStamp(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FABMDCOFHCG_SET_TARGETTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint KPGKHDDJDHI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FABMDCOFHCG_KPGKHDDJDHI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_ParallelLocalTimeStamp()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FABMDCOFHCG_GET_PARALLELLOCALTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_ParallelLocalTimeStamp(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FABMDCOFHCG_SET_PARALLELLOCALTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ParallelDelayTime()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FABMDCOFHCG_GET_PARALLELDELAYTIME_OFFSET))(this);
		}

		::System::Void set_ParallelDelayTime(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FABMDCOFHCG_SET_PARALLELDELAYTIME_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_CurrentAbilityTargetGroupLeader()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FABMDCOFHCG_GET_CURRENTABILITYTARGETGROUPLEADER_OFFSET))(this);
		}

		::System::Void set_CurrentAbilityTargetGroupLeader(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FABMDCOFHCG_SET_CURRENTABILITYTARGETGROUPLEADER_OFFSET))(this, a1);
		}

		::System::Void LNIMDPPAHJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FABMDCOFHCG_LNIMDPPAHJO_OFFSET))(this);
		}

	};
