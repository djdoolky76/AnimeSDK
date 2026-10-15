#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class IJJGPIPMNAE;
namespace RPG::GameCore { class TaskContext; }

#define PBGFEBEBHEB_CTOR_OFFSET UNITYSDK_OFFSET(0xBFECDE0)
#define PBGFEBEBHEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFECEC0)

	class PBGFEBEBHEB
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IJJGPIPMNAE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IJJGPIPMNAE*))((::PBYTE)hIl2Cpp + PBGFEBEBHEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGFEBEBHEB_ONTASKBEGIN_OFFSET))(this);
		}

	};
