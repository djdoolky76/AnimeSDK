#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPhotoGraphFovLevelRange; }
namespace RPG::GameCore { class TaskContext; }

#define KCDMFDPPLIO_CTOR_OFFSET UNITYSDK_OFFSET(0xB32B170)
#define KCDMFDPPLIO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB32B1A0)

inline static constexpr unsigned int KCDMFDPPLIO_TypeDefinitionIndex = 53163;

	class KCDMFDPPLIO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + KCDMFDPPLIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDMFDPPLIO_EVALUATE_OFFSET))(this);
		}

	};
