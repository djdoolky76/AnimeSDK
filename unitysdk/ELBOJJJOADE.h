#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvRemoveAIHangUpInfo; }
namespace RPG::GameCore { class TaskContext; }

#define ELBOJJJOADE_CTOR_OFFSET UNITYSDK_OFFSET(0x1551C1A0)
#define ELBOJJJOADE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1551C1D0)

inline static constexpr unsigned int ELBOJJJOADE_TypeDefinitionIndex = 52480;

	class ELBOJJJOADE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRemoveAIHangUpInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRemoveAIHangUpInfo*))((::PBYTE)hIl2Cpp + ELBOJJJOADE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBOJJJOADE_ONTASKBEGIN_OFFSET))(this);
		}

	};
