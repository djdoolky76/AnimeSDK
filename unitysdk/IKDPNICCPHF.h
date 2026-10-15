#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearTalkUI; }
namespace RPG::GameCore { class TaskContext; }

#define IKDPNICCPHF_CTOR_OFFSET UNITYSDK_OFFSET(0x16484A80)
#define IKDPNICCPHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16484AB0)

inline static constexpr unsigned int IKDPNICCPHF_TypeDefinitionIndex = 58027;

	class IKDPNICCPHF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearTalkUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearTalkUI*))((::PBYTE)hIl2Cpp + IKDPNICCPHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDPNICCPHF_ONTASKBEGIN_OFFSET))(this);
		}

	};
