#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetGlobalShaderProperty; }
namespace RPG::GameCore { class TaskContext; }

#define GJLIAPKPAHK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A609C0)
#define GJLIAPKPAHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A609F0)

inline static constexpr unsigned int GJLIAPKPAHK_TypeDefinitionIndex = 55510;

	class GJLIAPKPAHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetGlobalShaderProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetGlobalShaderProperty*))((::PBYTE)hIl2Cpp + GJLIAPKPAHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLIAPKPAHK_ONTASKBEGIN_OFFSET))(this);
		}

	};
