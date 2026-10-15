#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class AdvCreateGroupEntity; }
namespace RPG::GameCore { class TaskContext; }

#define KNEKPEALNNH_CTOR_OFFSET UNITYSDK_OFFSET(0xB581C80)
#define KNEKPEALNNH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB581CB0)
#define KNEKPEALNNH_OBFAHCBHFLP_OFFSET UNITYSDK_OFFSET(0xB5821B0)
#define KNEKPEALNNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB581D00)

	class KNEKPEALNNH
	{
	public:
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCreateGroupEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCreateGroupEntity*))((::PBYTE)hIl2Cpp + KNEKPEALNNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEKPEALNNH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEKPEALNNH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean OBFAHCBHFLP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KNEKPEALNNH_OBFAHCBHFLP_OFFSET))(this, a1, a2);
		}

	};
