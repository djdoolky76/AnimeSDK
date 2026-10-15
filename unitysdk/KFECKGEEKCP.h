#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client::Prop { class WolfBroPuzzleBoard; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitWolfBroPuzzleStartup; }

#define KFECKGEEKCP_CTOR_OFFSET UNITYSDK_OFFSET(0xB3955C0)
#define KFECKGEEKCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB395AE0)
#define KFECKGEEKCP_IKGIDBAJFGF_OFFSET UNITYSDK_OFFSET(0xB395FF0)
#define KFECKGEEKCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3956F0)
#define KFECKGEEKCP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB395940)
#define KFECKGEEKCP_TICK_OFFSET UNITYSDK_OFFSET(0xB395CC0)

	class KFECKGEEKCP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitWolfBroPuzzleStartup* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::KFELGAIGHAP* EHOAHCNLNAN; // 0x28
		::RPG::Client::Prop::WolfBroPuzzleBoard* PNMFAOJNNIC; // 0x30
		::KFELGAIGHAP* BBLAHCCDCDH; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitWolfBroPuzzleStartup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitWolfBroPuzzleStartup*))((::PBYTE)hIl2Cpp + KFECKGEEKCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFECKGEEKCP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFECKGEEKCP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFECKGEEKCP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFECKGEEKCP_TICK_OFFSET))(this, a1);
		}

		::System::Void IKGIDBAJFGF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFECKGEEKCP_IKGIDBAJFGF_OFFSET))(this, a1);
		}

	};
