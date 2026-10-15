#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropSetupHitBox; }
namespace RPG::GameCore { class TaskContext; }

#define GAGLPBECIGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1593B430)
#define GAGLPBECIGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1593B460)

inline static constexpr unsigned int GAGLPBECIGL_TypeDefinitionIndex = 58352;

	class GAGLPBECIGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupHitBox* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupHitBox*))((::PBYTE)hIl2Cpp + GAGLPBECIGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGLPBECIGL_ONTASKBEGIN_OFFSET))(this);
		}

	};
