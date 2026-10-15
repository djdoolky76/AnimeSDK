#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyShowEffectResult; }

#define GONEDKHDFBN_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2EB60)
#define GONEDKHDFBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B2EB70)
#define GONEDKHDFBN_DMJKBKMKKCG_OFFSET UNITYSDK_OFFSET(0x15B2EEF0)
#define GONEDKHDFBN_NHDPHMLDNPM_OFFSET UNITYSDK_OFFSET(0x15B2ED70)
#define GONEDKHDFBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B2EBB0)
#define GONEDKHDFBN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B2EE40)
#define GONEDKHDFBN_TICK_OFFSET UNITYSDK_OFFSET(0x15B2EE90)

inline static constexpr unsigned int GONEDKHDFBN_TypeDefinitionIndex = 53428;

	class GONEDKHDFBN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TrainPartyShowEffectResult* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyShowEffectResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyShowEffectResult*))((::PBYTE)hIl2Cpp + GONEDKHDFBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONEDKHDFBN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONEDKHDFBN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONEDKHDFBN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GONEDKHDFBN_TICK_OFFSET))(this, a1);
		}

		::System::Void NHDPHMLDNPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONEDKHDFBN_NHDPHMLDNPM_OFFSET))(this);
		}

		::System::Void DMJKBKMKKCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GONEDKHDFBN_DMJKBKMKKCG_OFFSET))(this);
		}

	};
