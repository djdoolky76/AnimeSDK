#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropDestructReset; }
namespace RPG::GameCore { class TaskContext; }

#define KEDFKGDAMFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB374E70)
#define KEDFKGDAMFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB374EA0)

	class KEDFKGDAMFB
	{
	public:
		::RPG::GameCore::PropComponent* PMIBEAIGLAO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropDestructReset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropDestructReset*))((::PBYTE)hIl2Cpp + KEDFKGDAMFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEDFKGDAMFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
