#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TakePhoto; }
namespace RPG::GameCore { class TaskContext; }

#define PCIANCIENDK_CTOR_OFFSET UNITYSDK_OFFSET(0xC000860)
#define PCIANCIENDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC000890)

	class PCIANCIENDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TakePhoto* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TakePhoto*))((::PBYTE)hIl2Cpp + PCIANCIENDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIANCIENDK_ONTASKBEGIN_OFFSET))(this);
		}

	};
