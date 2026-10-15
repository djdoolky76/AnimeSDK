#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetUpTrainVisitorBubble; }
namespace RPG::GameCore { class TaskContext; }

#define DPGPLJPLJFA_CTOR_OFFSET UNITYSDK_OFFSET(0x11FFC880)
#define DPGPLJPLJFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FFC8B0)

inline static constexpr unsigned int DPGPLJPLJFA_TypeDefinitionIndex = 53259;

	class DPGPLJPLJFA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUpTrainVisitorBubble* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUpTrainVisitorBubble*))((::PBYTE)hIl2Cpp + DPGPLJPLJFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGPLJPLJFA_ONTASKBEGIN_OFFSET))(this);
		}

	};
