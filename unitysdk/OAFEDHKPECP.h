#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RecordUseAvatarGlobalBuff; }
namespace RPG::GameCore { class TaskContext; }

#define OAFEDHKPECP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1EA30)
#define OAFEDHKPECP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD1EA60)

	class OAFEDHKPECP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RecordUseAvatarGlobalBuff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RecordUseAvatarGlobalBuff*))((::PBYTE)hIl2Cpp + OAFEDHKPECP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFEDHKPECP_ONTASKBEGIN_OFFSET))(this);
		}

	};
