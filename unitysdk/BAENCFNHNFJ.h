#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetTimeRelayFlame; }
namespace RPG::GameCore { class TaskContext; }

#define BAENCFNHNFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x199CD020)
#define BAENCFNHNFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x199CD050)

inline static constexpr unsigned int BAENCFNHNFJ_TypeDefinitionIndex = 54370;

	class BAENCFNHNFJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetTimeRelayFlame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetTimeRelayFlame*))((::PBYTE)hIl2Cpp + BAENCFNHNFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAENCFNHNFJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
