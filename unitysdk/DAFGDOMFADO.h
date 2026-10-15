#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByInTrackCamera; }
namespace RPG::GameCore { class TaskContext; }

#define DAFGDOMFADO_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB7F00)
#define DAFGDOMFADO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDFB7F30)

inline static constexpr unsigned int DAFGDOMFADO_TypeDefinitionIndex = 53145;

	class DAFGDOMFADO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInTrackCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + DAFGDOMFADO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFGDOMFADO_EVALUATE_OFFSET))(this);
		}

	};
