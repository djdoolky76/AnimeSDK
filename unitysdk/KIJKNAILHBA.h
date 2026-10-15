#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EndReShaSceneSelection; }
namespace RPG::GameCore { class TaskContext; }

#define KIJKNAILHBA_CTOR_OFFSET UNITYSDK_OFFSET(0xB42BA40)
#define KIJKNAILHBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB42BA70)

inline static constexpr unsigned int KIJKNAILHBA_TypeDefinitionIndex = 52749;

	class KIJKNAILHBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndReShaSceneSelection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndReShaSceneSelection*))((::PBYTE)hIl2Cpp + KIJKNAILHBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJKNAILHBA_ONTASKBEGIN_OFFSET))(this);
		}

	};
