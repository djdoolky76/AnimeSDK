#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowPhaseUI; }
namespace RPG::GameCore { class TaskContext; }

#define MJLOGMEBKAH_CTOR_OFFSET UNITYSDK_OFFSET(0xB968ED0)
#define MJLOGMEBKAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB968F00)

inline static constexpr unsigned int MJLOGMEBKAH_TypeDefinitionIndex = 47612;

	class MJLOGMEBKAH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPhaseUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPhaseUI*))((::PBYTE)hIl2Cpp + MJLOGMEBKAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJLOGMEBKAH_ONTASKBEGIN_OFFSET))(this);
		}

	};
