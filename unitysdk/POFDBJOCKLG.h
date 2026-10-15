#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class RefreshQingQueEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define POFDBJOCKLG_CTOR_OFFSET UNITYSDK_OFFSET(0xC35EFF0)
#define POFDBJOCKLG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC35F230)
#define POFDBJOCKLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC35F270)
#define POFDBJOCKLG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC35FB80)
#define POFDBJOCKLG_TICK_OFFSET UNITYSDK_OFFSET(0xC35FBD0)

	class POFDBJOCKLG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RefreshQingQueEnergyBarState* OFKGLJOAMLD; // 0x18
		::Il2CppArray<::System::Object*>* GHPNFDDOJML; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::StringHash EONNKGEFNOD; // 0x30
		::RPG::GameCore::StringHash PEBBMAFBICA; // 0x34
		::RPG::GameCore::StringHash PGFABOACJBK; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshQingQueEnergyBarState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshQingQueEnergyBarState*))((::PBYTE)hIl2Cpp + POFDBJOCKLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBJOCKLG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBJOCKLG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBJOCKLG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POFDBJOCKLG_TICK_OFFSET))(this, a1);
		}

	};
