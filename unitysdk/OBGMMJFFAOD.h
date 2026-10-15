#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MemberToMemberEntityDataAdapter; }
namespace RPG::GameCore { class TaskContext; }

#define OBGMMJFFAOD_CTOR_OFFSET UNITYSDK_OFFSET(0xBD38F80)
#define OBGMMJFFAOD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD38FB0)

inline static constexpr unsigned int OBGMMJFFAOD_TypeDefinitionIndex = 53019;

	class OBGMMJFFAOD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MemberToMemberEntityDataAdapter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MemberToMemberEntityDataAdapter*))((::PBYTE)hIl2Cpp + OBGMMJFFAOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGMMJFFAOD_ONTASKBEGIN_OFFSET))(this);
		}

	};
