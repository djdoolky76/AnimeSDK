#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvForceNpcGoBack; }
namespace RPG::GameCore { class TaskContext; }

#define EJLAFOHOJGM_CTOR_OFFSET UNITYSDK_OFFSET(0x154E0E10)
#define EJLAFOHOJGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154E0E40)

inline static constexpr unsigned int EJLAFOHOJGM_TypeDefinitionIndex = 52422;

	class EJLAFOHOJGM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvForceNpcGoBack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvForceNpcGoBack*))((::PBYTE)hIl2Cpp + EJLAFOHOJGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLAFOHOJGM_ONTASKBEGIN_OFFSET))(this);
		}

	};
