#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpenRaid; }
namespace RPG::GameCore { class TaskContext; }

#define AOOMDNMHCNF_CTOR_OFFSET UNITYSDK_OFFSET(0x158C6BB0)
#define AOOMDNMHCNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158C6C60)

inline static constexpr unsigned int AOOMDNMHCNF_TypeDefinitionIndex = 58242;

	class AOOMDNMHCNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenRaid* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenRaid*))((::PBYTE)hIl2Cpp + AOOMDNMHCNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOOMDNMHCNF_ONTASKBEGIN_OFFSET))(this);
		}

	};
