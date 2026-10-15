#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowMuseumMarketPage; }
namespace RPG::GameCore { class TaskContext; }

#define AHDCMHOJBPF_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0xEB7C0E0)
#define AHDCMHOJBPF_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7C040)
#define AHDCMHOJBPF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB7C050)
#define AHDCMHOJBPF_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xEB7C360)
#define AHDCMHOJBPF_KHABMEMDHEP_OFFSET UNITYSDK_OFFSET(0xEB7C250)
#define AHDCMHOJBPF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB7C090)
#define AHDCMHOJBPF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB7C1A0)
#define AHDCMHOJBPF_TICK_OFFSET UNITYSDK_OFFSET(0xEB7C1F0)

	class AHDCMHOJBPF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::RPG::GameCore::ShowMuseumMarketPage* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMuseumMarketPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMuseumMarketPage*))((::PBYTE)hIl2Cpp + AHDCMHOJBPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDCMHOJBPF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDCMHOJBPF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDCMHOJBPF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHDCMHOJBPF_TICK_OFFSET))(this, a1);
		}

		::System::Void AIEGALJHOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDCMHOJBPF_AIEGALJHOFE_OFFSET))(this);
		}

		::System::Void KHABMEMDHEP(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + AHDCMHOJBPF_KHABMEMDHEP_OFFSET))(this, a1);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDCMHOJBPF_JNIKOAEAEHB_OFFSET))(this);
		}

	};
