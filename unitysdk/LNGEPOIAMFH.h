#pragma once
#include "unitysdk/unitysdk.h"
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_LittleGameShare_DoNothing; }

#define LNGEPOIAMFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C740DD0)
#define LNGEPOIAMFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C740DE0)
#define LNGEPOIAMFH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C740FC0)
#define LNGEPOIAMFH_TICK_OFFSET UNITYSDK_OFFSET(0x1C741010)

	class LNGEPOIAMFH
	{
	public:
		::System::Int32 HIIGOGNOKGD; // 0x28
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing*))((::PBYTE)hIl2Cpp + LNGEPOIAMFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGEPOIAMFH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGEPOIAMFH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LNGEPOIAMFH_TICK_OFFSET))(this, a1);
		}

	};
