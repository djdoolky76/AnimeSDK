#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetLocalPlayerDitherAlpha; }
namespace RPG::GameCore { class TaskContext; }

#define IEBGPFKGBOP_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE7A90)
#define IEBGPFKGBOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EE7AC0)

	class IEBGPFKGBOP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLocalPlayerDitherAlpha* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLocalPlayerDitherAlpha*))((::PBYTE)hIl2Cpp + IEBGPFKGBOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBGPFKGBOP_ONTASKBEGIN_OFFSET))(this);
		}

	};
