#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/RPG/GameCore/RtSkillUseResult.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/OKIBEPMJGMH.h"
class BAJEFKOPOPL;
class CBDMDNJMLIH;
class CJJMHCJPHLN;
class FGMHNMKDFMA;
class FOAKMDKBOJJ;
class GELIALJDFBL;
class KFBLAAJJHKF;
class MJNGFEGNCOA;
class ODHMHHGKCJP;
class OIKDEOMMOAM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace RPG::GameCore { class RtSkillTargetInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CENEFPOMFKG_ALHHOJIAEKK_OFFSET UNITYSDK_OFFSET(0xC9EAD40)
#define CENEFPOMFKG_AMDHNMCLEOL_OFFSET UNITYSDK_OFFSET(0xC9EB680)
#define CENEFPOMFKG_BFKNLNNEMDG_OFFSET UNITYSDK_OFFSET(0xC9E9E50)
#define CENEFPOMFKG_BGBBFBKLDLN_OFFSET UNITYSDK_OFFSET(0xC9EB9A0)
#define CENEFPOMFKG_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xC9EC380)
#define CENEFPOMFKG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9E7650)
#define CENEFPOMFKG_CDLDPAPPGDG_OFFSET UNITYSDK_OFFSET(0xC9EB7E0)
#define CENEFPOMFKG_CLEIBFKCDIE_OFFSET UNITYSDK_OFFSET(0xC9E7E50)
#define CENEFPOMFKG_CTOR_OFFSET UNITYSDK_OFFSET(0xC9EC470)
#define CENEFPOMFKG_DGGDINMOBJL_OFFSET UNITYSDK_OFFSET(0xC9EA0D0)
#define CENEFPOMFKG_DGGDKFAJDMD_OFFSET UNITYSDK_OFFSET(0xC9EA8D0)
#define CENEFPOMFKG_DISPATCHPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xC9E83E0)
#define CENEFPOMFKG_DMJLKOMFPMN_OFFSET UNITYSDK_OFFSET(0xC9E8250)
#define CENEFPOMFKG_EOCEBINGJME_OFFSET UNITYSDK_OFFSET(0xC9E80F0)
#define CENEFPOMFKG_FJNEAEDLDCC_OFFSET UNITYSDK_OFFSET(0xC9EC1F0)
#define CENEFPOMFKG_GET_DESCTABLE_OFFSET UNITYSDK_OFFSET(0xC9E8BF0)
#define CENEFPOMFKG_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xC9E8BC0)
#define CENEFPOMFKG_GET_PROPERTYTABLE_OFFSET UNITYSDK_OFFSET(0xC9E8BE0)
#define CENEFPOMFKG_GNAONOEIIOA_OFFSET UNITYSDK_OFFSET(0xC9E8FF0)
#define CENEFPOMFKG_GOJKMHGHOHL_OFFSET UNITYSDK_OFFSET(0xC9EA030)
#define CENEFPOMFKG_GPPBGEFAHAL_OFFSET UNITYSDK_OFFSET(0xC9EC3F0)
#define CENEFPOMFKG_HEGNDMHLBGN_OFFSET UNITYSDK_OFFSET(0xC9EC190)
#define CENEFPOMFKG_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0xC9E9370)
#define CENEFPOMFKG_HJFPBIFDMOD_OFFSET UNITYSDK_OFFSET(0xC9E7AF0)
#define CENEFPOMFKG_HKHIIPEANFD_OFFSET UNITYSDK_OFFSET(0xC9EB550)
#define CENEFPOMFKG_IBHFEFJHGEB_OFFSET UNITYSDK_OFFSET(0xC9EC310)
#define CENEFPOMFKG_IHCFFNABEMK_OFFSET UNITYSDK_OFFSET(0xC9E7F90)
#define CENEFPOMFKG_IMJKBDAHKKP_OFFSET UNITYSDK_OFFSET(0xC9EC3E0)
#define CENEFPOMFKG_JAMGMILLBIJ_OFFSET UNITYSDK_OFFSET(0xC9EAA10)
#define CENEFPOMFKG_JBJABNLLLPH_OFFSET UNITYSDK_OFFSET(0xC9E9800)
#define CENEFPOMFKG_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xC9E9180)
#define CENEFPOMFKG_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xC9E9430)
#define CENEFPOMFKG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC9E8C50)
#define CENEFPOMFKG_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xC9E7A70)
#define CENEFPOMFKG_OCNHKBKEOAI_OFFSET UNITYSDK_OFFSET(0xC9EC390)
#define CENEFPOMFKG_PBLOPPPDMEB_OFFSET UNITYSDK_OFFSET(0xC9EA810)
#define CENEFPOMFKG_PIPNFFHALNI_OFFSET UNITYSDK_OFFSET(0xC9E8430)
#define CENEFPOMFKG_PNFMOCAOABJ_OFFSET UNITYSDK_OFFSET(0xC9E9FC0)
#define CENEFPOMFKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC9EB940)

inline static constexpr unsigned int CENEFPOMFKG_TypeDefinitionIndex = 54057;

	class CENEFPOMFKG : public ::System::Object
	{
	public:
		::GELIALJDFBL* DJHOAONPLLH; // 0x10
		::KFBLAAJJHKF* IMFHKMBAOKN; // 0x18
		::BAJEFKOPOPL* HKAGAPCAJDE; // 0x20
		::Il2CppArray<::ODHMHHGKCJP*>* KGLOIHNOFCM; // 0x28
		::GELIALJDFBL* CJEBNGMMHII; // 0x30
		::System::Action* EDCMBLLIICC; // 0x38
		::CJJMHCJPHLN* PHEKPAADNKB; // 0x40
		::FGMHNMKDFMA* CIFJFKPIJMN; // 0x48
		::System::String* OENAMINOLLF; // 0x50
		::Il2CppArray<::System::String*>* JCJODLLDMLK; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ILIPCNCIPBB; // 0x60
		::RPG::GameCore::GameEntity* CNONKDPOJLC; // 0x68
		::RPG::GameCore::GameEntity* DJEDKEGDJGE; // 0x70
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KGKEPIJIABL; // 0x78
		::RPG::GameCore::RtSkillConfig* EABKOHGCHFP; // 0x80
		::RPG::GameCore::SkillEffect KOMCEJDJIIL; // 0x88
		::RPG::GameCore::RtSkillState DLNIGFGLPLJ; // 0x8C
		::System::Int32 KBAPBCNJHDB; // 0x90
		::RPG::GameCore::AttackType HIFKEKCELFB; // 0x94
		::RPG::GameCore::FixVec3 MKGKHBCAFLL; // 0x98
		::RPG::GameCore::FixPoint PMFOPBEEDBI; // 0xB0
		static ::RPG::GameCore::RtSkillTargetInfo** StaticGet_NIANAMPHOJJ()
		{
			return (::RPG::GameCore::RtSkillTargetInfo**)UnitySDK::FromName("", "CENEFPOMFKG")->GetStaticField(0x1B780);
		}

		static ::FOAKMDKBOJJ** StaticGet_LHDBBDDLCJB()
		{
			return (::FOAKMDKBOJJ**)UnitySDK::FromName("", "CENEFPOMFKG")->GetStaticField(0x1B788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CENEFPOMFKG_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtSkillPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + CENEFPOMFKG_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		::System::Void HJFPBIFDMOD(::RPG::GameCore::RtSkillPropertyType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3, ::HJIOMFDJLLA a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + CENEFPOMFKG_HJFPBIFDMOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CLEIBFKCDIE(::RPG::GameCore::RtSkillPropertyType a1, ::RPG::GameCore::FixPoint a2, ::HJIOMFDJLLA a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + CENEFPOMFKG_CLEIBFKCDIE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 IHCFFNABEMK(::RPG::GameCore::RtSkillPropertyType a1, ::RPG::GameCore::FixPoint a2, ::HJIOMFDJLLA a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + CENEFPOMFKG_IHCFFNABEMK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EOCEBINGJME(::RPG::GameCore::RtSkillPropertyType a1, ::System::Int32 a2, ::HJIOMFDJLLA a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::System::Int32, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + CENEFPOMFKG_EOCEBINGJME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DMJLKOMFPMN(::RPG::GameCore::RtSkillPropertyType a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3, ::HJIOMFDJLLA a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillPropertyType, ::System::Int32, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + CENEFPOMFKG_DMJLKOMFPMN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DispatchPropertyChange(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + CENEFPOMFKG_DISPATCHPROPERTYCHANGE_OFFSET))(this, a1);
		}

		::System::Void PIPNFFHALNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_PIPNFFHALNI_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_GET_OWNERENTITY_OFFSET))(this);
		}

		::Il2CppArray<::ODHMHHGKCJP*>* get_PropertyTable()
		{
			return ((::Il2CppArray<::ODHMHHGKCJP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_GET_PROPERTYTABLE_OFFSET))(this);
		}

		::FOAKMDKBOJJ* get_DescTable()
		{
			return ((::FOAKMDKBOJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_GET_DESCTABLE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1, ::BAJEFKOPOPL* a2, ::KFBLAAJJHKF* a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BAJEFKOPOPL*, ::KFBLAAJJHKF*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CENEFPOMFKG_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + CENEFPOMFKG_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void BFKNLNNEMDG(::OKIBEPMJGMH a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKIBEPMJGMH))((::PBYTE)hIl2Cpp + CENEFPOMFKG_BFKNLNNEMDG_OFFSET))(this, a1);
		}

		::System::Void PNFMOCAOABJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_PNFMOCAOABJ_OFFSET))(this);
		}

		::System::Void GOJKMHGHOHL(::OKIBEPMJGMH a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKIBEPMJGMH))((::PBYTE)hIl2Cpp + CENEFPOMFKG_GOJKMHGHOHL_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtSkillUseResult DGGDINMOBJL(::OKIBEPMJGMH a1, ::CBDMDNJMLIH* a2)
		{
			return ((::RPG::GameCore::RtSkillUseResult(*)(::PVOID, ::OKIBEPMJGMH, ::CBDMDNJMLIH*))((::PBYTE)hIl2Cpp + CENEFPOMFKG_DGGDINMOBJL_OFFSET))(this, a1, a2);
		}

		::System::Void JBJABNLLLPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_JBJABNLLLPH_OFFSET))(this);
		}

		::System::Void ALHHOJIAEKK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CENEFPOMFKG_ALHHOJIAEKK_OFFSET))(this, a1);
		}

		::System::Void GNAONOEIIOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_GNAONOEIIOA_OFFSET))(this);
		}

		::System::Void HKHIIPEANFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_HKHIIPEANFD_OFFSET))(this);
		}

		::System::Boolean PBLOPPPDMEB(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CENEFPOMFKG_PBLOPPPDMEB_OFFSET))(this, a1);
		}

		::System::Boolean AMDHNMCLEOL(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + CENEFPOMFKG_AMDHNMCLEOL_OFFSET))(this, a1);
		}

		::System::Boolean CDLDPAPPGDG(::Il2CppArray<::RPG::GameCore::JsonEnum*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::JsonEnum*>*))((::PBYTE)hIl2Cpp + CENEFPOMFKG_CDLDPAPPGDG_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_TOSTRING_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* BGBBFBKLDLN()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_BGBBFBKLDLN_OFFSET))(this);
		}

		::System::Boolean JAMGMILLBIJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CENEFPOMFKG_JAMGMILLBIJ_OFFSET))(this, a1);
		}

		::System::Void IBHFEFJHGEB(::FGMHNMKDFMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGMHNMKDFMA*))((::PBYTE)hIl2Cpp + CENEFPOMFKG_IBHFEFJHGEB_OFFSET))(this, a1);
		}

		::RPG::GameCore::RtSkillState BGDKFHEBDFJ()
		{
			return ((::RPG::GameCore::RtSkillState(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::RPG::GameCore::RtSkillState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + CENEFPOMFKG_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::Boolean OCNHKBKEOAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_OCNHKBKEOAI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IMJKBDAHKKP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_IMJKBDAHKKP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GPPBGEFAHAL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_GPPBGEFAHAL_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* HEGNDMHLBGN()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_HEGNDMHLBGN_OFFSET))(this);
		}

		::GELIALJDFBL* FJNEAEDLDCC()
		{
			return ((::GELIALJDFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_FJNEAEDLDCC_OFFSET))(this);
		}

		::System::Boolean DGGDKFAJDMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CENEFPOMFKG_DGGDKFAJDMD_OFFSET))(this);
		}

	};
