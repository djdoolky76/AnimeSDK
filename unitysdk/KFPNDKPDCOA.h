#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPhotoGraphConditionSuccess; }
namespace RPG::GameCore { class TaskContext; }

#define KFPNDKPDCOA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC59960)
#define KFPNDKPDCOA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC59990)

inline static constexpr unsigned int KFPNDKPDCOA_TypeDefinitionIndex = 54324;

	class KFPNDKPDCOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*))((::PBYTE)hIl2Cpp + KFPNDKPDCOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPNDKPDCOA_EVALUATE_OFFSET))(this);
		}

	};
