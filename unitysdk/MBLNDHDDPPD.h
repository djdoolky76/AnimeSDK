#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MBLNDHDDPPD___c__DisplayClass18_0.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OPEJFIDCNPO;
namespace RPG::GameCore { class ComplexSkillAISource; }
namespace RPG::GameCore { class ComplexSkillAISourceRetarget; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBLNDHDDPPD_BHPIHNIIFBC_OFFSET UNITYSDK_OFFSET(0xB86A020)
#define MBLNDHDDPPD_BODMPFLCHAA_OFFSET UNITYSDK_OFFSET(0xB869ED0)
#define MBLNDHDDPPD_CCTOR_OFFSET UNITYSDK_OFFSET(0xB86B890)
#define MBLNDHDDPPD_CDCFKFILKGB_OFFSET UNITYSDK_OFFSET(0xB866990)
#define MBLNDHDDPPD_CHLIKEDBJHL_OFFSET UNITYSDK_OFFSET(0xB869C10)
#define MBLNDHDDPPD_DIFIJIJFAMO_OFFSET UNITYSDK_OFFSET(0xB865210)
#define MBLNDHDDPPD_DINJPIMMNIO_OFFSET UNITYSDK_OFFSET(0xB869750)
#define MBLNDHDDPPD_DJOLGGFPNEG_OFFSET UNITYSDK_OFFSET(0xB866670)
#define MBLNDHDDPPD_EIBIOBKMFCL_OFFSET UNITYSDK_OFFSET(0xB865410)
#define MBLNDHDDPPD_ENMDHLCIIGL_OFFSET UNITYSDK_OFFSET(0xB865080)
#define MBLNDHDDPPD_FICCDPFBNPO_OFFSET UNITYSDK_OFFSET(0xB866300)
#define MBLNDHDDPPD_GEFCOKPLENN_OFFSET UNITYSDK_OFFSET(0xB86A230)
#define MBLNDHDDPPD_GHPLCIHOJEG_OFFSET UNITYSDK_OFFSET(0xB869490)
#define MBLNDHDDPPD_GJECGFJHAGP_OFFSET UNITYSDK_OFFSET(0xB8679B0)
#define MBLNDHDDPPD_GMFIFJFMMMN_OFFSET UNITYSDK_OFFSET(0xB865850)
#define MBLNDHDDPPD_HFDGAIFNCFK_OFFSET UNITYSDK_OFFSET(0xB8690A0)
#define MBLNDHDDPPD_HIGHHDODCJA_OFFSET UNITYSDK_OFFSET(0xB86A340)
#define MBLNDHDDPPD_HMDKCDEGCDB_OFFSET UNITYSDK_OFFSET(0xB866200)
#define MBLNDHDDPPD_HNDKJBNDOPF_OFFSET UNITYSDK_OFFSET(0xB867290)
#define MBLNDHDDPPD_IBIENLNEEIP_OFFSET UNITYSDK_OFFSET(0xB865B40)
#define MBLNDHDDPPD_IPLIMKOLIPD_OFFSET UNITYSDK_OFFSET(0xB867A80)
#define MBLNDHDDPPD_JDHPKCCAAHI_OFFSET UNITYSDK_OFFSET(0xB865610)
#define MBLNDHDDPPD_KBIBDBCLPLH_OFFSET UNITYSDK_OFFSET(0xB869990)
#define MBLNDHDDPPD_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB864910)
#define MBLNDHDDPPD_KHJCDHJNEPB_OFFSET UNITYSDK_OFFSET(0xB865A30)
#define MBLNDHDDPPD_KJKJEFECNBD_OFFSET UNITYSDK_OFFSET(0xB868880)
#define MBLNDHDDPPD_KPKNMBPHAOE_OFFSET UNITYSDK_OFFSET(0xB866DB0)
#define MBLNDHDDPPD_LCKNBKPNHKB_OFFSET UNITYSDK_OFFSET(0xB864E50)
#define MBLNDHDDPPD_LEAPEANBIGF_OFFSET UNITYSDK_OFFSET(0xB869B30)
#define MBLNDHDDPPD_MAIENIMDBCB_OFFSET UNITYSDK_OFFSET(0xB866800)
#define MBLNDHDDPPD_MFBAIOHIHMP_OFFSET UNITYSDK_OFFSET(0xB868AE0)
#define MBLNDHDDPPD_NDALIJBOIHM_OFFSET UNITYSDK_OFFSET(0xB868D00)
#define MBLNDHDDPPD_NLDOLNCHJNJ_OFFSET UNITYSDK_OFFSET(0xB86B7B0)
#define MBLNDHDDPPD_NLHMPEIABGC_OFFSET UNITYSDK_OFFSET(0xB86A090)
#define MBLNDHDDPPD_ODHHDJDMNOI_OFFSET UNITYSDK_OFFSET(0xB86A540)
#define MBLNDHDDPPD_OHILBKIIBJL_OFFSET UNITYSDK_OFFSET(0xB867BF0)
#define MBLNDHDDPPD_OKDGIANHLHI_OFFSET UNITYSDK_OFFSET(0xB864B10)
#define MBLNDHDDPPD_PELAKCABCBM_OFFSET UNITYSDK_OFFSET(0xB868050)
#define MBLNDHDDPPD_PMDBABHICLI_OFFSET UNITYSDK_OFFSET(0xB867420)
#define MBLNDHDDPPD__EVALUATE_COMPLEXSKILLAICONTAINMODIFIERLAYER_G__GETLAYER_17_0_OFFSET UNITYSDK_OFFSET(0xB866D20)
#define MBLNDHDDPPD__EVALUATE_COMPLEXSKILLAISOURCEMODIFIERVALUE_G__GETMODIFIERVALUE_18_0_OFFSET UNITYSDK_OFFSET(0xB8670C0)

inline static constexpr unsigned int MBLNDHDDPPD_TypeDefinitionIndex = 54353;

	class MBLNDHDDPPD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_LAANOLJPOAM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "MBLNDHDDPPD")->GetStaticField(0x6E550);
		}

		static ::RPG::GameCore::TaskContext** StaticGet_BGPFIGKPKEJ()
		{
			return (::RPG::GameCore::TaskContext**)UnitySDK::FromName("", "MBLNDHDDPPD")->GetStaticField(0x6E558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBLNDHDDPPD_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::FixPoint KFGJEKJHIMB(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_KFGJEKJHIMB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint OKDGIANHLHI(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_OKDGIANHLHI_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint LCKNBKPNHKB(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_LCKNBKPNHKB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint ENMDHLCIIGL(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_ENMDHLCIIGL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint DIFIJIJFAMO(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_DIFIJIJFAMO_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint EIBIOBKMFCL(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_EIBIOBKMFCL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint JDHPKCCAAHI(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_JDHPKCCAAHI_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint GMFIFJFMMMN(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_GMFIFJFMMMN_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint KHJCDHJNEPB(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_KHJCDHJNEPB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint IBIENLNEEIP(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_IBIENLNEEIP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint HMDKCDEGCDB(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_HMDKCDEGCDB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint FICCDPFBNPO(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_FICCDPFBNPO_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint DJOLGGFPNEG(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_DJOLGGFPNEG_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint MAIENIMDBCB(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_MAIENIMDBCB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint CDCFKFILKGB(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_CDCFKFILKGB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint KPKNMBPHAOE(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_KPKNMBPHAOE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint HNDKJBNDOPF(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_HNDKJBNDOPF_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint PMDBABHICLI(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_PMDBABHICLI_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint GJECGFJHAGP(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_GJECGFJHAGP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint IPLIMKOLIPD(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_IPLIMKOLIPD_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint OHILBKIIBJL(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_OHILBKIIBJL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntityList* PELAKCABCBM(::RPG::GameCore::ComplexSkillAISourceRetarget* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::ComplexSkillAISourceRetarget*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_PELAKCABCBM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint KJKJEFECNBD(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_KJKJEFECNBD_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint MFBAIOHIHMP(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_MFBAIOHIHMP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint NDALIJBOIHM(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_NDALIJBOIHM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint HFDGAIFNCFK(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_HFDGAIFNCFK_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint GHPLCIHOJEG(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_GHPLCIHOJEG_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint DINJPIMMNIO(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_DINJPIMMNIO_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint KBIBDBCLPLH(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_KBIBDBCLPLH_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint LEAPEANBIGF(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_LEAPEANBIGF_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint CHLIKEDBJHL(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_CHLIKEDBJHL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint BODMPFLCHAA(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_BODMPFLCHAA_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint BHPIHNIIFBC(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_BHPIHNIIFBC_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint NLHMPEIABGC(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_NLHMPEIABGC_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint GEFCOKPLENN(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_GEFCOKPLENN_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint HIGHHDODCJA(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_HIGHHDODCJA_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint ODHHDJDMNOI(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_ODHHDJDMNOI_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint NLDOLNCHJNJ(::RPG::GameCore::ComplexSkillAISource* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAISource*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD_NLDOLNCHJNJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint _Evaluate_ComplexSkillAIContainModifierLayer_g__GetLayer_17_0(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD__EVALUATE_COMPLEXSKILLAICONTAINMODIFIERLAYER_G__GETLAYER_17_0_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint _Evaluate_ComplexSkillAISourceModifierValue_g__GetModifierValue_18_0(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::ModifierValueType a3, ::RPG::GameCore::NumOperationType a4, ::MBLNDHDDPPD___c__DisplayClass18_0 a5)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::ModifierValueType, ::RPG::GameCore::NumOperationType, ::MBLNDHDDPPD___c__DisplayClass18_0))((::PBYTE)hIl2Cpp + MBLNDHDDPPD__EVALUATE_COMPLEXSKILLAISOURCEMODIFIERVALUE_G__GETMODIFIERVALUE_18_0_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
