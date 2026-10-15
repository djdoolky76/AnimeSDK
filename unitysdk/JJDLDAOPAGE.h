#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetActionDelayNearTarget; }
namespace RPG::GameCore { class TaskContext; }

#define JJDLDAOPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xB201CB0)
#define JJDLDAOPAGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB201CE0)

inline static constexpr unsigned int JJDLDAOPAGE_TypeDefinitionIndex = 55335;

	class JJDLDAOPAGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetActionDelayNearTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetActionDelayNearTarget*))((::PBYTE)hIl2Cpp + JJDLDAOPAGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDLDAOPAGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
