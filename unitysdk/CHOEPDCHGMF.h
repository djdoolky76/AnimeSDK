#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/EAlertState.h"
#include "unitysdk/RPG/GameCore/PauseAlertValueDecreaseReason.h"
#include "unitysdk/RPG/GameCore/SwitchAlertValueModulePriority.h"
#include "unitysdk/System/Object.h"
class BACCOPOCMPC;
class BBICCJAGCDL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }

#define CHOEPDCHGMF_ACFCAIPLLDI_OFFSET UNITYSDK_OFFSET(0xCF62010)
#define CHOEPDCHGMF_BFGOKNDBAIB_OFFSET UNITYSDK_OFFSET(0xCF63450)
#define CHOEPDCHGMF_BKDBDFGDBLE_OFFSET UNITYSDK_OFFSET(0xCF62610)
#define CHOEPDCHGMF_BKFIKOIIEPA_OFFSET UNITYSDK_OFFSET(0xCF63460)
#define CHOEPDCHGMF_BOMEFBJBKAE_OFFSET UNITYSDK_OFFSET(0xCF634B0)
#define CHOEPDCHGMF_BPHLAFFEJHC_OFFSET UNITYSDK_OFFSET(0xCF62870)
#define CHOEPDCHGMF_CBLICGGLHCL_OFFSET UNITYSDK_OFFSET(0xCF634E0)
#define CHOEPDCHGMF_CIKLJHMLFCE_OFFSET UNITYSDK_OFFSET(0xCF61AC0)
#define CHOEPDCHGMF_COFJCJMMPEG_OFFSET UNITYSDK_OFFSET(0xCF62B50)
#define CHOEPDCHGMF_CTOR_OFFSET UNITYSDK_OFFSET(0xCF63560)
#define CHOEPDCHGMF_DGEJFMBHEOO_OFFSET UNITYSDK_OFFSET(0xCF62A00)
#define CHOEPDCHGMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF61840)
#define CHOEPDCHGMF_DOKIICDOKKN_OFFSET UNITYSDK_OFFSET(0xCF49EF0)
#define CHOEPDCHGMF_EEPIDOFNPHO_OFFSET UNITYSDK_OFFSET(0xCF62670)
#define CHOEPDCHGMF_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xCF622A0)
#define CHOEPDCHGMF_EPGCNMNFONM_OFFSET UNITYSDK_OFFSET(0xCF623D0)
#define CHOEPDCHGMF_GDDPOEJHPKB_OFFSET UNITYSDK_OFFSET(0xCF618A0)
#define CHOEPDCHGMF_HECJIAKJNHO_OFFSET UNITYSDK_OFFSET(0xCF63270)
#define CHOEPDCHGMF_HPNKDJDJMLN_OFFSET UNITYSDK_OFFSET(0xCF62A60)
#define CHOEPDCHGMF_IKKNGBOIAEL_OFFSET UNITYSDK_OFFSET(0xCF62350)
#define CHOEPDCHGMF_IMIKHJABCAN_OFFSET UNITYSDK_OFFSET(0xCF634C0)
#define CHOEPDCHGMF_JBHKLIJDGIF_OFFSET UNITYSDK_OFFSET(0xCF63280)
#define CHOEPDCHGMF_JFFBCLCNBKJ_OFFSET UNITYSDK_OFFSET(0xCF61A60)
#define CHOEPDCHGMF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCF61D40)
#define CHOEPDCHGMF_JLFFPFANGGA_OFFSET UNITYSDK_OFFSET(0xCF62990)
#define CHOEPDCHGMF_KGBGAHOBBAI_OFFSET UNITYSDK_OFFSET(0xCF634D0)
#define CHOEPDCHGMF_KHMOOBLFCFI_OFFSET UNITYSDK_OFFSET(0xCF626D0)
#define CHOEPDCHGMF_KINGBIFPCMD_OFFSET UNITYSDK_OFFSET(0xCF62520)
#define CHOEPDCHGMF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF61990)
#define CHOEPDCHGMF_LBHPLJENKPO_OFFSET UNITYSDK_OFFSET(0xCF62300)
#define CHOEPDCHGMF_LHLAKNMCGBF_OFFSET UNITYSDK_OFFSET(0xCF62200)
#define CHOEPDCHGMF_MBDIJNDCEOE_OFFSET UNITYSDK_OFFSET(0xCF61DC0)
#define CHOEPDCHGMF_MDHOADBCCJF_OFFSET UNITYSDK_OFFSET(0xCF634A0)
#define CHOEPDCHGMF_MEFDKFNIKDD_OFFSET UNITYSDK_OFFSET(0xCF63260)
#define CHOEPDCHGMF_MOIHNBOMOCC_OFFSET UNITYSDK_OFFSET(0xCF63470)
#define CHOEPDCHGMF_NFCEDBBOLME_OFFSET UNITYSDK_OFFSET(0xCF63480)
#define CHOEPDCHGMF_NKHLMJGGKEM_OFFSET UNITYSDK_OFFSET(0xCF62250)
#define CHOEPDCHGMF_NOCNDHEKCGJ_OFFSET UNITYSDK_OFFSET(0xCF62760)
#define CHOEPDCHGMF_OHCCOHGCMFD_OFFSET UNITYSDK_OFFSET(0xCF63490)
#define CHOEPDCHGMF_PIJFCPIBNDI_OFFSET UNITYSDK_OFFSET(0xCF63350)
#define CHOEPDCHGMF_PNBOGEOGBPF_OFFSET UNITYSDK_OFFSET(0xCF62930)

	class CHOEPDCHGMF : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x10
		::RPG::GameCore::NPCComponent* ALIPFEDNPAM; // 0x18
		::BBICCJAGCDL* OJJNOPDPEFA; // 0x20
		::BACCOPOCMPC* FCOLPIMPNON; // 0x28
		::RPG::GameCore::AdventureCharacterController* DJFMDJHOAJO; // 0x30
		::Il2CppArray<::System::Single>* JCGHMJBJCEF; // 0x38
		::System::Single GPABHNBAKKB; // 0x40
		::RPG::GameCore::EAlertState DLNIGFGLPLJ; // 0x44
		::System::Single AIKAPJELHNK; // 0x48
		::System::Boolean FACMGPBIBIB; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Single FCNHHFDCBPH; // 0x50
		::System::Single KLIBBEHGEAB; // 0x54
		::System::Single KJEJJIEONAJ; // 0x58
		::System::Single MLKBADHIDIJ; // 0x5C
		::System::Int32 IIBBDAOMONA; // 0x60
		// static const ::System::Object JKCAPIFCBJC; // 0x0
		// static const ::System::Object NLINLPINECG; // 0x0
		// static const ::System::Object MHBGBHGDBJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_DISPOSE_OFFSET))(this);
		}

		::System::Void GDDPOEJHPKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_GDDPOEJHPKB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JFFBCLCNBKJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_JFFBCLCNBKJ_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void LHLAKNMCGBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_LHLAKNMCGBF_OFFSET))(this);
		}

		::System::Void NKHLMJGGKEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_NKHLMJGGKEM_OFFSET))(this);
		}

		::System::Void DOKIICDOKKN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_DOKIICDOKKN_OFFSET))(this, a1);
		}

		::System::Void EGFCFCBHJJP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Void MBDIJNDCEOE(::RPG::GameCore::SwitchAlertValueModulePriority a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchAlertValueModulePriority, ::System::Boolean))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_MBDIJNDCEOE_OFFSET))(this, a1, a2);
		}

		::System::Void ACFCAIPLLDI(::RPG::GameCore::SwitchAlertValueModulePriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchAlertValueModulePriority))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_ACFCAIPLLDI_OFFSET))(this, a1);
		}

		::System::Void EPGCNMNFONM(::RPG::GameCore::AdventureBehaviorClampAlertLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureBehaviorClampAlertLevel))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_EPGCNMNFONM_OFFSET))(this, a1);
		}

		::System::Void KINGBIFPCMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_KINGBIFPCMD_OFFSET))(this);
		}

		::System::Void EEPIDOFNPHO(::System::Boolean a1, ::RPG::GameCore::PauseAlertValueDecreaseReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::PauseAlertValueDecreaseReason))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_EEPIDOFNPHO_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHMOOBLFCFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_KHMOOBLFCFI_OFFSET))(this);
		}

		::System::Single NOCNDHEKCGJ(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_NOCNDHEKCGJ_OFFSET))(this, a1);
		}

		::System::Single IKKNGBOIAEL(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_IKKNGBOIAEL_OFFSET))(this, a1);
		}

		::System::Boolean PNBOGEOGBPF(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_PNBOGEOGBPF_OFFSET))(this, a1);
		}

		::System::Boolean JLFFPFANGGA(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_JLFFPFANGGA_OFFSET))(this, a1);
		}

		::System::Boolean DGEJFMBHEOO(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_DGEJFMBHEOO_OFFSET))(this, a1);
		}

		::RPG::GameCore::EAlertState HPNKDJDJMLN(::System::Single a1)
		{
			return ((::RPG::GameCore::EAlertState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_HPNKDJDJMLN_OFFSET))(this, a1);
		}

		::System::Void COFJCJMMPEG(::RPG::GameCore::EAlertState a1, ::RPG::GameCore::EAlertState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EAlertState, ::RPG::GameCore::EAlertState))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_COFJCJMMPEG_OFFSET))(this, a1, a2);
		}

		::System::Single MEFDKFNIKDD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_MEFDKFNIKDD_OFFSET))(this);
		}

		::System::Void CIKLJHMLFCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_CIKLJHMLFCE_OFFSET))(this, a1);
		}

		::System::Single HECJIAKJNHO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_HECJIAKJNHO_OFFSET))(this);
		}

		::System::Void JBHKLIJDGIF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_JBHKLIJDGIF_OFFSET))(this, a1);
		}

		::System::Single BKDBDFGDBLE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_BKDBDFGDBLE_OFFSET))(this);
		}

		::System::Void PIJFCPIBNDI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_PIJFCPIBNDI_OFFSET))(this, a1);
		}

		::System::Single BFGOKNDBAIB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_BFGOKNDBAIB_OFFSET))(this);
		}

		::System::Void BKFIKOIIEPA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_BKFIKOIIEPA_OFFSET))(this, a1);
		}

		::System::Single MOIHNBOMOCC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_MOIHNBOMOCC_OFFSET))(this);
		}

		::System::Void NFCEDBBOLME(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_NFCEDBBOLME_OFFSET))(this, a1);
		}

		::System::Single OHCCOHGCMFD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_OHCCOHGCMFD_OFFSET))(this);
		}

		::System::Void MDHOADBCCJF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_MDHOADBCCJF_OFFSET))(this, a1);
		}

		::System::Single BOMEFBJBKAE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_BOMEFBJBKAE_OFFSET))(this);
		}

		::System::Void IMIKHJABCAN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_IMIKHJABCAN_OFFSET))(this, a1);
		}

		::System::Boolean LBHPLJENKPO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_LBHPLJENKPO_OFFSET))(this);
		}

		::RPG::GameCore::EAlertState KGBGAHOBBAI()
		{
			return ((::RPG::GameCore::EAlertState(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_KGBGAHOBBAI_OFFSET))(this);
		}

		::System::Single CBLICGGLHCL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_CBLICGGLHCL_OFFSET))(this);
		}

		::System::Single BPHLAFFEJHC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEPDCHGMF_BPHLAFFEJHC_OFFSET))(this);
		}

	};
