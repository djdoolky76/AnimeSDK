#pragma once
#include "unitysdk/unitysdk.h"
class DABPPOPGJLL;
namespace RPG::GameCore { class TaskContext; }

#define BHFHFPNKGMC_CTOR_OFFSET UNITYSDK_OFFSET(0xB475C00)
#define BHFHFPNKGMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB475C30)

	class BHFHFPNKGMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DABPPOPGJLL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DABPPOPGJLL*))((::PBYTE)hIl2Cpp + BHFHFPNKGMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFHFPNKGMC_ONTASKBEGIN_OFFSET))(this);
		}

	};
