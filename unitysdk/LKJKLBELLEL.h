#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentVCameraConfigCaster; }
namespace RPG::GameCore { class TaskContext; }

#define LKJKLBELLEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB752BB0)
#define LKJKLBELLEL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB752BE0)

inline static constexpr unsigned int LKJKLBELLEL_TypeDefinitionIndex = 55798;

	class LKJKLBELLEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + LKJKLBELLEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJKLBELLEL_EVALUATE_OFFSET))(this);
		}

	};
