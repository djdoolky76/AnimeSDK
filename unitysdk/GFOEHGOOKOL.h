#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPhotoGraphFovLevel; }
namespace RPG::GameCore { class TaskContext; }

#define GFOEHGOOKOL_CTOR_OFFSET UNITYSDK_OFFSET(0x159F3670)
#define GFOEHGOOKOL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159F36A0)

inline static constexpr unsigned int GFOEHGOOKOL_TypeDefinitionIndex = 53164;

	class GFOEHGOOKOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPhotoGraphFovLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPhotoGraphFovLevel*))((::PBYTE)hIl2Cpp + GFOEHGOOKOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOEHGOOKOL_EVALUATE_OFFSET))(this);
		}

	};
