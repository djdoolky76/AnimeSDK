#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_RtSelectTarget; }
namespace RPG::GameCore { class TaskContext; }

#define DBCLHBABOJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1432A0)
#define DBCLHBABOJJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B1432D0)
#define DBCLHBABOJJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B143680)

inline static constexpr unsigned int DBCLHBABOJJ_TypeDefinitionIndex = 55312;

	class DBCLHBABOJJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_RtSelectTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_RtSelectTarget*))((::PBYTE)hIl2Cpp + DBCLHBABOJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCLHBABOJJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCLHBABOJJ_ONTASKRESET_OFFSET))(this);
		}

	};
