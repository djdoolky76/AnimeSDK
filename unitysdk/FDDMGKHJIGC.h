#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeIncomingActionCountDown; }
namespace RPG::GameCore { class TaskContext; }

#define FDDMGKHJIGC_CTOR_OFFSET UNITYSDK_OFFSET(0x156C9440)
#define FDDMGKHJIGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156C9470)

inline static constexpr unsigned int FDDMGKHJIGC_TypeDefinitionIndex = 54798;

	class FDDMGKHJIGC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeIncomingActionCountDown* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeIncomingActionCountDown*))((::PBYTE)hIl2Cpp + FDDMGKHJIGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDMGKHJIGC_ONTASKBEGIN_OFFSET))(this);
		}

	};
