#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnloadBackgroundPlayer; }

#define JBLKMJKCKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16572B40)
#define JBLKMJKCKNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16572B70)
#define JBLKMJKCKNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16572BB0)

inline static constexpr unsigned int JBLKMJKCKNJ_TypeDefinitionIndex = 53460;

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
