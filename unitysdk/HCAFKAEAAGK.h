#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLevelRewardPageShow; }
namespace System { class Object; }

#define HCAFKAEAAGK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C15DC0)
#define HCAFKAEAAGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C15EA0)
#define HCAFKAEAAGK_FKEJLIBLGLE_OFFSET UNITYSDK_OFFSET(0x15C15F60)
#define HCAFKAEAAGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C15DF0)

	class HCAFKAEAAGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLevelRewardPageShow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLevelRewardPageShow*))((::PBYTE)hIl2Cpp + HCAFKAEAAGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAFKAEAAGK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAFKAEAAGK_DISPOSE_OFFSET))(this);
		}

		::System::Void FKEJLIBLGLE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCAFKAEAAGK_FKEJLIBLGLE_OFFSET))(this, a1);
		}

	};
