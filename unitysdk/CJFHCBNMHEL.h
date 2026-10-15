#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetBattleResult; }
namespace RPG::GameCore { class TaskContext; }

#define CJFHCBNMHEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD1FD040)
#define CJFHCBNMHEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1FD050)
#define CJFHCBNMHEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1FD090)
#define CJFHCBNMHEL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD1FD2A0)
#define CJFHCBNMHEL_TICK_OFFSET UNITYSDK_OFFSET(0xD1FD2F0)

inline static constexpr unsigned int CJFHCBNMHEL_TypeDefinitionIndex = 58519;

	class CJFHCBNMHEL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetBattleResult* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleResult*))((::PBYTE)hIl2Cpp + CJFHCBNMHEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFHCBNMHEL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFHCBNMHEL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJFHCBNMHEL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJFHCBNMHEL_TICK_OFFSET))(this, a1);
		}

	};
