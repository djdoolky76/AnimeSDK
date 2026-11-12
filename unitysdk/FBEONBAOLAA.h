#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointUIType.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/System/Object.h"
class BKDMJALIAHP;
class FBEONBAOLAA;
class IJDHGLAICLF;
class IKBAMHGDEJC;
class OEENEGJBMCO;
class OEJGKNMOABJ;
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }

#define FBEONBAOLAA_AFGOKEGCPFP_OFFSET UNITYSDK_OFFSET(0x165AF3C0)
#define FBEONBAOLAA_ANHNNGJLLGD_OFFSET UNITYSDK_OFFSET(0x165AF4F0)
#define FBEONBAOLAA_BNCHHCGENKE_OFFSET UNITYSDK_OFFSET(0x165AEF20)
#define FBEONBAOLAA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x165AE8B0)
#define FBEONBAOLAA_CDCCLJGINPD_OFFSET UNITYSDK_OFFSET(0x165AF040)
#define FBEONBAOLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x165AEB40)
#define FBEONBAOLAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165AEC30)
#define FBEONBAOLAA_EMIMADJNMBK_OFFSET UNITYSDK_OFFSET(0x165AEE40)
#define FBEONBAOLAA_FBMPMJFCMEJ_OFFSET UNITYSDK_OFFSET(0x165AF620)
#define FBEONBAOLAA_GET_BATTLEUIEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x165AF000)
#define FBEONBAOLAA_GET_NIHILUXCUSTOMUIDATA_OFFSET UNITYSDK_OFFSET(0x165AF020)
#define FBEONBAOLAA_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0x165AED60)
#define FBEONBAOLAA_INPNDMDOIKN_OFFSET UNITYSDK_OFFSET(0x165AF160)
#define FBEONBAOLAA_JMHACFAIGAF_OFFSET UNITYSDK_OFFSET(0x165AEA80)
#define FBEONBAOLAA_MAAEMMGFPNB_OFFSET UNITYSDK_OFFSET(0x165AF290)
#define FBEONBAOLAA_OBOJEIPJBBJ_OFFSET UNITYSDK_OFFSET(0x165AE930)
#define FBEONBAOLAA_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0x165AEB50)
#define FBEONBAOLAA_SET_BATTLEUIEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0x165AF010)
#define FBEONBAOLAA_SET_NIHILUXCUSTOMUIDATA_OFFSET UNITYSDK_OFFSET(0x165AF030)

inline static constexpr unsigned int FBEONBAOLAA_TypeDefinitionIndex = 74201;

	class FBEONBAOLAA : public ::System::Object
	{
	public:
		::IKBAMHGDEJC* _BattleUIEffectManager_k__BackingField; // 0x10
		::RPG::Client::BattleAvatarNihiluxCustomUIData* _NihiluxCustomUIData_k__BackingField; // 0x18
		::OEJGKNMOABJ* PAFKEPHKAOC; // 0x20
		::BKDMJALIAHP* NJPBNNNHJOJ; // 0x28
		::IJDHGLAICLF* IGEONOAAIHD; // 0x30
		::RPG::GameCore::ElationPointUIType PPDBHGOBMME; // 0x38
		::RPG::GameCore::NihiluxElationUIType DBGGKIDNGKP; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_CTOR_OFFSET))(this);
		}

		static ::FBEONBAOLAA* BPLPBPMEODA(::OEENEGJBMCO* a1, ::RPG::GameCore::LevelUIComponent* a2)
		{
			return ((::FBEONBAOLAA*(*)(::OEENEGJBMCO*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + FBEONBAOLAA_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::FBEONBAOLAA* JMHACFAIGAF(::OEENEGJBMCO* a1, ::RPG::GameCore::LevelUIComponent* a2)
		{
			return ((::FBEONBAOLAA*(*)(::OEENEGJBMCO*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + FBEONBAOLAA_JMHACFAIGAF_OFFSET))(a1, a2);
		}

		static ::FBEONBAOLAA* OBOJEIPJBBJ(::OEENEGJBMCO* a1, ::RPG::GameCore::LevelUIComponent* a2)
		{
			return ((::FBEONBAOLAA*(*)(::OEENEGJBMCO*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + FBEONBAOLAA_OBOJEIPJBBJ_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_DISPOSE_OFFSET))(this);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_PBBEINJGAOE_OFFSET))(this);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void EMIMADJNMBK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBEONBAOLAA_EMIMADJNMBK_OFFSET))(this, a1);
		}

		::System::Void BNCHHCGENKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBEONBAOLAA_BNCHHCGENKE_OFFSET))(this, a1);
		}

		::IKBAMHGDEJC* get_BattleUIEffectManager()
		{
			return ((::IKBAMHGDEJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_GET_BATTLEUIEFFECTMANAGER_OFFSET))(this);
		}

		::System::Void set_BattleUIEffectManager(::IKBAMHGDEJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKBAMHGDEJC*))((::PBYTE)hIl2Cpp + FBEONBAOLAA_SET_BATTLEUIEFFECTMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::BattleAvatarNihiluxCustomUIData* get_NihiluxCustomUIData()
		{
			return ((::RPG::Client::BattleAvatarNihiluxCustomUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_GET_NIHILUXCUSTOMUIDATA_OFFSET))(this);
		}

		::System::Void set_NihiluxCustomUIData(::RPG::Client::BattleAvatarNihiluxCustomUIData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAvatarNihiluxCustomUIData*))((::PBYTE)hIl2Cpp + FBEONBAOLAA_SET_NIHILUXCUSTOMUIDATA_OFFSET))(this, a1);
		}

		::System::Int32 CDCCLJGINPD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_CDCCLJGINPD_OFFSET))(this);
		}

		::System::Int32 INPNDMDOIKN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_INPNDMDOIKN_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* MAAEMMGFPNB()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_MAAEMMGFPNB_OFFSET))(this);
		}

		::System::Int32 AFGOKEGCPFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_AFGOKEGCPFP_OFFSET))(this);
		}

		::System::Int32 ANHNNGJLLGD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_ANHNNGJLLGD_OFFSET))(this);
		}

		::RPG::GameCore::NihiluxElationUIType FBMPMJFCMEJ()
		{
			return ((::RPG::GameCore::NihiluxElationUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEONBAOLAA_FBMPMJFCMEJ_OFFSET))(this);
		}

	};
