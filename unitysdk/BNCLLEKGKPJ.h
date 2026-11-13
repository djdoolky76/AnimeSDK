#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEntityArtRotation; }
namespace RPG::GameCore { class TaskContext; }

#define BNCLLEKGKPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A75AE50)
#define BNCLLEKGKPJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A75AE80)

inline static constexpr unsigned int BNCLLEKGKPJ_TypeDefinitionIndex = 59806;

	class BNCLLEKGKPJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityArtRotation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityArtRotation*))((::PBYTE)hIl2Cpp + BNCLLEKGKPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCLLEKGKPJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
