#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchPhotoGraphMode; }
namespace RPG::GameCore { class TaskContext; }

#define NNKHKFIAMDG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCC7700)
#define NNKHKFIAMDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCC7730)

	class NNKHKFIAMDG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchPhotoGraphMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchPhotoGraphMode*))((::PBYTE)hIl2Cpp + NNKHKFIAMDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKHKFIAMDG_ONTASKBEGIN_OFFSET))(this);
		}

	};
