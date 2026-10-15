#pragma once
#include "unitysdk/unitysdk.h"
class BACCOPOCMPC;
namespace RPG::GameCore { class ST_Main_HangUpByLevel; }
namespace RPG::GameCore { class TaskContext; }

#define KGJKPGAGKEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB3EE250)
#define KGJKPGAGKEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3EE310)
#define KGJKPGAGKEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3EE3A0)

inline static constexpr unsigned int KGJKPGAGKEC_TypeDefinitionIndex = 52207;

	class KGJKPGAGKEC
	{
	public:
		::BACCOPOCMPC* PJLGDHFHFLO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_HangUpByLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_HangUpByLevel*))((::PBYTE)hIl2Cpp + KGJKPGAGKEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJKPGAGKEC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJKPGAGKEC_ONTASKRESET_OFFSET))(this);
		}

	};
