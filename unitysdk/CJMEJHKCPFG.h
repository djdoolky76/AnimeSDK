#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AttachGlobalShield; }
namespace RPG::GameCore { class TaskContext; }

#define CJMEJHKCPFG_CTOR_OFFSET UNITYSDK_OFFSET(0xD4D1B50)
#define CJMEJHKCPFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4D21C0)
#define CJMEJHKCPFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD4D1C40)

	class CJMEJHKCPFG
	{
	public:
		::KFELGAIGHAP* CLJEOHHIOKK; // 0x28
		::KFELGAIGHAP* PPCEGDLCPJH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachGlobalShield* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachGlobalShield*))((::PBYTE)hIl2Cpp + CJMEJHKCPFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMEJHKCPFG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMEJHKCPFG_DISPOSE_OFFSET))(this);
		}

	};
