#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AlignTargetToTeamCenter; }
namespace RPG::GameCore { class TaskContext; }

#define BKENGEHIGKF_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AABE0)
#define BKENGEHIGKF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7AABF0)
#define BKENGEHIGKF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7AAC30)
#define BKENGEHIGKF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7AAE70)
#define BKENGEHIGKF_TICK_OFFSET UNITYSDK_OFFSET(0xB7AAEC0)

inline static constexpr unsigned int BKENGEHIGKF_TypeDefinitionIndex = 56342;

	class BKENGEHIGKF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AlignTargetToTeamCenter* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AlignTargetToTeamCenter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AlignTargetToTeamCenter*))((::PBYTE)hIl2Cpp + BKENGEHIGKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKENGEHIGKF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKENGEHIGKF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKENGEHIGKF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKENGEHIGKF_TICK_OFFSET))(this, a1);
		}

	};
