#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialClearAllHideNodes; }

#define BAHLJEKMOFM_CTOR_OFFSET UNITYSDK_OFFSET(0x199D5BD0)
#define BAHLJEKMOFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x199D5C00)

inline static constexpr unsigned int BAHLJEKMOFM_TypeDefinitionIndex = 60087;

	class BAHLJEKMOFM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialClearAllHideNodes* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialClearAllHideNodes*))((::PBYTE)hIl2Cpp + BAHLJEKMOFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHLJEKMOFM_ONTASKBEGIN_OFFSET))(this);
		}

	};
