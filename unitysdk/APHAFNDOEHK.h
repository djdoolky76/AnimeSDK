#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PreloadMap; }
namespace RPG::GameCore { class TaskContext; }

#define APHAFNDOEHK_CTOR_OFFSET UNITYSDK_OFFSET(0x15BAB490)
#define APHAFNDOEHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BAB4C0)

	class APHAFNDOEHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PreloadMap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PreloadMap*))((::PBYTE)hIl2Cpp + APHAFNDOEHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHAFNDOEHK_ONTASKBEGIN_OFFSET))(this);
		}

	};
