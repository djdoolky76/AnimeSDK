#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnloadBackgroundPlayer; }

#define JBLKMJKCKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19A75130)
#define JBLKMJKCKNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A75160)
#define JBLKMJKCKNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19A751A0)

inline static constexpr unsigned int JBLKMJKCKNJ_TypeDefinitionIndex = 54622;

	class JBLKMJKCKNJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnloadBackgroundPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnloadBackgroundPlayer*))((::PBYTE)hIl2Cpp + JBLKMJKCKNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLKMJKCKNJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLKMJKCKNJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
