#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GroupToMemberEntityDataAdapter; }
namespace RPG::GameCore { class TaskContext; }

#define ODLAFLIANHL_CTOR_OFFSET UNITYSDK_OFFSET(0xBDEA660)
#define ODLAFLIANHL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDEA690)

inline static constexpr unsigned int ODLAFLIANHL_TypeDefinitionIndex = 52921;

	class ODLAFLIANHL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GroupToMemberEntityDataAdapter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GroupToMemberEntityDataAdapter*))((::PBYTE)hIl2Cpp + ODLAFLIANHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLAFLIANHL_ONTASKBEGIN_OFFSET))(this);
		}

	};
