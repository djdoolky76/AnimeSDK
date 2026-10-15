#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MarblePauseGame; }
namespace RPG::GameCore { class TaskContext; }

#define ADDGBPAAGLI_CTOR_OFFSET UNITYSDK_OFFSET(0xB135830)
#define ADDGBPAAGLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB135860)

	class ADDGBPAAGLI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarblePauseGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarblePauseGame*))((::PBYTE)hIl2Cpp + ADDGBPAAGLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDGBPAAGLI_ONTASKBEGIN_OFFSET))(this);
		}

	};
