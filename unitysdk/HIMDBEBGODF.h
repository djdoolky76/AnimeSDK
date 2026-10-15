#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_ByDistanceToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define HIMDBEBGODF_CTOR_OFFSET UNITYSDK_OFFSET(0x15CF86B0)
#define HIMDBEBGODF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15CF86E0)

inline static constexpr unsigned int HIMDBEBGODF_TypeDefinitionIndex = 52188;

	class HIMDBEBGODF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByDistanceToTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + HIMDBEBGODF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMDBEBGODF_EVALUATE_OFFSET))(this);
		}

	};
