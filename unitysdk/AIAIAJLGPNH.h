#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetupFreeStyleSupport; }
namespace RPG::GameCore { class TaskContext; }

#define AIAIAJLGPNH_CTOR_OFFSET UNITYSDK_OFFSET(0xEB8E290)
#define AIAIAJLGPNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB8E2C0)

inline static constexpr unsigned int AIAIAJLGPNH_TypeDefinitionIndex = 58013;

	class AIAIAJLGPNH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupFreeStyleSupport* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupFreeStyleSupport*))((::PBYTE)hIl2Cpp + AIAIAJLGPNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIAIAJLGPNH_ONTASKBEGIN_OFFSET))(this);
		}

	};
