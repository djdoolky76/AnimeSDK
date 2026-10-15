#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DetachAvatarChange; }
namespace RPG::GameCore { class TaskContext; }

#define LACOKEAMINE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DAE40)
#define LACOKEAMINE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5DAE70)

	class LACOKEAMINE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DetachAvatarChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DetachAvatarChange*))((::PBYTE)hIl2Cpp + LACOKEAMINE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACOKEAMINE_ONTASKBEGIN_OFFSET))(this);
		}

	};
