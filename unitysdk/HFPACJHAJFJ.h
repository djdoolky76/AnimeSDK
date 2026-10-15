#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropSetupTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define HFPACJHAJFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8DB60)
#define HFPACJHAJFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C8DB90)
#define HFPACJHAJFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C8DC20)

	class HFPACJHAJFJ
	{
	public:
		::RPG::GameCore::PropComponent* PEDKDCGPHAM; // 0x28
		::System::Boolean IAEHIKEGGHN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupTrigger*))((::PBYTE)hIl2Cpp + HFPACJHAJFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPACJHAJFJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPACJHAJFJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
