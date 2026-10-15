#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMapRotationVolumeInteractEnabled; }
namespace RPG::GameCore { class TaskContext; }

#define FEONJHHIAJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1572D820)
#define FEONJHHIAJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1572D850)

	class FEONJHHIAJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled*))((::PBYTE)hIl2Cpp + FEONJHHIAJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEONJHHIAJI_ONTASKBEGIN_OFFSET))(this);
		}

	};
