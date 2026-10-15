#pragma once
#include "unitysdk/unitysdk.h"
class CANBAEOKAJD;
namespace RPG::GameCore { class TaskContext; }

#define KGMNCLLJKGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F6220)
#define KGMNCLLJKGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3F6250)

	class KGMNCLLJKGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CANBAEOKAJD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CANBAEOKAJD*))((::PBYTE)hIl2Cpp + KGMNCLLJKGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMNCLLJKGB_ONTASKBEGIN_OFFSET))(this);
		}

	};
