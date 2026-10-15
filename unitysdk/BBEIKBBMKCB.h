#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckLineupAvatarBaseType; }
namespace RPG::GameCore { class TaskContext; }

#define BBEIKBBMKCB_CTOR_OFFSET UNITYSDK_OFFSET(0x15E798E0)
#define BBEIKBBMKCB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15E79910)

inline static constexpr unsigned int BBEIKBBMKCB_TypeDefinitionIndex = 52084;

	class BBEIKBBMKCB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*))((::PBYTE)hIl2Cpp + BBEIKBBMKCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEIKBBMKCB_EVALUATE_OFFSET))(this);
		}

	};
