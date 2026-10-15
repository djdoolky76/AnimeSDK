#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityInstanceState.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/UseAbilityOption.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicStringInjection.h"
class ENEIHJJPNPI;
class GELIALJDFBL;
class KFELGAIGHAP;
class LACOFPCJAFI;
class MBBEBLGELAP;
class NAOKFLDEDBJ;
class NBHAKGBHPOE;
class OHHPOGMFPBF;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class AbilityConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPICNGFLLCA_ABIGJLFMFLC_OFFSET UNITYSDK_OFFSET(0x15DBF910)
#define HPICNGFLLCA_BCBEPNFNMOL_OFFSET UNITYSDK_OFFSET(0x15DC0C50)
#define HPICNGFLLCA_BOIIIDBDCFG_OFFSET UNITYSDK_OFFSET(0x15DBEDF0)
#define HPICNGFLLCA_CFDNELEJFCN_OFFSET UNITYSDK_OFFSET(0x15DC0A00)
#define HPICNGFLLCA_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0x15DBF090)
#define HPICNGFLLCA_CIOJDANBNJE_OFFSET UNITYSDK_OFFSET(0x15DBE850)
#define HPICNGFLLCA_CMNFCHANIHE_OFFSET UNITYSDK_OFFSET(0x15DC0D60)
#define HPICNGFLLCA_CTOR_OFFSET UNITYSDK_OFFSET(0x15DBD7A0)
#define HPICNGFLLCA_DEAIODAMELG_OFFSET UNITYSDK_OFFSET(0x15DC0E40)
#define HPICNGFLLCA_DEGNGOFGEJB_OFFSET UNITYSDK_OFFSET(0x15DBEB50)
#define HPICNGFLLCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DBDEE0)
#define HPICNGFLLCA_EABONEDEFBA_OFFSET UNITYSDK_OFFSET(0x15DC0C30)
#define HPICNGFLLCA_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0x15DBF900)
#define HPICNGFLLCA_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0x15DBF030)
#define HPICNGFLLCA_GET_ABILITYGLOBALUSEID_OFFSET UNITYSDK_OFFSET(0x15DC0D00)
#define HPICNGFLLCA_GET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x15DC0CC0)
#define HPICNGFLLCA_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x15DC0CE0)
#define HPICNGFLLCA_GET_ISINTRIGGER_OFFSET UNITYSDK_OFFSET(0x15DC0CA0)
#define HPICNGFLLCA_GET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x15DC0C80)
#define HPICNGFLLCA_GET_TAG_OFFSET UNITYSDK_OFFSET(0x15DC0D40)
#define HPICNGFLLCA_GET_TARGETLISTINDEX_OFFSET UNITYSDK_OFFSET(0x15DC0C60)
#define HPICNGFLLCA_GET_TIMEFROMSTART_OFFSET UNITYSDK_OFFSET(0x15DC0F30)
#define HPICNGFLLCA_GET_USEOPTION_OFFSET UNITYSDK_OFFSET(0x15DC0F50)
#define HPICNGFLLCA_GONOGCABHEC_OFFSET UNITYSDK_OFFSET(0x15DBDD40)
#define HPICNGFLLCA_HBKLKBJOFGG_OFFSET UNITYSDK_OFFSET(0x15DABA00)
#define HPICNGFLLCA_HDOAHOPMKFF_OFFSET UNITYSDK_OFFSET(0x15DBE450)
#define HPICNGFLLCA_HHNGLICLNBA_OFFSET UNITYSDK_OFFSET(0x15DBF0F0)
#define HPICNGFLLCA_HMFOEEMDEPF_OFFSET UNITYSDK_OFFSET(0x15DBE320)
#define HPICNGFLLCA_IBDCMBODFGF_OFFSET UNITYSDK_OFFSET(0x15DBF9D0)
#define HPICNGFLLCA_IBHFEFJHGEB_OFFSET UNITYSDK_OFFSET(0x15DC0BE0)
#define HPICNGFLLCA_IJJNBFPJDDP_OFFSET UNITYSDK_OFFSET(0x15DBF600)
#define HPICNGFLLCA_IMBHBKFCPEO_OFFSET UNITYSDK_OFFSET(0x15DC0D80)
#define HPICNGFLLCA_JKKLFGGCHGB_OFFSET UNITYSDK_OFFSET(0x15DBE3A0)
#define HPICNGFLLCA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15DBE5F0)
#define HPICNGFLLCA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15DBE210)
#define HPICNGFLLCA_LAKAPHCEIIC_OFFSET UNITYSDK_OFFSET(0x15DBEAB0)
#define HPICNGFLLCA_LFKFHCFIFOF_OFFSET UNITYSDK_OFFSET(0x15DC0C40)
#define HPICNGFLLCA_LFODHGBCCHF_OFFSET UNITYSDK_OFFSET(0x15DBEE30)
#define HPICNGFLLCA_LNIMDPPAHJO_OFFSET UNITYSDK_OFFSET(0x15DC0B30)
#define HPICNGFLLCA_MCFNJPJPNIA_OFFSET UNITYSDK_OFFSET(0x15DC0DE0)
#define HPICNGFLLCA_MCHFDCJLNHG_OFFSET UNITYSDK_OFFSET(0x15DBF1A0)
#define HPICNGFLLCA_MDICFPFLGAO_OFFSET UNITYSDK_OFFSET(0x15DBF640)
#define HPICNGFLLCA_MEIDIOGEBMM_OFFSET UNITYSDK_OFFSET(0x15DBF4F0)
#define HPICNGFLLCA_MHKCPFKBFND_OFFSET UNITYSDK_OFFSET(0x15DC0EA0)
#define HPICNGFLLCA_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15DC0D20)
#define HPICNGFLLCA_MMPGOFNINBP_OFFSET UNITYSDK_OFFSET(0x15DC0920)
#define HPICNGFLLCA_NFMCLJCNAIK_OFFSET UNITYSDK_OFFSET(0x15DBF140)
#define HPICNGFLLCA_NLDOADDIDIO_OFFSET UNITYSDK_OFFSET(0x15DBF3F0)
#define HPICNGFLLCA_NNEMNIPFKGA_OFFSET UNITYSDK_OFFSET(0x15DC0D70)
#define HPICNGFLLCA_OOJMEGHDGGN_OFFSET UNITYSDK_OFFSET(0x15DBF7C0)
#define HPICNGFLLCA_SET_ABILITYGLOBALUSEID_OFFSET UNITYSDK_OFFSET(0x15DC0D10)
#define HPICNGFLLCA_SET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x15DC0CD0)
#define HPICNGFLLCA_SET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x15DC0CF0)
#define HPICNGFLLCA_SET_ISINTRIGGER_OFFSET UNITYSDK_OFFSET(0x15DC0CB0)
#define HPICNGFLLCA_SET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x15DC0C90)
#define HPICNGFLLCA_SET_TAG_OFFSET UNITYSDK_OFFSET(0x15DC0D50)
#define HPICNGFLLCA_SET_TARGETLISTINDEX_OFFSET UNITYSDK_OFFSET(0x15DC0C70)
#define HPICNGFLLCA_SET_TIMEFROMSTART_OFFSET UNITYSDK_OFFSET(0x15DC0F40)
#define HPICNGFLLCA_SET_USEOPTION_OFFSET UNITYSDK_OFFSET(0x15DC0F60)

inline static constexpr unsigned int HPICNGFLLCA_TypeDefinitionIndex = 54403;

	class HPICNGFLLCA : public ::System::Object
	{
	public:
		::KFELGAIGHAP* PPCEGDLCPJH; // 0x10
		::RPG::GameCore::TaskContext* LKKEALOOKKN; // 0x18
		::RPG::GameCore::GameEntityList* GACEAOFPHOL; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* _DynamicStrings_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::NAOKFLDEDBJ*>* ILEMHGIBNIG; // 0x30
		::KFELGAIGHAP* CLJEOHHIOKK; // 0x38
		::KFELGAIGHAP* NPICOLOFPGK; // 0x40
		::RPG::GameCore::JsonEnum* _Tag_k__BackingField; // 0x48
		::RPG::GameCore::GameEntity* _SkillPointEntity_k__BackingField; // 0x50
		::RPG::GameCore::GameEntity* IIJHEGOKIHJ; // 0x58
		::ENEIHJJPNPI* _DynamicValues_k__BackingField; // 0x60
		::RPG::GameCore::AbilityComponent* JDEMOOOCPIK; // 0x68
		::RPG::GameCore::AbilityConfig* OFKGLJOAMLD; // 0x70
		::RPG::GameCore::UseAbilityOption _UseOption_k__BackingField; // 0x78
		::System::Single _TimeFromStart_k__BackingField; // 0x7C
		::System::Boolean _IsInTrigger_k__BackingField; // 0x80
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AbilityInstanceState PINEIHNFLLG; // 0x84
		::System::Int32 _TargetListIndex_k__BackingField; // 0x88
		::System::UInt32 _AbilityGlobalUseId_k__BackingField; // 0x8C
		::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::AbilityConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::AbilityConfig*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HMFOEEMDEPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_HMFOEEMDEPF_OFFSET))(this);
		}

		::GELIALJDFBL* JKKLFGGCHGB()
		{
			return ((::GELIALJDFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_JKKLFGGCHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPICNGFLLCA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void CIOJDANBNJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_CIOJDANBNJE_OFFSET))(this);
		}

		::System::Void LAKAPHCEIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_LAKAPHCEIIC_OFFSET))(this);
		}

		::System::Void DEGNGOFGEJB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPICNGFLLCA_DEGNGOFGEJB_OFFSET))(this, a1);
		}

		::RPG::GameCore::AbilityComponent* BOIIIDBDCFG()
		{
			return ((::RPG::GameCore::AbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_BOIIIDBDCFG_OFFSET))(this);
		}

		::System::Void LFODHGBCCHF(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::UseAbilityOption a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + HPICNGFLLCA_LFODHGBCCHF_OFFSET))(this, a1, a2);
		}

		::System::Void FMPJJHKCNGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_FMPJJHKCNGG_OFFSET))(this);
		}

		::System::Void CFINKMFANFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_CFINKMFANFE_OFFSET))(this);
		}

		::RPG::GameCore::AbilityInstanceState HHNGLICLNBA()
		{
			return ((::RPG::GameCore::AbilityInstanceState(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_HHNGLICLNBA_OFFSET))(this);
		}

		::System::Type* NFMCLJCNAIK()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_NFMCLJCNAIK_OFFSET))(this);
		}

		::NAOKFLDEDBJ* MCHFDCJLNHG(::RPG::GameCore::NewProjectileConfig* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::NBHAKGBHPOE* a4, ::OHHPOGMFPBF* a5, ::LACOFPCJAFI* a6, ::System::Boolean a7)
		{
			return ((::NAOKFLDEDBJ*(*)(::PVOID, ::RPG::GameCore::NewProjectileConfig*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::NBHAKGBHPOE*, ::OHHPOGMFPBF*, ::LACOFPCJAFI*, ::System::Boolean))((::PBYTE)hIl2Cpp + HPICNGFLLCA_MCHFDCJLNHG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::NAOKFLDEDBJ* HBKLKBJOFGG(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::NBHAKGBHPOE* a4, ::OHHPOGMFPBF* a5, ::LACOFPCJAFI* a6, ::System::Boolean a7)
		{
			return ((::NAOKFLDEDBJ*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::NBHAKGBHPOE*, ::OHHPOGMFPBF*, ::LACOFPCJAFI*, ::System::Boolean))((::PBYTE)hIl2Cpp + HPICNGFLLCA_HBKLKBJOFGG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::NAOKFLDEDBJ* NLDOADDIDIO(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::NBHAKGBHPOE* a4, ::OHHPOGMFPBF* a5, ::LACOFPCJAFI* a6, ::System::Boolean a7, ::RPG::GameCore::NewProjectileConfig* a8)
		{
			return ((::NAOKFLDEDBJ*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::NBHAKGBHPOE*, ::OHHPOGMFPBF*, ::LACOFPCJAFI*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_NLDOADDIDIO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean MEIDIOGEBMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_MEIDIOGEBMM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NAOKFLDEDBJ*>* IJJNBFPJDDP()
		{
			return ((::System::Collections::Generic::List_1<::NAOKFLDEDBJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_IJJNBFPJDDP_OFFSET))(this);
		}

		::System::Void MDICFPFLGAO(::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicStringInjection>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicStringInjection>*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_MDICFPFLGAO_OFFSET))(this, a1);
		}

		::System::Void OOJMEGHDGGN(::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicFloatInjection>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicFloatInjection>*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_OOJMEGHDGGN_OFFSET))(this, a1);
		}

		::RPG::GameCore::AbilityConfig* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::AbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_FMHKLHAKMKO_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* ABIGJLFMFLC()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_ABIGJLFMFLC_OFFSET))(this);
		}

		::System::Void GONOGCABHEC(::RPG::GameCore::AbilityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityConfig*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_GONOGCABHEC_OFFSET))(this, a1);
		}

		::System::Void IBDCMBODFGF(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_IBDCMBODFGF_OFFSET))(this, a1);
		}

		::System::Void CFDNELEJFCN(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_CFDNELEJFCN_OFFSET))(this, a1);
		}

		::System::Boolean MMPGOFNINBP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_MMPGOFNINBP_OFFSET))(this, a1);
		}

		::System::Void LNIMDPPAHJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_LNIMDPPAHJO_OFFSET))(this);
		}

		::System::Void IBHFEFJHGEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_IBHFEFJHGEB_OFFSET))(this);
		}

		::System::Void HDOAHOPMKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_HDOAHOPMKFF_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* EABONEDEFBA()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_EABONEDEFBA_OFFSET))(this);
		}

		::System::Void LFKFHCFIFOF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_LFKFHCFIFOF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BCBEPNFNMOL()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_BCBEPNFNMOL_OFFSET))(this);
		}

		::System::Int32 get_TargetListIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_GET_TARGETLISTINDEX_OFFSET))(this);
		}

		::System::Void set_TargetListIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPICNGFLLCA_SET_TARGETLISTINDEX_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_SkillPointEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_GET_SKILLPOINTENTITY_OFFSET))(this);
		}

		::System::Void set_SkillPointEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_SET_SKILLPOINTENTITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_GET_ISINTRIGGER_OFFSET))(this);
		}

		::System::Void set_IsInTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPICNGFLLCA_SET_ISINTRIGGER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* get_DynamicStrings()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_GET_DYNAMICSTRINGS_OFFSET))(this);
		}

		::System::Void set_DynamicStrings(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_SET_DYNAMICSTRINGS_OFFSET))(this, a1);
		}

		::ENEIHJJPNPI* get_DynamicValues()
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_GET_DYNAMICVALUES_OFFSET))(this);
		}

		::System::Void set_DynamicValues(::ENEIHJJPNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_SET_DYNAMICVALUES_OFFSET))(this, a1);
		}

		::System::UInt32 get_AbilityGlobalUseId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_GET_ABILITYGLOBALUSEID_OFFSET))(this);
		}

		::System::Void set_AbilityGlobalUseId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPICNGFLLCA_SET_ABILITYGLOBALUSEID_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_MLMGEFIOION_OFFSET))(this);
		}

		::RPG::GameCore::JsonEnum* get_Tag()
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_GET_TAG_OFFSET))(this);
		}

		::System::Void set_Tag(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_SET_TAG_OFFSET))(this, a1);
		}

		::RPG::GameCore::AbilityComponent* CMNFCHANIHE()
		{
			return ((::RPG::GameCore::AbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_CMNFCHANIHE_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* NNEMNIPFKGA()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_NNEMNIPFKGA_OFFSET))(this);
		}

		::MBBEBLGELAP* IMBHBKFCPEO()
		{
			return ((::MBBEBLGELAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_IMBHBKFCPEO_OFFSET))(this);
		}

		::System::Void MCFNJPJPNIA(::MBBEBLGELAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + HPICNGFLLCA_MCFNJPJPNIA_OFFSET))(this, a1);
		}

		::System::Int32 DEAIODAMELG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_DEAIODAMELG_OFFSET))(this);
		}

		::System::Boolean MHKCPFKBFND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_MHKCPFKBFND_OFFSET))(this);
		}

		::System::Single get_TimeFromStart()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_GET_TIMEFROMSTART_OFFSET))(this);
		}

		::System::Void set_TimeFromStart(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPICNGFLLCA_SET_TIMEFROMSTART_OFFSET))(this, a1);
		}

		::RPG::GameCore::UseAbilityOption get_UseOption()
		{
			return ((::RPG::GameCore::UseAbilityOption(*)(::PVOID))((::PBYTE)hIl2Cpp + HPICNGFLLCA_GET_USEOPTION_OFFSET))(this);
		}

		::System::Void set_UseOption(::RPG::GameCore::UseAbilityOption a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + HPICNGFLLCA_SET_USEOPTION_OFFSET))(this, a1);
		}

	};
