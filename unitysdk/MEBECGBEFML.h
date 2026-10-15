#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DisableLoopTowerShake; }
namespace RPG::GameCore { class TaskContext; }

#define MEBECGBEFML_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B8810)
#define MEBECGBEFML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8B8840)

	class MEBECGBEFML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableLoopTowerShake* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableLoopTowerShake*))((::PBYTE)hIl2Cpp + MEBECGBEFML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBECGBEFML_ONTASKBEGIN_OFFSET))(this);
		}

	};
