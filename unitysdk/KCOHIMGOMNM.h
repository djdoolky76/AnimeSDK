#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ClearTutorialGuide; }
namespace RPG::GameCore { class TaskContext; }

#define KCOHIMGOMNM_CTOR_OFFSET UNITYSDK_OFFSET(0xB344BD0)
#define KCOHIMGOMNM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB344BE0)
#define KCOHIMGOMNM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB344C20)
#define KCOHIMGOMNM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB344DE0)
#define KCOHIMGOMNM_TICK_OFFSET UNITYSDK_OFFSET(0xB344E30)

inline static constexpr unsigned int KCOHIMGOMNM_TypeDefinitionIndex = 58028;

	class KCOHIMGOMNM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ClearTutorialGuide* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearTutorialGuide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearTutorialGuide*))((::PBYTE)hIl2Cpp + KCOHIMGOMNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOHIMGOMNM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOHIMGOMNM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOHIMGOMNM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCOHIMGOMNM_TICK_OFFSET))(this, a1);
		}

	};
