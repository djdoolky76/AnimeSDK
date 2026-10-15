#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvRemoveEffectList; }
namespace RPG::GameCore { class TaskContext; }

#define HDIFLACOPJB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2A5B0)
#define HDIFLACOPJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C2A5E0)

inline static constexpr unsigned int HDIFLACOPJB_TypeDefinitionIndex = 52481;

	class HDIFLACOPJB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRemoveEffectList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRemoveEffectList*))((::PBYTE)hIl2Cpp + HDIFLACOPJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIFLACOPJB_ONTASKBEGIN_OFFSET))(this);
		}

	};
