#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EndReShaSceneSelection; }
namespace RPG::GameCore { class TaskContext; }

#define KIJKNAILHBA_CTOR_OFFSET UNITYSDK_OFFSET(0x19EF1FE0)
#define KIJKNAILHBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19EF2010)

inline static constexpr unsigned int KIJKNAILHBA_TypeDefinitionIndex = 53893;

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
