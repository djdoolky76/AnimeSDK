#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetPropCanBePlayerLock; }
namespace RPG::GameCore { class TaskContext; }

#define DKICKECEHAO_CTOR_OFFSET UNITYSDK_OFFSET(0xF880A50)
#define DKICKECEHAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF880A80)

inline static constexpr unsigned int DKICKECEHAO_TypeDefinitionIndex = 53253;

	class DKICKECEHAO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPropCanBePlayerLock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPropCanBePlayerLock*))((::PBYTE)hIl2Cpp + DKICKECEHAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKICKECEHAO_ONTASKBEGIN_OFFSET))(this);
		}

	};
