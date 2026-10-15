#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterMaterialEffectEnable; }
namespace RPG::GameCore { class TaskContext; }

#define JBMDBOLKEPM_CTOR_OFFSET UNITYSDK_OFFSET(0x16566160)
#define JBMDBOLKEPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16566190)

inline static constexpr unsigned int JBMDBOLKEPM_TypeDefinitionIndex = 53222;

	class JBMDBOLKEPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterMaterialEffectEnable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterMaterialEffectEnable*))((::PBYTE)hIl2Cpp + JBMDBOLKEPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMDBOLKEPM_ONTASKBEGIN_OFFSET))(this);
		}

	};
