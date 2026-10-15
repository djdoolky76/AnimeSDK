#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveWalkingEffect; }
namespace RPG::GameCore { class TaskContext; }

#define MMLKAPBKKOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D1CA0)
#define MMLKAPBKKOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9D1CD0)

inline static constexpr unsigned int MMLKAPBKKOK_TypeDefinitionIndex = 56383;

	class MMLKAPBKKOK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveWalkingEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveWalkingEffect*))((::PBYTE)hIl2Cpp + MMLKAPBKKOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLKAPBKKOK_ONTASKBEGIN_OFFSET))(this);
		}

	};
