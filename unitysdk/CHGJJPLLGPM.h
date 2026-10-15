#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEffectAutoLayoutScale; }
namespace RPG::GameCore { class TaskContext; }

#define CHGJJPLLGPM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF42930)
#define CHGJJPLLGPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF42960)

inline static constexpr unsigned int CHGJJPLLGPM_TypeDefinitionIndex = 55491;

	class CHGJJPLLGPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAutoLayoutScale* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAutoLayoutScale*))((::PBYTE)hIl2Cpp + CHGJJPLLGPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGJJPLLGPM_ONTASKBEGIN_OFFSET))(this);
		}

	};
