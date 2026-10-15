#pragma once
#include "unitysdk/unitysdk.h"
class DMHFEDAIKME;
namespace RPG::Client { class ST_Parkour_ShutdownEngine; }
namespace RPG::GameCore { class TaskContext; }

#define JMJMIKAIOIK_CTOR_OFFSET UNITYSDK_OFFSET(0xB268DC0)
#define JMJMIKAIOIK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB268DF0)
#define JMJMIKAIOIK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB268E40)
#define JMJMIKAIOIK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB269100)
#define JMJMIKAIOIK_TICK_OFFSET UNITYSDK_OFFSET(0xB269290)

	class JMJMIKAIOIK
	{
	public:
		::DMHFEDAIKME* PFECGMGNMEN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ShutdownEngine* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ShutdownEngine*))((::PBYTE)hIl2Cpp + JMJMIKAIOIK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJMIKAIOIK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJMIKAIOIK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMJMIKAIOIK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMJMIKAIOIK_TICK_OFFSET))(this, a1);
		}

	};
