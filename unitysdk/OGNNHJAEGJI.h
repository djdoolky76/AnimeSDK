#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StartBattleQTE; }
namespace RPG::GameCore { class TaskContext; }

#define OGNNHJAEGJI_CTOR_OFFSET UNITYSDK_OFFSET(0x18E044D0)
#define OGNNHJAEGJI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E045F0)
#define OGNNHJAEGJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E044E0)
#define OGNNHJAEGJI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18E045A0)
#define OGNNHJAEGJI_TICK_OFFSET UNITYSDK_OFFSET(0x18E04630)

inline static constexpr unsigned int OGNNHJAEGJI_TypeDefinitionIndex = 59987;

	class OGNNHJAEGJI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StartBattleQTE* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartBattleQTE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartBattleQTE*))((::PBYTE)hIl2Cpp + OGNNHJAEGJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNNHJAEGJI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNNHJAEGJI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNNHJAEGJI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGNNHJAEGJI_TICK_OFFSET))(this, a1);
		}

	};
