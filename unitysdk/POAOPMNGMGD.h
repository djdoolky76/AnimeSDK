#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class PropSetupAbilityTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define POAOPMNGMGD_CTOR_OFFSET UNITYSDK_OFFSET(0xC357350)
#define POAOPMNGMGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3573E0)
#define POAOPMNGMGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3574B0)

	class POAOPMNGMGD
	{
	public:
		::KFELGAIGHAP* JBCJHMLJMPF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupAbilityTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupAbilityTrigger*))((::PBYTE)hIl2Cpp + POAOPMNGMGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POAOPMNGMGD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POAOPMNGMGD_ONTASKBEGIN_OFFSET))(this);
		}

	};
