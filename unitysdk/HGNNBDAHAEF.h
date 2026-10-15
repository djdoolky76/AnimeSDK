#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowAdventureLevelPage; }
namespace RPG::GameCore { class TaskContext; }

#define HGNNBDAHAEF_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB2BA0)
#define HGNNBDAHAEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CB2BB0)
#define HGNNBDAHAEF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CB2BF0)
#define HGNNBDAHAEF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CB2C70)
#define HGNNBDAHAEF_TICK_OFFSET UNITYSDK_OFFSET(0x15CB2CC0)

inline static constexpr unsigned int HGNNBDAHAEF_TypeDefinitionIndex = 58599;

	class HGNNBDAHAEF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowAdventureLevelPage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowAdventureLevelPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowAdventureLevelPage*))((::PBYTE)hIl2Cpp + HGNNBDAHAEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNNBDAHAEF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNNBDAHAEF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNNBDAHAEF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGNNBDAHAEF_TICK_OFFSET))(this, a1);
		}

	};
