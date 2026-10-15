#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEvolveBuildFeature; }

#define DADIBNPCOCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB7310)
#define DADIBNPCOCJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFB7340)

inline static constexpr unsigned int DADIBNPCOCJ_TypeDefinitionIndex = 58783;

	class DADIBNPCOCJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEvolveBuildFeature* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEvolveBuildFeature*))((::PBYTE)hIl2Cpp + DADIBNPCOCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADIBNPCOCJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
