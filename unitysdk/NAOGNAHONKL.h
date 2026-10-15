#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEntityModifyCameraRootTransform; }
namespace RPG::GameCore { class TaskContext; }

#define NAOGNAHONKL_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA34C0)
#define NAOGNAHONKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAA34F0)

inline static constexpr unsigned int NAOGNAHONKL_TypeDefinitionIndex = 52366;

	class NAOGNAHONKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityModifyCameraRootTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityModifyCameraRootTransform*))((::PBYTE)hIl2Cpp + NAOGNAHONKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAOGNAHONKL_ONTASKBEGIN_OFFSET))(this);
		}

	};
