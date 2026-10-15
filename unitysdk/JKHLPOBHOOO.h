#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAvatarGlobalBuffState; }
namespace RPG::GameCore { class TaskContext; }

#define JKHLPOBHOOO_CTOR_OFFSET UNITYSDK_OFFSET(0xB21D710)
#define JKHLPOBHOOO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB21D740)

	class JKHLPOBHOOO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAvatarGlobalBuffState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAvatarGlobalBuffState*))((::PBYTE)hIl2Cpp + JKHLPOBHOOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHLPOBHOOO_ONTASKBEGIN_OFFSET))(this);
		}

	};
