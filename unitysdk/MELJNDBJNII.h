#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowBattleScreenEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MELJNDBJNII_CTOR_OFFSET UNITYSDK_OFFSET(0xB8DEA00)
#define MELJNDBJNII_HAHCLPIAIFM_OFFSET UNITYSDK_OFFSET(0xB8DEDF0)
#define MELJNDBJNII_LHLMGOHFKCN_OFFSET UNITYSDK_OFFSET(0xB8DEC40)
#define MELJNDBJNII_MMIJGEDFHGJ_OFFSET UNITYSDK_OFFSET(0xB8DEAE0)
#define MELJNDBJNII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8DEA30)
#define MELJNDBJNII_PINBBKPHIAK_OFFSET UNITYSDK_OFFSET(0xB8DEB30)

	class MELJNDBJNII
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleScreenEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleScreenEffect*))((::PBYTE)hIl2Cpp + MELJNDBJNII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELJNDBJNII_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void MMIJGEDFHGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELJNDBJNII_MMIJGEDFHGJ_OFFSET))(this);
		}

		::System::Boolean PINBBKPHIAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MELJNDBJNII_PINBBKPHIAK_OFFSET))(this);
		}

		::System::String* LHLMGOHFKCN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELJNDBJNII_LHLMGOHFKCN_OFFSET))(this);
		}

		::System::String* HAHCLPIAIFM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELJNDBJNII_HAHCLPIAIFM_OFFSET))(this);
		}

	};
