#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetUniqueName; }
namespace RPG::GameCore { class TaskContext; }

#define HJPOJOOICFO_CTOR_OFFSET UNITYSDK_OFFSET(0x15D2D1F0)
#define HJPOJOOICFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D2D220)

inline static constexpr unsigned int HJPOJOOICFO_TypeDefinitionIndex = 55581;

	class HJPOJOOICFO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetUniqueName* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetUniqueName*))((::PBYTE)hIl2Cpp + HJPOJOOICFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPOJOOICFO_ONTASKBEGIN_OFFSET))(this);
		}

	};
