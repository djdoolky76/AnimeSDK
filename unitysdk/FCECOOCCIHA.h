#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvAttachEntityToPropEX; }
namespace RPG::GameCore { class TaskContext; }

#define FCECOOCCIHA_CTOR_OFFSET UNITYSDK_OFFSET(0x156B7840)
#define FCECOOCCIHA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156B7870)

	class FCECOOCCIHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAttachEntityToPropEX* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAttachEntityToPropEX*))((::PBYTE)hIl2Cpp + FCECOOCCIHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCECOOCCIHA_ONTASKBEGIN_OFFSET))(this);
		}

	};
