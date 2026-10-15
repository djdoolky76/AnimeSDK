#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/System/Object.h"
class BAHEINMHOAC;
class GHMGGIHEHJE;
class JIJBCGDANLJ;
class KPDKCEAFBHI;
namespace RPG::Client::B51Racing { class RoadRashGameHitNotifyData; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityCoolDown; }
namespace RPG::Client::RoadRash { class RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMOLODHKOOC_ACFFPBDJIGP_OFFSET UNITYSDK_OFFSET(0xB56E440)
#define KMOLODHKOOC_AILJLGCLMMB_OFFSET UNITYSDK_OFFSET(0xB56D820)
#define KMOLODHKOOC_BIKINAPEFDF_OFFSET UNITYSDK_OFFSET(0xB56D4C0)
#define KMOLODHKOOC_CNDJEHOGBKD_OFFSET UNITYSDK_OFFSET(0xB56D9F0)
#define KMOLODHKOOC_CTOR_OFFSET UNITYSDK_OFFSET(0xB56C350)
#define KMOLODHKOOC_ENJFFAMMCOC_OFFSET UNITYSDK_OFFSET(0xB56DE80)
#define KMOLODHKOOC_EOJIBJNLKPG_OFFSET UNITYSDK_OFFSET(0xB56CC40)
#define KMOLODHKOOC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB56C4A0)
#define KMOLODHKOOC_FEPGPHDHEOB_OFFSET UNITYSDK_OFFSET(0xB56E4A0)
#define KMOLODHKOOC_GAANILINAEE_OFFSET UNITYSDK_OFFSET(0xB56DC00)
#define KMOLODHKOOC_GLHLPNBLKBN_OFFSET UNITYSDK_OFFSET(0xB56E370)
#define KMOLODHKOOC_HLLCGAJGDOJ_OFFSET UNITYSDK_OFFSET(0xB56D690)
#define KMOLODHKOOC_HPMIIHEDDAO_OFFSET UNITYSDK_OFFSET(0xB56DCC0)
#define KMOLODHKOOC_ILDHNGGKHJG_OFFSET UNITYSDK_OFFSET(0xB56E110)
#define KMOLODHKOOC_ILHELNCNMIN_OFFSET UNITYSDK_OFFSET(0xB56D930)
#define KMOLODHKOOC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB56C360)
#define KMOLODHKOOC_LALJEAMIKMG_OFFSET UNITYSDK_OFFSET(0xB56DD80)
#define KMOLODHKOOC_MOMDKFBHLND_OFFSET UNITYSDK_OFFSET(0xB56DB40)
#define KMOLODHKOOC_PHHEHKGCBBD_OFFSET UNITYSDK_OFFSET(0xB56E010)
#define KMOLODHKOOC_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB56C420)

	class KMOLODHKOOC : public ::System::Object
	{
	public:
		::JIJBCGDANLJ* EEFMDEHLLFI; // 0x10
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::JIJBCGDANLJ* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + KMOLODHKOOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOLODHKOOC_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOLODHKOOC_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOLODHKOOC_EXECUTE_OFFSET))(this);
		}

		::System::Int32 EOJIBJNLKPG(::GHMGGIHEHJE* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KMOLODHKOOC_EOJIBJNLKPG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BIKINAPEFDF(::BAHEINMHOAC* a1, ::GHMGGIHEHJE* a2, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHEINMHOAC*, ::GHMGGIHEHJE*, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*))((::PBYTE)hIl2Cpp + KMOLODHKOOC_BIKINAPEFDF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HLLCGAJGDOJ(::BAHEINMHOAC* a1, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHEINMHOAC*, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KMOLODHKOOC_HLLCGAJGDOJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean LALJEAMIKMG(::BAHEINMHOAC* a1, ::GHMGGIHEHJE* a2, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHEINMHOAC*, ::GHMGGIHEHJE*, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + KMOLODHKOOC_LALJEAMIKMG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ENJFFAMMCOC(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*))((::PBYTE)hIl2Cpp + KMOLODHKOOC_ENJFFAMMCOC_OFFSET))(this, a1, a2);
		}

		::System::UInt32 AILJLGCLMMB(::GHMGGIHEHJE* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KMOLODHKOOC_AILJLGCLMMB_OFFSET))(this, a1);
		}

		static ::System::UInt32 PHHEHKGCBBD(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*>* a1, ::System::Boolean a2)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMOLODHKOOC_PHHEHKGCBBD_OFFSET))(a1, a2);
		}

		static ::System::Single ILHELNCNMIN(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KMOLODHKOOC_ILHELNCNMIN_OFFSET))(a1);
		}

		static ::System::Boolean CNDJEHOGBKD(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2)
		{
			return ((::System::Boolean(*)(::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState))((::PBYTE)hIl2Cpp + KMOLODHKOOC_CNDJEHOGBKD_OFFSET))(a1, a2);
		}

		static ::System::Int32 MOMDKFBHLND(::GHMGGIHEHJE* a1)
		{
			return ((::System::Int32(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KMOLODHKOOC_MOMDKFBHLND_OFFSET))(a1);
		}

		static ::System::Int32 GAANILINAEE(::GHMGGIHEHJE* a1)
		{
			return ((::System::Int32(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KMOLODHKOOC_GAANILINAEE_OFFSET))(a1);
		}

		static ::System::Boolean HPMIIHEDDAO(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + KMOLODHKOOC_HPMIIHEDDAO_OFFSET))(a1);
		}

		::System::Void ILDHNGGKHJG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMOLODHKOOC_ILDHNGGKHJG_OFFSET))(this, a1);
		}

		static ::System::Boolean ACFFPBDJIGP(::RPG::Client::B51Racing::RoadRashGameHitNotifyData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::B51Racing::RoadRashGameHitNotifyData*))((::PBYTE)hIl2Cpp + KMOLODHKOOC_ACFFPBDJIGP_OFFSET))(a1);
		}

		::System::Boolean GLHLPNBLKBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOLODHKOOC_GLHLPNBLKBN_OFFSET))(this);
		}

		::System::Boolean FEPGPHDHEOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOLODHKOOC_FEPGPHDHEOB_OFFSET))(this);
		}

	};
