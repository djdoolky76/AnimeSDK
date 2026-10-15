#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByAnchorAngleDiffWithMainCameraOverThan; }
namespace RPG::GameCore { class TaskContext; }

#define PBHABMNMJIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBFED2D0)
#define PBHABMNMJIF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFED300)

inline static constexpr unsigned int PBHABMNMJIF_TypeDefinitionIndex = 57963;

	class PBHABMNMJIF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*))((::PBYTE)hIl2Cpp + PBHABMNMJIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHABMNMJIF_EVALUATE_OFFSET))(this);
		}

	};
