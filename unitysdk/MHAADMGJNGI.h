#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetLocalOffsetAsMoveTarget; }
namespace RPG::GameCore { class TaskContext; }

#define MHAADMGJNGI_CTOR_OFFSET UNITYSDK_OFFSET(0xB92EB90)
#define MHAADMGJNGI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB92EBC0)

inline static constexpr unsigned int MHAADMGJNGI_TypeDefinitionIndex = 55531;

	class MHAADMGJNGI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLocalOffsetAsMoveTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLocalOffsetAsMoveTarget*))((::PBYTE)hIl2Cpp + MHAADMGJNGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAADMGJNGI_ONTASKBEGIN_OFFSET))(this);
		}

	};
