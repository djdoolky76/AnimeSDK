#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class OHNBGKMGBCE;
namespace RPG::GameCore { class TaskContext; }

#define AJFNIKDBFCK_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBA570)
#define AJFNIKDBFCK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CBA5A0)

	class AJFNIKDBFCK
	{
	public:
		::RPG::GameCore::StringHash IMCFADGAEIN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OHNBGKMGBCE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OHNBGKMGBCE*))((::PBYTE)hIl2Cpp + AJFNIKDBFCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFNIKDBFCK_ONTASKBEGIN_OFFSET))(this);
		}

	};
