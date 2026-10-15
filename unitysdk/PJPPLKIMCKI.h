#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Main_LittleGame_MoveToPosition; }
namespace RPG::GameCore { class TaskContext; }

#define PJPPLKIMCKI_CTOR_OFFSET UNITYSDK_OFFSET(0xC29D570)
#define PJPPLKIMCKI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC29D5A0)
#define PJPPLKIMCKI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC29D5F0)

inline static constexpr unsigned int PJPPLKIMCKI_TypeDefinitionIndex = 52145;

	class PJPPLKIMCKI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_LittleGame_MoveToPosition*))((::PBYTE)hIl2Cpp + PJPPLKIMCKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPPLKIMCKI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPPLKIMCKI_ONTASKRESET_OFFSET))(this);
		}

	};
