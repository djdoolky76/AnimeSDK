#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartWindowStage; }
namespace RPG::GameCore { class TaskContext; }

#define MFOCLABNFGE_CTOR_OFFSET UNITYSDK_OFFSET(0xB910320)
#define MFOCLABNFGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB910350)

inline static constexpr unsigned int MFOCLABNFGE_TypeDefinitionIndex = 52892;

	class MFOCLABNFGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartWindowStage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartWindowStage*))((::PBYTE)hIl2Cpp + MFOCLABNFGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOCLABNFGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
