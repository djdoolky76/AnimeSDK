#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DILHPBMCOFK.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/ModifyType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersStatType.h"
#include "unitysdk/System/Object.h"
class BDPDNAECJII;
class BGGGFKNDEMJ;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKJPOPDBJCG_ABGJBFJCJPL_OFFSET UNITYSDK_OFFSET(0x1C6171B0)
#define GKJPOPDBJCG_ABJFLKCFPDI_OFFSET UNITYSDK_OFFSET(0x1C616AC0)
#define GKJPOPDBJCG_AGJBOFHGPDC_OFFSET UNITYSDK_OFFSET(0x1C617310)
#define GKJPOPDBJCG_ALJOPAPDDFB_OFFSET UNITYSDK_OFFSET(0x1C616690)
#define GKJPOPDBJCG_BNLFIDPDBNC_OFFSET UNITYSDK_OFFSET(0x1C6164C0)
#define GKJPOPDBJCG_CNHHIKILJJC_OFFSET UNITYSDK_OFFSET(0x1C616C60)
#define GKJPOPDBJCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C616130)
#define GKJPOPDBJCG_DBJGPPELDMC_OFFSET UNITYSDK_OFFSET(0x1C616340)
#define GKJPOPDBJCG_DCFIJDEJFED_OFFSET UNITYSDK_OFFSET(0x1C6169E0)
#define GKJPOPDBJCG_DFMHDOFAAFK_OFFSET UNITYSDK_OFFSET(0x1C616420)
#define GKJPOPDBJCG_DHFHKNNJMFG_OFFSET UNITYSDK_OFFSET(0x1C617890)
#define GKJPOPDBJCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C616240)
#define GKJPOPDBJCG_FIEHHKHBCPF_OFFSET UNITYSDK_OFFSET(0x1C617C80)
#define GKJPOPDBJCG_FNCGIJOMOMO_OFFSET UNITYSDK_OFFSET(0x1C617290)
#define GKJPOPDBJCG_FOKBAHBIJNL_OFFSET UNITYSDK_OFFSET(0x1C616BA0)
#define GKJPOPDBJCG_FPDIIJOFKLI_OFFSET UNITYSDK_OFFSET(0x1C617B50)
#define GKJPOPDBJCG_GIBDANECFMO_OFFSET UNITYSDK_OFFSET(0x1C616590)
#define GKJPOPDBJCG_HBFJHDCPLKI_OFFSET UNITYSDK_OFFSET(0x1C616700)
#define GKJPOPDBJCG_JLAHMHGGFPA_OFFSET UNITYSDK_OFFSET(0x1C6173E0)
#define GKJPOPDBJCG_LIBLBPIDIJG_OFFSET UNITYSDK_OFFSET(0x1C617530)
#define GKJPOPDBJCG_LMJMJAIPOBL_OFFSET UNITYSDK_OFFSET(0x1C616910)
#define GKJPOPDBJCG_MNLFCOJAKLG_OFFSET UNITYSDK_OFFSET(0x1C616620)
#define GKJPOPDBJCG_MPBAGGFLPDL_OFFSET UNITYSDK_OFFSET(0x1C616CD0)
#define GKJPOPDBJCG_OCPKKIMBMAD_OFFSET UNITYSDK_OFFSET(0x1C616B30)
#define GKJPOPDBJCG_OFLDFOPHEFL_OFFSET UNITYSDK_OFFSET(0x1C6167D0)
#define GKJPOPDBJCG_ONHNGCNCLPO_OFFSET UNITYSDK_OFFSET(0x1C616FB0)

inline static constexpr unsigned int GKJPOPDBJCG_TypeDefinitionIndex = 37127;

	class GKJPOPDBJCG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Collections::Generic::List_1<::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType>*>*>* HHBPPLLHAPL; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BGGGFKNDEMJ*>* IHIGOKFHKAB; // 0x18
		::BDPDNAECJII* NMNILJHPGOK; // 0x20
		::System::UInt32 NDDICDIMAJB; // 0x28
		::System::Void _ctor(::BDPDNAECJII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDPDNAECJII*))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_DISPOSE_OFFSET))(this);
		}

		::System::Void DBJGPPELDMC(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_DBJGPPELDMC_OFFSET))(this, a1, a2);
		}

		::System::Void GIBDANECFMO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_GIBDANECFMO_OFFSET))(this, a1);
		}

		::System::Void MNLFCOJAKLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_MNLFCOJAKLG_OFFSET))(this, a1);
		}

		::System::Void ALJOPAPDDFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_ALJOPAPDDFB_OFFSET))(this, a1);
		}

		::System::Void HBFJHDCPLKI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_HBFJHDCPLKI_OFFSET))(this, a1, a2);
		}

		::System::Void ABJFLKCFPDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_ABJFLKCFPDI_OFFSET))(this, a1);
		}

		::System::Void OCPKKIMBMAD(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_OCPKKIMBMAD_OFFSET))(this, a1, a2);
		}

		::System::Void FOKBAHBIJNL(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_FOKBAHBIJNL_OFFSET))(this, a1, a2);
		}

		::System::Void CNHHIKILJJC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_CNHHIKILJJC_OFFSET))(this, a1, a2);
		}

		::System::Void MPBAGGFLPDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_MPBAGGFLPDL_OFFSET))(this);
		}

		::System::Void ONHNGCNCLPO(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a1, ::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Action_2<::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType>*))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_ONHNGCNCLPO_OFFSET))(this, a1, a2);
		}

		::BGGGFKNDEMJ* OFLDFOPHEFL(::System::UInt32 a1)
		{
			return ((::BGGGFKNDEMJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_OFLDFOPHEFL_OFFSET))(this, a1);
		}

		::System::Int32 BNLFIDPDBNC(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_BNLFIDPDBNC_OFFSET))(this, a1, a2);
		}

		::System::Boolean ABGJBFJCJPL(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::System::Int32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_ABGJBFJCJPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FNCGIJOMOMO(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType, ::System::Int32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_FNCGIJOMOMO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 AGJBOFHGPDC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_AGJBOFHGPDC_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* JLAHMHGGFPA(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_JLAHMHGGFPA_OFFSET))(this, a1);
		}

		::System::Void LIBLBPIDIJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_LIBLBPIDIJG_OFFSET))(this);
		}

		::System::Void DHFHKNNJMFG(::System::UInt32 a1, ::DILHPBMCOFK a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DILHPBMCOFK, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_DHFHKNNJMFG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FPDIIJOFKLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_FPDIIJOFKLI_OFFSET))(this);
		}

		::System::Void DFMHDOFAAFK(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType, ::RPG::Client::LittleGameShare::TeamTowersCore::ModifyType, ::System::Int32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_DFMHDOFAAFK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FIEHHKHBCPF(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersStatType))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_FIEHHKHBCPF_OFFSET))(this, a1, a2);
		}

		::System::Int32 LMJMJAIPOBL(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_LMJMJAIPOBL_OFFSET))(this, a1);
		}

		::System::Int32 DCFIJDEJFED(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKJPOPDBJCG_DCFIJDEJFED_OFFSET))(this, a1);
		}

	};
