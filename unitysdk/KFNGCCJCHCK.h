#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SkipPopupUIOffset; }
namespace RPG::GameCore { class TaskContext; }

#define KFNGCCJCHCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C6090)
#define KFNGCCJCHCK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3C60C0)

	class KFNGCCJCHCK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SkipPopupUIOffset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SkipPopupUIOffset*))((::PBYTE)hIl2Cpp + KFNGCCJCHCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFNGCCJCHCK_ONTASKBEGIN_OFFSET))(this);
		}

	};
