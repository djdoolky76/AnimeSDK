#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SO_SendMessage; }
namespace RPG::GameCore { class TaskContext; }

#define AOCBANOMDEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A83FCB0)
#define AOCBANOMDEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A83FD00)
#define AOCBANOMDEG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A83FD70)

inline static constexpr unsigned int AOCBANOMDEG_TypeDefinitionIndex = 53228;

	class AOCBANOMDEG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_SendMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_SendMessage*))((::PBYTE)hIl2Cpp + AOCBANOMDEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCBANOMDEG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCBANOMDEG_ONTASKRESET_OFFSET))(this);
		}

	};
