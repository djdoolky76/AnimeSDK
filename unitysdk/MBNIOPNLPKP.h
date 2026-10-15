#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialClose; }

#define MBNIOPNLPKP_CTOR_OFFSET UNITYSDK_OFFSET(0xB86ED60)
#define MBNIOPNLPKP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB86ED90)

inline static constexpr unsigned int MBNIOPNLPKP_TypeDefinitionIndex = 58821;

	class MBNIOPNLPKP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialClose* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialClose*))((::PBYTE)hIl2Cpp + MBNIOPNLPKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNIOPNLPKP_ONTASKBEGIN_OFFSET))(this);
		}

	};
