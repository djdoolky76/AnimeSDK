#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEntityFollowAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define POGCLEHOILO_CTOR_OFFSET UNITYSDK_OFFSET(0xC3587D0)
#define POGCLEHOILO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC358800)

inline static constexpr unsigned int POGCLEHOILO_TypeDefinitionIndex = 55503;

	class POGCLEHOILO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + POGCLEHOILO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POGCLEHOILO_ONTASKBEGIN_OFFSET))(this);
		}

	};
