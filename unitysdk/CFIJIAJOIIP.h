#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ReleaseEnvProfile; }
namespace RPG::GameCore { class TaskContext; }

#define CFIJIAJOIIP_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4ED90)
#define CFIJIAJOIIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC4EDA0)
#define CFIJIAJOIIP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC4EDE0)
#define CFIJIAJOIIP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCC4F210)
#define CFIJIAJOIIP_TICK_OFFSET UNITYSDK_OFFSET(0xCC4F260)

	class CFIJIAJOIIP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ReleaseEnvProfile* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReleaseEnvProfile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReleaseEnvProfile*))((::PBYTE)hIl2Cpp + CFIJIAJOIIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJIAJOIIP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJIAJOIIP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJIAJOIIP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFIJIAJOIIP_TICK_OFFSET))(this, a1);
		}

	};
