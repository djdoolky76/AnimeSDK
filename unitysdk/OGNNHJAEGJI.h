#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StartBattleQTE; }
namespace RPG::GameCore { class TaskContext; }

#define OGNNHJAEGJI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5D780)
#define OGNNHJAEGJI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE5D8A0)
#define OGNNHJAEGJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE5D790)
#define OGNNHJAEGJI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE5D850)
#define OGNNHJAEGJI_TICK_OFFSET UNITYSDK_OFFSET(0xBE5D8E0)

inline static constexpr unsigned int OGNNHJAEGJI_TypeDefinitionIndex = 58719;

	class OGNNHJAEGJI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::StartBattleQTE* OFKGLJOAMLD; // 0x20
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
