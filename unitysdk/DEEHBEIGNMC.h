#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class StartTutorialGraph; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEEHBEIGNMC_AIOABAGGGAE_OFFSET UNITYSDK_OFFSET(0xE506A10)
#define DEEHBEIGNMC_CTOR_OFFSET UNITYSDK_OFFSET(0xE506390)
#define DEEHBEIGNMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5063C0)
#define DEEHBEIGNMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE5065B0)

	class DEEHBEIGNMC
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::LevelGraphComponent*>* GHEGGAPHHBM; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartTutorialGraph* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartTutorialGraph*))((::PBYTE)hIl2Cpp + DEEHBEIGNMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEHBEIGNMC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEEHBEIGNMC_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphComponent* AIOABAGGGAE(::System::String* a1)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEEHBEIGNMC_AIOABAGGGAE_OFFSET))(this, a1);
		}

	};
