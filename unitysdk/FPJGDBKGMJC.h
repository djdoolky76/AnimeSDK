#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EndPropSceneSelection; }
namespace RPG::GameCore { class TaskContext; }

#define FPJGDBKGMJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1591D550)
#define FPJGDBKGMJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1591D580)

	class FPJGDBKGMJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndPropSceneSelection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndPropSceneSelection*))((::PBYTE)hIl2Cpp + FPJGDBKGMJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJGDBKGMJC_ONTASKBEGIN_OFFSET))(this);
		}

	};
