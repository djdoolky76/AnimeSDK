#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueTournFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define ANCIHACHCMC_CTOR_OFFSET UNITYSDK_OFFSET(0x15586930)
#define ANCIHACHCMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15586D10)
#define ANCIHACHCMC_OFELHDDPMHE_OFFSET UNITYSDK_OFFSET(0x15586DB0)
#define ANCIHACHCMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155869A0)
#define ANCIHACHCMC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15586CC0)
#define ANCIHACHCMC_TICK_OFFSET UNITYSDK_OFFSET(0x15586940)

inline static constexpr unsigned int ANCIHACHCMC_TypeDefinitionIndex = 58482;

	class ANCIHACHCMC : public ::GELIALJDFBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournFinish*))((::PBYTE)hIl2Cpp + ANCIHACHCMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANCIHACHCMC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCIHACHCMC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCIHACHCMC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCIHACHCMC_DISPOSE_OFFSET))(this);
		}

		::System::Void OFELHDDPMHE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + ANCIHACHCMC_OFELHDDPMHE_OFFSET))(this, a1, a2);
		}

	};
