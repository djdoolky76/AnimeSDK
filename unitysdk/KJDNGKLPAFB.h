#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DistrictSoundUsage.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class KJDNGKLPAFB_KCOGDDBIELP;
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAreaSoundTransform; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define KJDNGKLPAFB_BANKHAGGMGL_OFFSET UNITYSDK_OFFSET(0x19F02F20)
#define KJDNGKLPAFB_CKBIFGJNBGH_OFFSET UNITYSDK_OFFSET(0x19F03F90)
#define KJDNGKLPAFB_CMLIBLLLGFB_OFFSET UNITYSDK_OFFSET(0x19F02B60)
#define KJDNGKLPAFB_CTOR_OFFSET UNITYSDK_OFFSET(0x19F02CC0)
#define KJDNGKLPAFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F02D70)
#define KJDNGKLPAFB_EHCLBEHBFFP_OFFSET UNITYSDK_OFFSET(0x19F02DE0)
#define KJDNGKLPAFB_EOHKPFLIEIN_OFFSET UNITYSDK_OFFSET(0x19F04200)
#define KJDNGKLPAFB_FGBANBBIAKO_OFFSET UNITYSDK_OFFSET(0x19F03580)
#define KJDNGKLPAFB_FHADOJHKHDI_OFFSET UNITYSDK_OFFSET(0x19F03430)
#define KJDNGKLPAFB_FPKCEFHPGAF_OFFSET UNITYSDK_OFFSET(0x19F038E0)
#define KJDNGKLPAFB_GET_DISTRICTNAME_OFFSET UNITYSDK_OFFSET(0x19F04220)
#define KJDNGKLPAFB_GET_ONCREATECONFIG_OFFSET UNITYSDK_OFFSET(0x19F04240)
#define KJDNGKLPAFB_HKNKOJPOGOP_OFFSET UNITYSDK_OFFSET(0x19F03A20)
#define KJDNGKLPAFB_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x19F02CD0)
#define KJDNGKLPAFB_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x19F02FC0)
#define KJDNGKLPAFB_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x19F03290)
#define KJDNGKLPAFB_PGFBODNPKEG_OFFSET UNITYSDK_OFFSET(0x19F03600)
#define KJDNGKLPAFB_PMAEOEDDLME_OFFSET UNITYSDK_OFFSET(0x19F04210)
#define KJDNGKLPAFB_SET_DISTRICTNAME_OFFSET UNITYSDK_OFFSET(0x19F04230)
#define KJDNGKLPAFB_SET_ONCREATECONFIG_OFFSET UNITYSDK_OFFSET(0x19F04250)
#define KJDNGKLPAFB_TICK_OFFSET UNITYSDK_OFFSET(0x19F032D0)

inline static constexpr unsigned int KJDNGKLPAFB_TypeDefinitionIndex = 58461;

	class KJDNGKLPAFB : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::GameEntity* BOMFAKPMHMI; // 0x18
		::System::String* _DistrictName_k__BackingField; // 0x20
		::RPG::Client::MapDistrictDef* IGDOPMDPNEL; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* _OnCreateConfig_k__BackingField; // 0x30
		::KJDNGKLPAFB_KCOGDDBIELP* LOACOFGEFMG; // 0x38
		::System::Boolean FMCHJKDPJDE; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_CTOR_OFFSET))(this);
		}

		static ::KJDNGKLPAFB_KCOGDDBIELP* CMLIBLLLGFB(::RPG::GameCore::DistrictSoundUsage a1)
		{
			return ((::KJDNGKLPAFB_KCOGDDBIELP*(*)(::RPG::GameCore::DistrictSoundUsage))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_CMLIBLLLGFB_OFFSET))(a1);
		}

		::System::Void LMCEDCHJKFF(::RPG::Client::MapDistrictDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_DISPOSE_OFFSET))(this);
		}

		::System::Void BANKHAGGMGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_BANKHAGGMGL_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_TICK_OFFSET))(this, a1);
		}

		::System::Void FHADOJHKHDI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_FHADOJHKHDI_OFFSET))(this, a1);
		}

		::System::Void EHCLBEHBFFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_EHCLBEHBFFP_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* FGBANBBIAKO()
		{
			return ((::Il2CppArray<::RPG::GameCore::AudioStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_FGBANBBIAKO_OFFSET))(this);
		}

		::System::Void PGFBODNPKEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_PGFBODNPKEG_OFFSET))(this);
		}

		::System::Void FPKCEFHPGAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_FPKCEFHPGAF_OFFSET))(this);
		}

		::System::Void HKNKOJPOGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_HKNKOJPOGOP_OFFSET))(this);
		}

		::System::Void CKBIFGJNBGH(::Il2CppArray<::RPG::GameCore::DistrictAreaSoundTransform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DistrictAreaSoundTransform*>*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_CKBIFGJNBGH_OFFSET))(this, a1);
		}

		::System::Boolean EOHKPFLIEIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_EOHKPFLIEIN_OFFSET))(this);
		}

		::RPG::Client::MapDistrictDef* PMAEOEDDLME()
		{
			return ((::RPG::Client::MapDistrictDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_PMAEOEDDLME_OFFSET))(this);
		}

		::System::String* get_DistrictName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_GET_DISTRICTNAME_OFFSET))(this);
		}

		::System::Void set_DistrictName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_SET_DISTRICTNAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::TaskConfig*>* get_OnCreateConfig()
		{
			return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_GET_ONCREATECONFIG_OFFSET))(this);
		}

		::System::Void set_OnCreateConfig(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_SET_ONCREATECONFIG_OFFSET))(this, a1);
		}

	};
