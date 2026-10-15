#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"
class NEOCEOCDEAF;
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class EnvironmentSystemV1; }
namespace System { class Action; }

#define PDCIOBGIPJO_CPHMIFCOCLJ_OFFSET UNITYSDK_OFFSET(0xC004CF0)
#define PDCIOBGIPJO_CTOR_OFFSET UNITYSDK_OFFSET(0xC005380)
#define PDCIOBGIPJO_DAINANEFMCH_OFFSET UNITYSDK_OFFSET(0xC004BA0)
#define PDCIOBGIPJO_GAPIFFAMMCM_OFFSET UNITYSDK_OFFSET(0xC004D50)
#define PDCIOBGIPJO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC004B20)
#define PDCIOBGIPJO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC004EE0)
#define PDCIOBGIPJO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC004A00)
#define PDCIOBGIPJO_OGFLGOMNJMI_OFFSET UNITYSDK_OFFSET(0xC004C60)
#define PDCIOBGIPJO_PDAJGHDKMJD_OFFSET UNITYSDK_OFFSET(0xC004E00)

inline static constexpr unsigned int PDCIOBGIPJO_TypeDefinitionIndex = 69763;

	class PDCIOBGIPJO : public ::System::Object
	{
	public:
		::System::Action* FEBMANBKLPP; // 0x10
		::EnviromentSystem::EnviromentProfile* HPOBPDGDONL; // 0x18
		::RPG::Client::EnvironmentSystemV1* OCFNGNEFLDI; // 0x20
		::EnviromentSystem::EnviromentProfile* JDIIAGNIJBA; // 0x28
		::NEOCEOCDEAF* HAMNGPKNJLI; // 0x30
		::System::Int32 FNGCCGFFMOH; // 0x38
		::RPG::GameCore::EnviromentControlPriority MNMMMFDIHOB; // 0x3C
		::System::Boolean ALMEAKBOGKH; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single JPDCALANOOA; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCIOBGIPJO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::EnvironmentSystemV1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvironmentSystemV1*))((::PBYTE)hIl2Cpp + PDCIOBGIPJO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCIOBGIPJO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void DAINANEFMCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCIOBGIPJO_DAINANEFMCH_OFFSET))(this);
		}

		::System::Void OGFLGOMNJMI(::RPG::GameCore::EnviromentControlPriority a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Single))((::PBYTE)hIl2Cpp + PDCIOBGIPJO_OGFLGOMNJMI_OFFSET))(this, a1, a2);
		}

		::System::Boolean CPHMIFCOCLJ(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + PDCIOBGIPJO_CPHMIFCOCLJ_OFFSET))(this, a1);
		}

		::System::Void GAPIFFAMMCM(::EnviromentSystem::EnviromentProfile* a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::Single, ::RPG::GameCore::EnviromentControlPriority, ::System::Action*))((::PBYTE)hIl2Cpp + PDCIOBGIPJO_GAPIFFAMMCM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDCIOBGIPJO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PDAJGHDKMJD(::EnviromentSystem::EnviromentProfile* a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::Single, ::RPG::GameCore::EnviromentControlPriority, ::System::Action*))((::PBYTE)hIl2Cpp + PDCIOBGIPJO_PDAJGHDKMJD_OFFSET))(this, a1, a2, a3, a4);
		}

	};
