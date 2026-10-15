#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJJIFGINJAJ.h"
#include "unitysdk/RPG/GameCore/GridFightDropCfgType.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NJIJCDNNBNI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DEEJKBIMHAA;
class FABMDCOFHCG;
class OLDDHFANEDA;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightAvatarRow_AvatarCommonRowWrap; }
namespace RPG::GameCore { class GridFightBattleTemplate; }
namespace RPG::GameCore { class GridFightCyreneModifyConfigRow; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class GridFightRankSkillModifyConfigRow; }
namespace RPG::GameCore { class GridFightStageTemplateConfig; }
namespace RPG::GameCore { class GridFightWaveInfo; }
namespace RPG::GameCore { class ICharacterRowData; }
namespace RPG::GameCore { class ServantConfig; }
namespace RPG::GameCore { class ServantRowData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAHCGOLIOMF_AIJCBGKFKBC_OFFSET UNITYSDK_OFFSET(0x16538050)
#define JAHCGOLIOMF_AMOKHJLHNID_OFFSET UNITYSDK_OFFSET(0x1653B580)
#define JAHCGOLIOMF_BHONMMAINDJ_OFFSET UNITYSDK_OFFSET(0x1653BA40)
#define JAHCGOLIOMF_BKJLCMNMGKA_OFFSET UNITYSDK_OFFSET(0x16538460)
#define JAHCGOLIOMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1653C8D0)
#define JAHCGOLIOMF_COKKBDOAEAD_OFFSET UNITYSDK_OFFSET(0x165393C0)
#define JAHCGOLIOMF_DBDFDJKPDLO_OFFSET UNITYSDK_OFFSET(0x16538750)
#define JAHCGOLIOMF_DMBILPKMIDO_OFFSET UNITYSDK_OFFSET(0x1653ADC0)
#define JAHCGOLIOMF_DNDGNBBFKJA_OFFSET UNITYSDK_OFFSET(0x1653B1E0)
#define JAHCGOLIOMF_EODNHLGAACI_OFFSET UNITYSDK_OFFSET(0x1653AEC0)
#define JAHCGOLIOMF_FKPFBOMMGBE_OFFSET UNITYSDK_OFFSET(0x1653C510)
#define JAHCGOLIOMF_FMPJFMNBJKM_OFFSET UNITYSDK_OFFSET(0x1653AC80)
#define JAHCGOLIOMF_GBNDPJNKOID_OFFSET UNITYSDK_OFFSET(0x16537FE0)
#define JAHCGOLIOMF_IJDAOFAONPK_OFFSET UNITYSDK_OFFSET(0x1653BBC0)
#define JAHCGOLIOMF_JFCBOKFBFFC_OFFSET UNITYSDK_OFFSET(0x16537DF0)
#define JAHCGOLIOMF_KBKEFCCEFDD_OFFSET UNITYSDK_OFFSET(0x16539E40)
#define JAHCGOLIOMF_LFCBPEMJFPG_OFFSET UNITYSDK_OFFSET(0x165391F0)
#define JAHCGOLIOMF_LMGFNLICEDC_OFFSET UNITYSDK_OFFSET(0x1653B750)
#define JAHCGOLIOMF_LNOHFFHDPAP_OFFSET UNITYSDK_OFFSET(0x1653B3B0)
#define JAHCGOLIOMF_MBPFJIBHHID_OFFSET UNITYSDK_OFFSET(0x16538820)
#define JAHCGOLIOMF_MJCPLODCNFP_OFFSET UNITYSDK_OFFSET(0x1653AFD0)
#define JAHCGOLIOMF_MNDEJPCMMBG_OFFSET UNITYSDK_OFFSET(0x16537ED0)
#define JAHCGOLIOMF_MOGGNKOHFIB_OFFSET UNITYSDK_OFFSET(0x16538080)
#define JAHCGOLIOMF_NGBIODOOGCL_OFFSET UNITYSDK_OFFSET(0x165381F0)
#define JAHCGOLIOMF_NJOMMEINNDD_OFFSET UNITYSDK_OFFSET(0x1653C270)
#define JAHCGOLIOMF_OALIBBODAOC_OFFSET UNITYSDK_OFFSET(0x165385B0)
#define JAHCGOLIOMF_POBPPOCFFOJ_OFFSET UNITYSDK_OFFSET(0x16539040)

inline static constexpr unsigned int JAHCGOLIOMF_TypeDefinitionIndex = 59060;

	class JAHCGOLIOMF : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GridFightStageTemplateConfig** StaticGet_OCNEEODCHFE()
		{
			return (::RPG::GameCore::GridFightStageTemplateConfig**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1D570);
		}

		static ::System::String** StaticGet_HBPGAJNMCHD()
		{
			return (::System::String**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1D578);
		}

		static ::System::String** StaticGet_EJIPPFGACDB()
		{
			return (::System::String**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1D580);
		}

		static ::System::String** StaticGet_HHKOPCOCEOG()
		{
			return (::System::String**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1D588);
		}

		static ::System::String** StaticGet_EKNLIOANFAA()
		{
			return (::System::String**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1D590);
		}

		static ::DEEJKBIMHAA** StaticGet_JJNGEGLMCGK()
		{
			return (::DEEJKBIMHAA**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1D598);
		}

		static ::OLDDHFANEDA** StaticGet_JCCODBFHFNJ()
		{
			return (::OLDDHFANEDA**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1D5A0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_FOCJBGGBPKN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64A0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_MLHLNECCDPD()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64A4);
		}

		static ::RPG::GameCore::StringHash* StaticGet_IFPMJJLBMID()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64A8);
		}

		static ::RPG::GameCore::StringHash* StaticGet_HLEDGKCEKGB()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64AC);
		}

		static ::RPG::GameCore::StringHash* StaticGet_EHNJDIDABHD()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64B0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_OMOKHMIGIMC()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64B4);
		}

		static ::RPG::GameCore::StringHash* StaticGet_CIKHDIJFAED()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64B8);
		}

		static ::RPG::GameCore::StringHash* StaticGet_HPDOIKGOEOB()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64BC);
		}

		static ::RPG::GameCore::StringHash* StaticGet_KOMFCJAFGPA()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64C0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_ODFBFLBMKEK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64C4);
		}

		static ::RPG::GameCore::StringHash* StaticGet_KMENGMELADF()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64C8);
		}

		static ::System::UInt32* StaticGet_HNAAIBBKOLK()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64CC);
		}

		static ::System::UInt32* StaticGet_FCJOJOIEOJD()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64D0);
		}

		static ::System::Boolean* StaticGet_GEFPEIAJFOO()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64D4);
		}

		static ::System::Boolean* StaticGet_MGBLMOACGIC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64D5);
		}

		static ::RPG::GameCore::StringHash* StaticGet_IDJOOLJBFCG()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64D8);
		}

		static ::RPG::GameCore::StringHash* StaticGet_HKMHDAMLOOK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64DC);
		}

		static ::RPG::GameCore::StringHash* StaticGet_AFDMMEDFPKN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64E0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_GKBBBILMGNC()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64E4);
		}

		static ::RPG::GameCore::StringHash* StaticGet_FEMNBMBEAKN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64E8);
		}

		static ::System::UInt32* StaticGet_LHDOKKFJMIF()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64EC);
		}

		static ::RPG::GameCore::StringHash* StaticGet_NNDBFAIDKNJ()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64F0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_JBIMLONMJBF()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64F4);
		}

		static ::RPG::GameCore::StringHash* StaticGet_IGDGDPJOKDN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64F8);
		}

		static ::RPG::GameCore::StringHash* StaticGet_MPMAOEFLGEK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x64FC);
		}

		static ::RPG::GameCore::StringHash* StaticGet_MGPAOPACBDK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x6500);
		}

		static ::RPG::GameCore::StringHash* StaticGet_IHKFAFJMCIB()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x6504);
		}

		static ::RPG::GameCore::StringHash* StaticGet_DMBIOBMBOAN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x6508);
		}

		static ::RPG::GameCore::StringHash* StaticGet_KAPLBIDKPOM()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x650C);
		}

		static ::RPG::GameCore::StringHash* StaticGet_GMHANKLHGGK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x6510);
		}

		static ::RPG::GameCore::StringHash* StaticGet_JJJIPEDNLDK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x6514);
		}

		static ::RPG::GameCore::StringHash* StaticGet_LIFBHELMEAI()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x6518);
		}

		// static const ::System::String* MMLEGFJKACL; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAHCGOLIOMF_CCTOR_OFFSET))();
		}

		static ::OLDDHFANEDA* JFCBOKFBFFC()
		{
			return ((::OLDDHFANEDA*(*)())((::PBYTE)hIl2Cpp + JAHCGOLIOMF_JFCBOKFBFFC_OFFSET))();
		}

		static ::RPG::GameCore::GridFightStageTemplateConfig* MNDEJPCMMBG()
		{
			return ((::RPG::GameCore::GridFightStageTemplateConfig*(*)())((::PBYTE)hIl2Cpp + JAHCGOLIOMF_MNDEJPCMMBG_OFFSET))();
		}

		static ::System::Void GBNDPJNKOID(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_GBNDPJNKOID_OFFSET))(a1);
		}

		static ::System::String* AIJCBGKFKBC()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + JAHCGOLIOMF_AIJCBGKFKBC_OFFSET))();
		}

		static ::RPG::GameCore::GridFightWaveInfo* MOGGNKOHFIB(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightWaveInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_MOGGNKOHFIB_OFFSET))(a1);
		}

		static ::RPG::GameCore::GridFightBattleTemplate* NGBIODOOGCL(::System::String* a1)
		{
			return ((::RPG::GameCore::GridFightBattleTemplate*(*)(::System::String*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_NGBIODOOGCL_OFFSET))(a1);
		}

		static ::System::Int32 BKJLCMNMGKA(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_BKJLCMNMGKA_OFFSET))(a1);
		}

		static ::System::UInt32 OALIBBODAOC(::System::Collections::Generic::List_1<::NJIJCDNNBNI>* a1, ::MJJIFGINJAJ a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::NJIJCDNNBNI>*, ::MJJIFGINJAJ, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_OALIBBODAOC_OFFSET))(a1, a2, a3);
		}

		static ::MJJIFGINJAJ DBDFDJKPDLO(::RPG::GameCore::GridFightDropCfgType a1, ::System::UInt32 a2)
		{
			return ((::MJJIFGINJAJ(*)(::RPG::GameCore::GridFightDropCfgType, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_DBDFDJKPDLO_OFFSET))(a1, a2);
		}

		static ::System::Void MBPFJIBHHID(::RPG::GameCore::BattleEventDataComponent* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_MBPFJIBHHID_OFFSET))(a1);
		}

		static ::System::Void KBKEFCCEFDD(::RPG::GameCore::AvatarDataComponent* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_KBKEFCCEFDD_OFFSET))(a1);
		}

		static ::System::Void DMBILPKMIDO(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_DMBILPKMIDO_OFFSET))(a1);
		}

		static ::System::Void EODNHLGAACI(::RPG::GameCore::AvatarRowData* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarRowData*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_EODNHLGAACI_OFFSET))(a1);
		}

		static ::System::Void MJCPLODCNFP(::RPG::GameCore::ServantRowData* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ServantRowData*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_MJCPLODCNFP_OFFSET))(a1);
		}

		static ::System::Void COKKBDOAEAD(::RPG::GameCore::GridFightManager* a1, ::RPG::GameCore::BattleGridFightAvatarData* a2, ::RPG::GameCore::ICharacterRowData* a3, ::RPG::GameCore::GridFightSkillType a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightManager*, ::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::GameCore::ICharacterRowData*, ::RPG::GameCore::GridFightSkillType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_COKKBDOAEAD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DNDGNBBFKJA(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::System::UInt32 a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_DNDGNBBFKJA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AMOKHJLHNID(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_AMOKHJLHNID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LNOHFFHDPAP(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::System::UInt32 a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_LNOHFFHDPAP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void LFCBPEMJFPG(::RPG::GameCore::GridFightRankSkillModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRankSkillModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_LFCBPEMJFPG_OFFSET))(a1, a2);
		}

		static ::System::Void LMGFNLICEDC(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* a3, ::Il2CppArray<::RPG::GameCore::FixPoint>* a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a5, ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a6, ::System::UInt32 a7, ::RPG::GameCore::FixPoint a8)
		{
			return ((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::Func_3<::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_LMGFNLICEDC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::RPG::GameCore::BattleGridFightAvatarData* POBPPOCFFOJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GridFightManager* a2)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_POBPPOCFFOJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::BattleGridFightAvatarData* BHONMMAINDJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GridFightManager* a2)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_BHONMMAINDJ_OFFSET))(a1, a2);
		}

		static ::System::Void FMPJFMNBJKM(::RPG::GameCore::BattleGridFightEquipData* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleGridFightEquipData*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_FMPJFMNBJKM_OFFSET))(a1, a2);
		}

		static ::FABMDCOFHCG* IJDAOFAONPK(::RPG::GameCore::BattleGridFightEquipData* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
		{
			return ((::FABMDCOFHCG*(*)(::RPG::GameCore::BattleGridFightEquipData*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_IJDAOFAONPK_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ServantConfig* NJOMMEINNDD(::RPG::GameCore::GridFightAvatarRow_AvatarCommonRowWrap* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ServantConfig*(*)(::RPG::GameCore::GridFightAvatarRow_AvatarCommonRowWrap*, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_NJOMMEINNDD_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* FKPFBOMMGBE(::System::UInt32 a1, ::RPG::GameCore::GridFightManager* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_FKPFBOMMGBE_OFFSET))(a1, a2);
		}

	};
