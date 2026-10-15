#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class AdvCreateGroupEntityV2; }
namespace RPG::GameCore { class TaskContext; }

#define CNHIJJPCDCE_CTOR_OFFSET UNITYSDK_OFFSET(0xDA52490)
#define CNHIJJPCDCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA524C0)
#define CNHIJJPCDCE_OBFAHCBHFLP_OFFSET UNITYSDK_OFFSET(0xDA52A20)
#define CNHIJJPCDCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA52510)
#define CNHIJJPCDCE__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xDA52AD0)

	class CNHIJJPCDCE
	{
	public:
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCreateGroupEntityV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCreateGroupEntityV2*))((::PBYTE)hIl2Cpp + CNHIJJPCDCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHIJJPCDCE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHIJJPCDCE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean OBFAHCBHFLP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CNHIJJPCDCE_OBFAHCBHFLP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHIJJPCDCE__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};
