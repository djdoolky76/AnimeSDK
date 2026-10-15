#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GlobalOverrideTimeRewindSpecialControlMode; }
namespace RPG::GameCore { class TaskContext; }

#define IMHIGHEBGDD_CTOR_OFFSET UNITYSDK_OFFSET(0x164D49E0)
#define IMHIGHEBGDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164D4A10)

	class IMHIGHEBGDD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalOverrideTimeRewindSpecialControlMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalOverrideTimeRewindSpecialControlMode*))((::PBYTE)hIl2Cpp + IMHIGHEBGDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHIGHEBGDD_ONTASKBEGIN_OFFSET))(this);
		}

	};
