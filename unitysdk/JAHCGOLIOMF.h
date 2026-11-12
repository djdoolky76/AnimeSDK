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
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class GridFightRankSkillModifyConfigRow; }
namespace RPG::GameCore { class GridFightSpecialModifyConfigRow; }
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

#define JAHCGOLIOMF_AIJCBGKFKBC_OFFSET UNITYSDK_OFFSET(0xB87D8E0)
#define JAHCGOLIOMF_BAFJOENBECG_OFFSET UNITYSDK_OFFSET(0xB881250)
#define JAHCGOLIOMF_BHONMMAINDJ_OFFSET UNITYSDK_OFFSET(0xB8818E0)
#define JAHCGOLIOMF_BKJLCMNMGKA_OFFSET UNITYSDK_OFFSET(0xB87DCF0)
#define JAHCGOLIOMF_CCTOR_OFFSET UNITYSDK_OFFSET(0xB882770)
#define JAHCGOLIOMF_DBDFDJKPDLO_OFFSET UNITYSDK_OFFSET(0xB87DFE0)
#define JAHCGOLIOMF_DBLMOGLEKAC_OFFSET UNITYSDK_OFFSET(0xB880D40)
#define JAHCGOLIOMF_DMBILPKMIDO_OFFSET UNITYSDK_OFFSET(0xB880780)
#define JAHCGOLIOMF_EODNHLGAACI_OFFSET UNITYSDK_OFFSET(0xB880890)
#define JAHCGOLIOMF_FKPFBOMMGBE_OFFSET UNITYSDK_OFFSET(0xB8823B0)
#define JAHCGOLIOMF_FMPJFMNBJKM_OFFSET UNITYSDK_OFFSET(0xB880640)
#define JAHCGOLIOMF_GAPMJCEIHKG_OFFSET UNITYSDK_OFFSET(0xB880BB0)
#define JAHCGOLIOMF_GBNDPJNKOID_OFFSET UNITYSDK_OFFSET(0xB87D870)
#define JAHCGOLIOMF_IFJOIEOLALC_OFFSET UNITYSDK_OFFSET(0xB880FA0)
#define JAHCGOLIOMF_IJDAOFAONPK_OFFSET UNITYSDK_OFFSET(0xB881A60)
#define JAHCGOLIOMF_JFCBOKFBFFC_OFFSET UNITYSDK_OFFSET(0xB87D680)
#define JAHCGOLIOMF_KBKEFCCEFDD_OFFSET UNITYSDK_OFFSET(0xB87F7E0)
#define JAHCGOLIOMF_LBOBEPOFCBM_OFFSET UNITYSDK_OFFSET(0xB881420)
#define JAHCGOLIOMF_LFCBPEMJFPG_OFFSET UNITYSDK_OFFSET(0xB87EAA0)
#define JAHCGOLIOMF_LGCDLAAGENG_OFFSET UNITYSDK_OFFSET(0xB880E10)
#define JAHCGOLIOMF_LMGFNLICEDC_OFFSET UNITYSDK_OFFSET(0xB8815F0)
#define JAHCGOLIOMF_MBPFJIBHHID_OFFSET UNITYSDK_OFFSET(0xB87E0D0)
#define JAHCGOLIOMF_MJCPLODCNFP_OFFSET UNITYSDK_OFFSET(0xB8809A0)
#define JAHCGOLIOMF_MNDEJPCMMBG_OFFSET UNITYSDK_OFFSET(0xB87D760)
#define JAHCGOLIOMF_MOGGNKOHFIB_OFFSET UNITYSDK_OFFSET(0xB87D910)
#define JAHCGOLIOMF_NGBIODOOGCL_OFFSET UNITYSDK_OFFSET(0xB87DA80)
#define JAHCGOLIOMF_NJOMMEINNDD_OFFSET UNITYSDK_OFFSET(0xB882110)
#define JAHCGOLIOMF_OALIBBODAOC_OFFSET UNITYSDK_OFFSET(0xB87DE40)
#define JAHCGOLIOMF_OLEOOKMBIOF_OFFSET UNITYSDK_OFFSET(0xB87EC70)
#define JAHCGOLIOMF_PFMNAHPEKKJ_OFFSET UNITYSDK_OFFSET(0xB881080)
#define JAHCGOLIOMF_POBPPOCFFOJ_OFFSET UNITYSDK_OFFSET(0xB87E8F0)

inline static constexpr unsigned int JAHCGOLIOMF_TypeDefinitionIndex = 60335;

	class JAHCGOLIOMF : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_EJIPPFGACDB()
		{
			return (::System::String**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xA610);
		}

		static ::DEEJKBIMHAA** StaticGet_JJNGEGLMCGK()
		{
			return (::DEEJKBIMHAA**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xA618);
		}

		static ::OLDDHFANEDA** StaticGet_JCCODBFHFNJ()
		{
			return (::OLDDHFANEDA**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xA620);
		}

		static ::System::String** StaticGet_EKNLIOANFAA()
		{
			return (::System::String**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xA628);
		}

		static ::System::String** StaticGet_HBPGAJNMCHD()
		{
			return (::System::String**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xA630);
		}

		static ::System::String** StaticGet_HHKOPCOCEOG()
		{
			return (::System::String**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xA638);
		}

		static ::RPG::GameCore::GridFightStageTemplateConfig** StaticGet_OCNEEODCHFE()
		{
			return (::RPG::GameCore::GridFightStageTemplateConfig**)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xA640);
		}

		static ::RPG::GameCore::StringHash* StaticGet_OHLHNOABAMK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFD0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_NGLHIFLIFBI()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFD4);
		}

		static ::RPG::GameCore::StringHash* StaticGet_LIFBHELMEAI()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFD8);
		}

		static ::RPG::GameCore::StringHash* StaticGet_JBIMLONMJBF()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFDC);
		}

		static ::RPG::GameCore::StringHash* StaticGet_DMBIOBMBOAN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFE0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_ODFBFLBMKEK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFE4);
		}

		static ::RPG::GameCore::StringHash* StaticGet_IFPMJJLBMID()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFE8);
		}

		static ::RPG::GameCore::StringHash* StaticGet_HPDOIKGOEOB()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFEC);
		}

		static ::RPG::GameCore::StringHash* StaticGet_IHKFAFJMCIB()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFF0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_KAPLBIDKPOM()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFF4);
		}

		static ::System::UInt32* StaticGet_FCJOJOIEOJD()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFF8);
		}

		static ::RPG::GameCore::StringHash* StaticGet_FEMNBMBEAKN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0xFFC);
		}

		static ::RPG::GameCore::StringHash* StaticGet_GKBBBILMGNC()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1000);
		}

		static ::RPG::GameCore::StringHash* StaticGet_AFDMMEDFPKN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1004);
		}

		static ::RPG::GameCore::StringHash* StaticGet_FOCJBGGBPKN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1008);
		}

		static ::RPG::GameCore::StringHash* StaticGet_EHNJDIDABHD()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x100C);
		}

		static ::System::UInt32* StaticGet_LHDOKKFJMIF()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1010);
		}

		static ::RPG::GameCore::StringHash* StaticGet_HKMHDAMLOOK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1014);
		}

		static ::RPG::GameCore::StringHash* StaticGet_MPMAOEFLGEK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1018);
		}

		static ::RPG::GameCore::StringHash* StaticGet_KMENGMELADF()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x101C);
		}

		static ::RPG::GameCore::StringHash* StaticGet_IDJOOLJBFCG()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1020);
		}

		static ::RPG::GameCore::StringHash* StaticGet_NNDBFAIDKNJ()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1024);
		}

		static ::RPG::GameCore::StringHash* StaticGet_OMOKHMIGIMC()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1028);
		}

		static ::RPG::GameCore::StringHash* StaticGet_KONFLEMHELN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x102C);
		}

		static ::RPG::GameCore::StringHash* StaticGet_JJJIPEDNLDK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1030);
		}

		static ::System::UInt32* StaticGet_HNAAIBBKOLK()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1034);
		}

		static ::RPG::GameCore::StringHash* StaticGet_FCAADPLHHKM()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1038);
		}

		static ::RPG::GameCore::StringHash* StaticGet_GMHANKLHGGK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x103C);
		}

		static ::RPG::GameCore::StringHash* StaticGet_ANACELALIEJ()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1040);
		}

		static ::RPG::GameCore::StringHash* StaticGet_MGPAOPACBDK()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1044);
		}

		static ::RPG::GameCore::StringHash* StaticGet_DLAFLIIPGBJ()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1048);
		}

		static ::RPG::GameCore::StringHash* StaticGet_IGDGDPJOKDN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x104C);
		}

		static ::RPG::GameCore::StringHash* StaticGet_IENABOHGHJJ()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1050);
		}

		static ::RPG::GameCore::StringHash* StaticGet_HLEDGKCEKGB()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1054);
		}

		static ::System::Boolean* StaticGet_MGBLMOACGIC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1058);
		}

		static ::System::Boolean* StaticGet_GEFPEIAJFOO()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1059);
		}

		static ::RPG::GameCore::StringHash* StaticGet_MLHLNECCDPD()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x105C);
		}

		static ::RPG::GameCore::StringHash* StaticGet_CIKHDIJFAED()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1060);
		}

		static ::RPG::GameCore::StringHash* StaticGet_KOMFCJAFGPA()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "JAHCGOLIOMF")->GetStaticField(0x1064);
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

		static ::System::Boolean GAPMJCEIHKG(::RPG::GameCore::GridFightManager* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightManager*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_GAPMJCEIHKG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::BattleGridFightAvatarData* DBLMOGLEKAC(::RPG::GameCore::GridFightManager* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::RPG::GameCore::GridFightManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_DBLMOGLEKAC_OFFSET))(a1, a2);
		}

		static ::System::Boolean LGCDLAAGENG(::RPG::GameCore::GridFightManager* a1, ::RPG::GameCore::GridFightSpecialModifyConfigRow* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightManager*, ::RPG::GameCore::GridFightSpecialModifyConfigRow*))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_LGCDLAAGENG_OFFSET))(a1, a2);
		}

		static ::System::Boolean IFJOIEOLALC(::RPG::GameCore::GridFightManager* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightManager*, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_IFJOIEOLALC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OLEOOKMBIOF(::RPG::GameCore::GridFightManager* a1, ::RPG::GameCore::BattleGridFightAvatarData* a2, ::RPG::GameCore::ICharacterRowData* a3, ::RPG::GameCore::GridFightSkillType a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightManager*, ::RPG::GameCore::BattleGridFightAvatarData*, ::RPG::GameCore::ICharacterRowData*, ::RPG::GameCore::GridFightSkillType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_OLEOOKMBIOF_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void PFMNAHPEKKJ(::RPG::GameCore::GridFightSpecialModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::System::UInt32 a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSpecialModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_PFMNAHPEKKJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void LBOBEPOFCBM(::RPG::GameCore::GridFightSpecialModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSpecialModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_LBOBEPOFCBM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BAFJOENBECG(::RPG::GameCore::GridFightSpecialModifyConfigRow* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>* a2, ::System::UInt32 a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSpecialModifyConfigRow*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*>*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JAHCGOLIOMF_BAFJOENBECG_OFFSET))(a1, a2, a3, a4);
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
