#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LoadBattleArea; }
namespace RPG::GameCore { class TaskContext; }

#define AJJFELKEEBF_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBCDF0)
#define AJJFELKEEBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CBCE00)
#define AJJFELKEEBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CBCE90)
#define AJJFELKEEBF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CBCE40)
#define AJJFELKEEBF_TICK_OFFSET UNITYSDK_OFFSET(0x12CBCEE0)

inline static constexpr unsigned int AJJFELKEEBF_TypeDefinitionIndex = 55141;

	class AJJFELKEEBF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LoadBattleArea* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadBattleArea* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadBattleArea*))((::PBYTE)hIl2Cpp + AJJFELKEEBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJFELKEEBF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJFELKEEBF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJFELKEEBF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJJFELKEEBF_TICK_OFFSET))(this, a1);
		}

	};
