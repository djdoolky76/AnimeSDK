#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MonsterTeamAppear; }
namespace RPG::GameCore { class TaskContext; }

#define LIIIFHHPMAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D3140)
#define LIIIFHHPMAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6D3150)
#define LIIIFHHPMAO_EFAOHHLDHNK_OFFSET UNITYSDK_OFFSET(0xB6D31F0)
#define LIIIFHHPMAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6D3190)
#define LIIIFHHPMAO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6D3400)
#define LIIIFHHPMAO_TICK_OFFSET UNITYSDK_OFFSET(0xB6D3450)

	class LIIIFHHPMAO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MonsterTeamAppear* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Single CNDKGAEBFIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterTeamAppear* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterTeamAppear*))((::PBYTE)hIl2Cpp + LIIIFHHPMAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIIFHHPMAO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIIFHHPMAO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIIFHHPMAO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LIIIFHHPMAO_TICK_OFFSET))(this, a1);
		}

		::System::Boolean EFAOHHLDHNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIIFHHPMAO_EFAOHHLDHNK_OFFSET))(this);
		}

	};
