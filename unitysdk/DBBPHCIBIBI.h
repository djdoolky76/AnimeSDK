#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_TargetCatType.h"
#include "unitysdk/RPG/GameCore/CakeRaceAbilityName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
class DBBPHCIBIBI;
class DFEAHIKPKLO;
class EMNNNCHNPKP;
class IFBFJDCECML;
class ILEPJCLBBJD;
class KIGLHBEPNOG;
class LBGIDBFBHEF;
class OBFFJCJNNBM;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBBPHCIBIBI_AGMFJJEGBKJ_OFFSET UNITYSDK_OFFSET(0x1D75AFD0)
#define DBBPHCIBIBI_BCJEBBLAKLD_OFFSET UNITYSDK_OFFSET(0x1D75BDA0)
#define DBBPHCIBIBI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1D75A470)
#define DBBPHCIBIBI_CEFLHOEMNLM_OFFSET UNITYSDK_OFFSET(0x1D75C0B0)
#define DBBPHCIBIBI_CHHKOBPMMEO_OFFSET UNITYSDK_OFFSET(0x1D75B040)
#define DBBPHCIBIBI_CMOKMCLNNBN_OFFSET UNITYSDK_OFFSET(0x1D75C100)
#define DBBPHCIBIBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D75A4F0)
#define DBBPHCIBIBI_DAGILKMAOGD_OFFSET UNITYSDK_OFFSET(0x1D75ADF0)
#define DBBPHCIBIBI_DBFGNCEOIKB_OFFSET UNITYSDK_OFFSET(0x1D75C5D0)
#define DBBPHCIBIBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D75A790)
#define DBBPHCIBIBI_EKEGADAAAOA_OFFSET UNITYSDK_OFFSET(0x1D75BE80)
#define DBBPHCIBIBI_FEKOOCEGGAA_OFFSET UNITYSDK_OFFSET(0x1D75C6D0)
#define DBBPHCIBIBI_FJFELGKOPLM_OFFSET UNITYSDK_OFFSET(0x1D75C150)
#define DBBPHCIBIBI_GET_CURABILITY_OFFSET UNITYSDK_OFFSET(0x1D75C9B0)
#define DBBPHCIBIBI_IBAOCJOLDCB_OFFSET UNITYSDK_OFFSET(0x1D75A7D0)
#define DBBPHCIBIBI_IFEOBMLPFGM_OFFSET UNITYSDK_OFFSET(0x1D75C060)
#define DBBPHCIBIBI_IMIHKIKHJAN_OFFSET UNITYSDK_OFFSET(0x1D75A460)
#define DBBPHCIBIBI_IPDPACJFGBN_OFFSET UNITYSDK_OFFSET(0x1D75BD30)
#define DBBPHCIBIBI_JIANHIADOAL_OFFSET UNITYSDK_OFFSET(0x1D75B8B0)
#define DBBPHCIBIBI_JOJOHLCKKHA_OFFSET UNITYSDK_OFFSET(0x1D75C010)
#define DBBPHCIBIBI_KIHONCGLDJI_OFFSET UNITYSDK_OFFSET(0x1D75AA90)
#define DBBPHCIBIBI_MNLFABPDPMB_OFFSET UNITYSDK_OFFSET(0x1D75BA10)
#define DBBPHCIBIBI_MODOFLPHKBF_OFFSET UNITYSDK_OFFSET(0x1D75A680)
#define DBBPHCIBIBI_MOEFILKJPFL_OFFSET UNITYSDK_OFFSET(0x1D75B730)
#define DBBPHCIBIBI_NLEGLBFLLHF_OFFSET UNITYSDK_OFFSET(0x1D75ACE0)
#define DBBPHCIBIBI_PFGAHFNLFDH_OFFSET UNITYSDK_OFFSET(0x1D75B820)
#define DBBPHCIBIBI_PHFBEDDKDFC_OFFSET UNITYSDK_OFFSET(0x1D75AEE0)
#define DBBPHCIBIBI_SET_CURABILITY_OFFSET UNITYSDK_OFFSET(0x1D75C9C0)

inline static constexpr unsigned int DBBPHCIBIBI_TypeDefinitionIndex = 38210;

	class DBBPHCIBIBI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KIGLHBEPNOG*>* LBFDCDHJKMD; // 0x10
		::System::Collections::Generic::List_1<::OBFFJCJNNBM*>* JEBMLLJFKPE; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* KOMAFKMBEDH; // 0x20
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x28
		::KIGLHBEPNOG* _CurAbility_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MMCPPLPCGJH; // 0x38
		::System::Boolean KBKJMKKAOBA; // 0x40
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KIGLHBEPNOG*>* IMIHKIKHJAN()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KIGLHBEPNOG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_IMIHKIKHJAN_OFFSET))(this);
		}

		static ::DBBPHCIBIBI* BPLPBPMEODA(::PBGNKMMDBGD* a1)
		{
			return ((::DBBPHCIBIBI*(*)(::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_BPLPBPMEODA_OFFSET))(a1);
		}

		::KIGLHBEPNOG* MODOFLPHKBF(::System::Int32 a1, ::RPG::GameCore::CakeRaceAbilityName a2)
		{
			return ((::KIGLHBEPNOG*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceAbilityName))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_MODOFLPHKBF_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_DISPOSE_OFFSET))(this);
		}

		::System::Void IBAOCJOLDCB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_IBAOCJOLDCB_OFFSET))(this, a1);
		}

		::System::Void KIHONCGLDJI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_KIHONCGLDJI_OFFSET))(this, a1);
		}

		::System::Void NLEGLBFLLHF(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::LBGIDBFBHEF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_NLEGLBFLLHF_OFFSET))(this, a1, a2, a3);
		}

		::KIGLHBEPNOG* DAGILKMAOGD(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::LBGIDBFBHEF* a3)
		{
			return ((::KIGLHBEPNOG*(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_DAGILKMAOGD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PHFBEDDKDFC(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::LBGIDBFBHEF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_PHFBEDDKDFC_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean AGMFJJEGBKJ(::RPG::GameCore::CakeRaceAbilityConfig* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceAbilityConfig*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_AGMFJJEGBKJ_OFFSET))(a1);
		}

		::RPG::Client::LittleGameShare::MsgRetcode CHHKOBPMMEO(::System::UInt32 a1, ::EMNNNCHNPKP* a2, ::ILEPJCLBBJD* a3)
		{
			return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::EMNNNCHNPKP*, ::ILEPJCLBBJD*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_CHHKOBPMMEO_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 PFGAHFNLFDH(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_PFGAHFNLFDH_OFFSET))(this, a1);
		}

		::IFBFJDCECML* JIANHIADOAL(::RPG::Client::LittleGameShare::ST_TargetCatType a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::RPG::Client::LittleGameShare::ST_TargetCatType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_JIANHIADOAL_OFFSET))(this, a1, a2, a3);
		}

		::DFEAHIKPKLO* MNLFABPDPMB(::System::UInt32 a1)
		{
			return ((::DFEAHIKPKLO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_MNLFABPDPMB_OFFSET))(this, a1);
		}

		::System::Void IPDPACJFGBN(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_IPDPACJFGBN_OFFSET))(this, a1, a2);
		}

		::System::Boolean MOEFILKJPFL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_MOEFILKJPFL_OFFSET))(this, a1);
		}

		::System::Void BCJEBBLAKLD(::OBFFJCJNNBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBFFJCJNNBM*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_BCJEBBLAKLD_OFFSET))(this, a1);
		}

		::System::Void EKEGADAAAOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_EKEGADAAAOA_OFFSET))(this);
		}

		::System::Void JOJOHLCKKHA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_JOJOHLCKKHA_OFFSET))(this, a1);
		}

		::System::Void IFEOBMLPFGM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_IFEOBMLPFGM_OFFSET))(this, a1);
		}

		::System::Void CEFLHOEMNLM(::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_CEFLHOEMNLM_OFFSET))(this, a1);
		}

		::System::Void CMOKMCLNNBN(::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_CMOKMCLNNBN_OFFSET))(this, a1);
		}

		::System::Void FJFELGKOPLM(::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_FJFELGKOPLM_OFFSET))(this, a1);
		}

		::System::Void DBFGNCEOIKB(::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_DBFGNCEOIKB_OFFSET))(this, a1);
		}

		::System::Void FEKOOCEGGAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_FEKOOCEGGAA_OFFSET))(this);
		}

		::KIGLHBEPNOG* get_CurAbility()
		{
			return ((::KIGLHBEPNOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_GET_CURABILITY_OFFSET))(this);
		}

		::System::Void set_CurAbility(::KIGLHBEPNOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIGLHBEPNOG*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI_SET_CURABILITY_OFFSET))(this, a1);
		}

	};
