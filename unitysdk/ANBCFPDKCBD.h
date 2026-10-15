#pragma once
#include "unitysdk/unitysdk.h"
class CPFPIKGBLFK;
namespace RPG::GameCore { class TaskContext; }

#define ANBCFPDKCBD_CTOR_OFFSET UNITYSDK_OFFSET(0x15591E80)
#define ANBCFPDKCBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15591EB0)

	class ANBCFPDKCBD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CPFPIKGBLFK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CPFPIKGBLFK*))((::PBYTE)hIl2Cpp + ANBCFPDKCBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBCFPDKCBD_ONTASKBEGIN_OFFSET))(this);
		}

	};
