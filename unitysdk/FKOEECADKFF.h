#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CMIMHAHPAOC.h"
#include "unitysdk/INGNCPPMOFG.h"
#include "unitysdk/NJIJCDNNBNI.h"
#include "unitysdk/ODAGKNPDBMH.h"
#include "unitysdk/PKFBNIHNLGG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ABOOGEJAPHO;
class ACFLKPFDHIM;
class AECMCBAHALK;
class AFJEOHMFDPG;
class AGGHHCLPALK;
class AJLNGGEEFKD;
class BCCONKJHDJL;
class BGLCGNCLHLJ;
class BJGJBNJDLIK;
class BLJEJFMKEII;
class CCGFLDDDIPN;
class CHHGFHIPHAE;
class CJHPPLHFNAB;
class COMGNGLLCFN;
class DFMGCEABBAD;
class DIFAPHOCGKL;
class EEFMAMCHOMN;
class ELGFKGOHGIO;
class ELLHFEAIKFG;
class EMLFDPFAPJP;
class FAPIMOFPHBB;
class FEKLMJPJIKG;
class FFLFKJJLJEJ;
class FGKJPPIIKDN;
class FHOHCAIFHNA;
class GLIBGKGGEJL;
class GMIIFDNHLFN;
class GMMNMPCKJEM;
class HIJGDJLAOKI;
class HLNNEGIIMOH;
class HOIGPAEEAHD;
class HOLHBEOHEJD;
class IGCMEFNJHKC;
class JDGIIPJCPID;
class JGGNIOIBDBC;
class JIEAANCEIJP;
class JMHDGNNIFCA;
class KCIEGDGJMBE;
class KEHCDMCIBJJ;
class KHFHMJEMBOF;
class KIAICMELIMM;
class LAOKFPFHBHH;
class LDKIDFEJNFA;
class LFJNNOOOGOH;
class NGDGDIGJPFP;
class NIEGDAPHKGC;
class NIODADALNHA;
class NMBMHCNGCFG;
class NPOICBFPPHK;
class OJCBOMCCPDB;
class OJMPKMNINGK;
class OKELLDKLMGF;
class OKFLAHFIBCM;
class OKGKPCLMCNC;
class ONIIPFNFOFB;
class PBNONKAIAMK;
class PIOGCEBHNBF;
class PKDNDNABKII;
class PKPFAHEBJIO;
namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class Item; }
namespace Proto { class ItemList; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class BattleRogueData; }
namespace RPG::GameCore { class BattleRogueMagicData; }
namespace RPG::GameCore { class BattleRogueMagicData_MagicUnit; }
namespace RPG::GameCore { class BattleRogueMagicData_RoundCount; }
namespace RPG::GameCore { class BattleRogueMagicData_Scepter; }
namespace RPG::GameCore { class BattleRogueTournData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class StageMonsterRewardItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define FKOEECADKFF_AOFAGGGBMJF_OFFSET UNITYSDK_OFFSET(0x189412A0)
#define FKOEECADKFF_BCOKIBPEACH_OFFSET UNITYSDK_OFFSET(0x18945C60)
#define FKOEECADKFF_BMLFJNDCCJO_OFFSET UNITYSDK_OFFSET(0x18947500)
#define FKOEECADKFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x18952260)
#define FKOEECADKFF_DBMPNDHOEDJ_OFFSET UNITYSDK_OFFSET(0x18950C10)
#define FKOEECADKFF_DHJEKKOBGFI_OFFSET UNITYSDK_OFFSET(0x18951F20)
#define FKOEECADKFF_EFMKONMGMNA_1_OFFSET UNITYSDK_OFFSET(0x18941E10)
#define FKOEECADKFF_EFMKONMGMNA_OFFSET UNITYSDK_OFFSET(0x189414A0)
#define FKOEECADKFF_FGKCNFPEPGM_OFFSET UNITYSDK_OFFSET(0x18950870)
#define FKOEECADKFF_FJBNOPHOKDN_OFFSET UNITYSDK_OFFSET(0x1894BC60)
#define FKOEECADKFF_GBMBHEAGHCG_OFFSET UNITYSDK_OFFSET(0x18941720)
#define FKOEECADKFF_HDKCEBGKOGI_OFFSET UNITYSDK_OFFSET(0x189439C0)
#define FKOEECADKFF_HHGAHLCOGNG_OFFSET UNITYSDK_OFFSET(0x18951B30)
#define FKOEECADKFF_HIHDLJKLIAJ_OFFSET UNITYSDK_OFFSET(0x189470C0)
#define FKOEECADKFF_HMPDCLHIPHI_10_OFFSET UNITYSDK_OFFSET(0x18948BF0)
#define FKOEECADKFF_HMPDCLHIPHI_11_OFFSET UNITYSDK_OFFSET(0x18949000)
#define FKOEECADKFF_HMPDCLHIPHI_12_OFFSET UNITYSDK_OFFSET(0x1894BAC0)
#define FKOEECADKFF_HMPDCLHIPHI_13_OFFSET UNITYSDK_OFFSET(0x1894DB20)
#define FKOEECADKFF_HMPDCLHIPHI_14_OFFSET UNITYSDK_OFFSET(0x1894DD30)
#define FKOEECADKFF_HMPDCLHIPHI_15_OFFSET UNITYSDK_OFFSET(0x1894DDE0)
#define FKOEECADKFF_HMPDCLHIPHI_16_OFFSET UNITYSDK_OFFSET(0x1894E050)
#define FKOEECADKFF_HMPDCLHIPHI_17_OFFSET UNITYSDK_OFFSET(0x1894E310)
#define FKOEECADKFF_HMPDCLHIPHI_18_OFFSET UNITYSDK_OFFSET(0x1894E390)
#define FKOEECADKFF_HMPDCLHIPHI_19_OFFSET UNITYSDK_OFFSET(0x1894E400)
#define FKOEECADKFF_HMPDCLHIPHI_1_OFFSET UNITYSDK_OFFSET(0x189430A0)
#define FKOEECADKFF_HMPDCLHIPHI_20_OFFSET UNITYSDK_OFFSET(0x1894E470)
#define FKOEECADKFF_HMPDCLHIPHI_21_OFFSET UNITYSDK_OFFSET(0x1894E4E0)
#define FKOEECADKFF_HMPDCLHIPHI_22_OFFSET UNITYSDK_OFFSET(0x1894E670)
#define FKOEECADKFF_HMPDCLHIPHI_23_OFFSET UNITYSDK_OFFSET(0x1894EBA0)
#define FKOEECADKFF_HMPDCLHIPHI_24_OFFSET UNITYSDK_OFFSET(0x1894ED30)
#define FKOEECADKFF_HMPDCLHIPHI_25_OFFSET UNITYSDK_OFFSET(0x1894EF80)
#define FKOEECADKFF_HMPDCLHIPHI_26_OFFSET UNITYSDK_OFFSET(0x1894F010)
#define FKOEECADKFF_HMPDCLHIPHI_27_OFFSET UNITYSDK_OFFSET(0x1894F2A0)
#define FKOEECADKFF_HMPDCLHIPHI_28_OFFSET UNITYSDK_OFFSET(0x1894EF00)
#define FKOEECADKFF_HMPDCLHIPHI_29_OFFSET UNITYSDK_OFFSET(0x1894F440)
#define FKOEECADKFF_HMPDCLHIPHI_2_OFFSET UNITYSDK_OFFSET(0x189432C0)
#define FKOEECADKFF_HMPDCLHIPHI_30_OFFSET UNITYSDK_OFFSET(0x189500D0)
#define FKOEECADKFF_HMPDCLHIPHI_31_OFFSET UNITYSDK_OFFSET(0x18950690)
#define FKOEECADKFF_HMPDCLHIPHI_3_OFFSET UNITYSDK_OFFSET(0x18943340)
#define FKOEECADKFF_HMPDCLHIPHI_4_OFFSET UNITYSDK_OFFSET(0x189433B0)
#define FKOEECADKFF_HMPDCLHIPHI_5_OFFSET UNITYSDK_OFFSET(0x18944AF0)
#define FKOEECADKFF_HMPDCLHIPHI_6_OFFSET UNITYSDK_OFFSET(0x18948600)
#define FKOEECADKFF_HMPDCLHIPHI_7_OFFSET UNITYSDK_OFFSET(0x18948730)
#define FKOEECADKFF_HMPDCLHIPHI_8_OFFSET UNITYSDK_OFFSET(0x18948A40)
#define FKOEECADKFF_HMPDCLHIPHI_9_OFFSET UNITYSDK_OFFSET(0x18948B60)
#define FKOEECADKFF_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0x18942750)
#define FKOEECADKFF_JFJIEOAEHBG_OFFSET UNITYSDK_OFFSET(0x18946690)
#define FKOEECADKFF_JIMIFFGCMKE_OFFSET UNITYSDK_OFFSET(0x189438F0)
#define FKOEECADKFF_JKBMNBJCHMK_OFFSET UNITYSDK_OFFSET(0x18941F90)
#define FKOEECADKFF_JNHLNOCBDDK_10_OFFSET UNITYSDK_OFFSET(0x18945970)
#define FKOEECADKFF_JNHLNOCBDDK_11_OFFSET UNITYSDK_OFFSET(0x18945A10)
#define FKOEECADKFF_JNHLNOCBDDK_12_OFFSET UNITYSDK_OFFSET(0x189460E0)
#define FKOEECADKFF_JNHLNOCBDDK_13_OFFSET UNITYSDK_OFFSET(0x18946180)
#define FKOEECADKFF_JNHLNOCBDDK_14_OFFSET UNITYSDK_OFFSET(0x18947940)
#define FKOEECADKFF_JNHLNOCBDDK_15_OFFSET UNITYSDK_OFFSET(0x18947AA0)
#define FKOEECADKFF_JNHLNOCBDDK_16_OFFSET UNITYSDK_OFFSET(0x189480D0)
#define FKOEECADKFF_JNHLNOCBDDK_17_OFFSET UNITYSDK_OFFSET(0x18948000)
#define FKOEECADKFF_JNHLNOCBDDK_18_OFFSET UNITYSDK_OFFSET(0x189489B0)
#define FKOEECADKFF_JNHLNOCBDDK_19_OFFSET UNITYSDK_OFFSET(0x18948AD0)
#define FKOEECADKFF_JNHLNOCBDDK_1_OFFSET UNITYSDK_OFFSET(0x18942960)
#define FKOEECADKFF_JNHLNOCBDDK_20_OFFSET UNITYSDK_OFFSET(0x18948E00)
#define FKOEECADKFF_JNHLNOCBDDK_21_OFFSET UNITYSDK_OFFSET(0x18949390)
#define FKOEECADKFF_JNHLNOCBDDK_22_OFFSET UNITYSDK_OFFSET(0x1894B510)
#define FKOEECADKFF_JNHLNOCBDDK_23_OFFSET UNITYSDK_OFFSET(0x1894C180)
#define FKOEECADKFF_JNHLNOCBDDK_24_OFFSET UNITYSDK_OFFSET(0x1894C990)
#define FKOEECADKFF_JNHLNOCBDDK_25_OFFSET UNITYSDK_OFFSET(0x1894CB80)
#define FKOEECADKFF_JNHLNOCBDDK_26_OFFSET UNITYSDK_OFFSET(0x1894CDA0)
#define FKOEECADKFF_JNHLNOCBDDK_27_OFFSET UNITYSDK_OFFSET(0x1894CE40)
#define FKOEECADKFF_JNHLNOCBDDK_28_OFFSET UNITYSDK_OFFSET(0x1894D460)
#define FKOEECADKFF_JNHLNOCBDDK_29_OFFSET UNITYSDK_OFFSET(0x1894CD20)
#define FKOEECADKFF_JNHLNOCBDDK_2_OFFSET UNITYSDK_OFFSET(0x18942BA0)
#define FKOEECADKFF_JNHLNOCBDDK_30_OFFSET UNITYSDK_OFFSET(0x1894D560)
#define FKOEECADKFF_JNHLNOCBDDK_31_OFFSET UNITYSDK_OFFSET(0x1894D5B0)
#define FKOEECADKFF_JNHLNOCBDDK_32_OFFSET UNITYSDK_OFFSET(0x1894D600)
#define FKOEECADKFF_JNHLNOCBDDK_33_OFFSET UNITYSDK_OFFSET(0x1894D820)
#define FKOEECADKFF_JNHLNOCBDDK_34_OFFSET UNITYSDK_OFFSET(0x1894D9A0)
#define FKOEECADKFF_JNHLNOCBDDK_35_OFFSET UNITYSDK_OFFSET(0x1894FF70)
#define FKOEECADKFF_JNHLNOCBDDK_36_OFFSET UNITYSDK_OFFSET(0x18950430)
#define FKOEECADKFF_JNHLNOCBDDK_3_OFFSET UNITYSDK_OFFSET(0x18942DE0)
#define FKOEECADKFF_JNHLNOCBDDK_4_OFFSET UNITYSDK_OFFSET(0x18943420)
#define FKOEECADKFF_JNHLNOCBDDK_5_OFFSET UNITYSDK_OFFSET(0x18943510)
#define FKOEECADKFF_JNHLNOCBDDK_6_OFFSET UNITYSDK_OFFSET(0x18943DF0)
#define FKOEECADKFF_JNHLNOCBDDK_7_OFFSET UNITYSDK_OFFSET(0x18944030)
#define FKOEECADKFF_JNHLNOCBDDK_8_OFFSET UNITYSDK_OFFSET(0x18944270)
#define FKOEECADKFF_JNHLNOCBDDK_9_OFFSET UNITYSDK_OFFSET(0x18945540)
#define FKOEECADKFF_JNHLNOCBDDK_OFFSET UNITYSDK_OFFSET(0x18942840)
#define FKOEECADKFF_KKDFOPPPBMI_OFFSET UNITYSDK_OFFSET(0x18941A60)
#define FKOEECADKFF_KLAPLBLECAJ_OFFSET UNITYSDK_OFFSET(0x189472E0)
#define FKOEECADKFF_LBOOBNLLCDF_OFFSET UNITYSDK_OFFSET(0x189410C0)
#define FKOEECADKFF_LHLEHMKJJDN_OFFSET UNITYSDK_OFFSET(0x18947720)
#define FKOEECADKFF_MBIADBGKJOI_OFFSET UNITYSDK_OFFSET(0x18943850)
#define FKOEECADKFF_MEHJINEJNEL_OFFSET UNITYSDK_OFFSET(0x18943AA0)
#define FKOEECADKFF_MMMKNLGMHEG_OFFSET UNITYSDK_OFFSET(0x18940F00)
#define FKOEECADKFF_NNFINELFLHO_OFFSET UNITYSDK_OFFSET(0x189464E0)
#define FKOEECADKFF_NOAGCKIJHOA_OFFSET UNITYSDK_OFFSET(0x18941320)
#define FKOEECADKFF_NPDHPMBCKLC_OFFSET UNITYSDK_OFFSET(0x18945280)
#define FKOEECADKFF_OLJPNBAHKGI_OFFSET UNITYSDK_OFFSET(0x189453F0)
#define FKOEECADKFF_PFJJBODEHIG_OFFSET UNITYSDK_OFFSET(0x18951C00)
#define FKOEECADKFF_PKLFDADEFMG_OFFSET UNITYSDK_OFFSET(0x18941120)

inline static constexpr unsigned int FKOEECADKFF_TypeDefinitionIndex = 60263;

	class FKOEECADKFF : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_FLJBIDMIJIJ()
		{
			return (::System::String**)UnitySDK::FromName("", "FKOEECADKFF")->GetStaticField(0x59070);
		}

		static ::System::String** StaticGet_FHCDEEHOFBD()
		{
			return (::System::String**)UnitySDK::FromName("", "FKOEECADKFF")->GetStaticField(0x59078);
		}

		static ::System::UInt32* StaticGet_EFCBDFLMGKA()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FKOEECADKFF")->GetStaticField(0x12FB0);
		}

		static ::System::UInt32* StaticGet_IPEALDPAGHI()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FKOEECADKFF")->GetStaticField(0x12FB4);
		}

		static ::System::Boolean* StaticGet_CCNOKGJHEBF()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FKOEECADKFF")->GetStaticField(0x12FB8);
		}

		// static const ::System::Object IFPENPJHOHM; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKOEECADKFF_CCTOR_OFFSET))();
		}

		static ::System::Object* MMMKNLGMHEG(::INGNCPPMOFG a1)
		{
			return ((::System::Object*(*)(::INGNCPPMOFG))((::PBYTE)hIl2Cpp + FKOEECADKFF_MMMKNLGMHEG_OFFSET))(a1);
		}

		static ::System::String* LBOOBNLLCDF()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FKOEECADKFF_LBOOBNLLCDF_OFFSET))();
		}

		static ::System::Void PKLFDADEFMG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKOEECADKFF_PKLFDADEFMG_OFFSET))();
		}

		static ::System::Void NOAGCKIJHOA(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FKOEECADKFF_NOAGCKIJHOA_OFFSET))(a1);
		}

		static ::System::String* AOFAGGGBMJF(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FKOEECADKFF_AOFAGGGBMJF_OFFSET))(a1);
		}

		static ::JDGIIPJCPID* EFMKONMGMNA(::System::String* a1, ::OKFLAHFIBCM* a2, ::System::Boolean a3)
		{
			return ((::JDGIIPJCPID*(*)(::System::String*, ::OKFLAHFIBCM*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKOEECADKFF_EFMKONMGMNA_OFFSET))(a1, a2, a3);
		}

		static ::JDGIIPJCPID* EFMKONMGMNA_1(::System::String* a1)
		{
			return ((::JDGIIPJCPID*(*)(::System::String*))((::PBYTE)hIl2Cpp + FKOEECADKFF_EFMKONMGMNA_1_OFFSET))(a1);
		}

		static ::System::Boolean JKBMNBJCHMK(::Il2CppArray<::System::Byte>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JKBMNBJCHMK_OFFSET))(a1, a2, a3, a4);
		}

		static ::EEFMAMCHOMN* HMPDCLHIPHI(::INGNCPPMOFG a1)
		{
			return ((::EEFMAMCHOMN*(*)(::INGNCPPMOFG))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_OFFSET))(a1);
		}

		static ::INGNCPPMOFG JNHLNOCBDDK(::EEFMAMCHOMN* a1)
		{
			return ((::INGNCPPMOFG(*)(::EEFMAMCHOMN*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_OFFSET))(a1);
		}

		static ::Il2CppArray<::AGGHHCLPALK*>* JNHLNOCBDDK_1(::Google::Protobuf::Collections::RepeatedField_1<::DIFAPHOCGKL*>* a1)
		{
			return ((::Il2CppArray<::AGGHHCLPALK*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::DIFAPHOCGKL*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::JGGNIOIBDBC*>* JNHLNOCBDDK_2(::Google::Protobuf::Collections::RepeatedField_1<::ELLHFEAIKFG*>* a1)
		{
			return ((::Il2CppArray<::JGGNIOIBDBC*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::ELLHFEAIKFG*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_2_OFFSET))(a1);
		}

		static ::NMBMHCNGCFG* JNHLNOCBDDK_3(::Google::Protobuf::Collections::RepeatedField_1<::ELGFKGOHGIO*>* a1)
		{
			return ((::NMBMHCNGCFG*(*)(::Google::Protobuf::Collections::RepeatedField_1<::ELGFKGOHGIO*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_3_OFFSET))(a1);
		}

		static ::ELGFKGOHGIO* HMPDCLHIPHI_1(::ODAGKNPDBMH a1)
		{
			return ((::ELGFKGOHGIO*(*)(::ODAGKNPDBMH))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_1_OFFSET))(a1);
		}

		static ::AJLNGGEEFKD* HMPDCLHIPHI_2(::CMIMHAHPAOC a1)
		{
			return ((::AJLNGGEEFKD*(*)(::CMIMHAHPAOC))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_2_OFFSET))(a1);
		}

		static ::DIFAPHOCGKL* HMPDCLHIPHI_3(::AGGHHCLPALK* a1)
		{
			return ((::DIFAPHOCGKL*(*)(::AGGHHCLPALK*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_3_OFFSET))(a1);
		}

		static ::ELLHFEAIKFG* HMPDCLHIPHI_4(::JGGNIOIBDBC* a1)
		{
			return ((::ELLHFEAIKFG*(*)(::JGGNIOIBDBC*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_4_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* JNHLNOCBDDK_4(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_4_OFFSET))(a1);
		}

		static ::RPG::GameCore::LineUpCharacter* JNHLNOCBDDK_5(::PIOGCEBHNBF* a1)
		{
			return ((::RPG::GameCore::LineUpCharacter*(*)(::PIOGCEBHNBF*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_5_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* JNHLNOCBDDK_6(::Google::Protobuf::Collections::RepeatedField_1<::PIOGCEBHNBF*>* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::PIOGCEBHNBF*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_6_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* JNHLNOCBDDK_7(::Google::Protobuf::Collections::RepeatedField_1<::OKGKPCLMCNC*>* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::OKGKPCLMCNC*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_7_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::MazeBuffData*>* JNHLNOCBDDK_8(::Google::Protobuf::Collections::RepeatedField_1<::GMIIFDNHLFN*>* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::MazeBuffData*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::GMIIFDNHLFN*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_8_OFFSET))(a1);
		}

		static ::PIOGCEBHNBF* HMPDCLHIPHI_5(::RPG::GameCore::LineUpCharacter* a1)
		{
			return ((::PIOGCEBHNBF*(*)(::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_5_OFFSET))(a1);
		}

		static ::OKGKPCLMCNC* OLJPNBAHKGI(::RPG::GameCore::LineUpCharacter* a1)
		{
			return ((::OKGKPCLMCNC*(*)(::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + FKOEECADKFF_OLJPNBAHKGI_OFFSET))(a1);
		}

		static ::Il2CppArray<::HIJGDJLAOKI*>* JNHLNOCBDDK_9(::Google::Protobuf::Collections::RepeatedField_1<::LAOKFPFHBHH*>* a1)
		{
			return ((::Il2CppArray<::HIJGDJLAOKI*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::LAOKFPFHBHH*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_9_OFFSET))(a1);
		}

		static ::CHHGFHIPHAE* JNHLNOCBDDK_10(::IGCMEFNJHKC* a1)
		{
			return ((::CHHGFHIPHAE*(*)(::IGCMEFNJHKC*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_10_OFFSET))(a1);
		}

		static ::AECMCBAHALK* JNHLNOCBDDK_11(::LDKIDFEJNFA* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::AECMCBAHALK*(*)(::LDKIDFEJNFA*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_11_OFFSET))(a1, a2, a3);
		}

		static ::CHHGFHIPHAE* JNHLNOCBDDK_12(::HLNNEGIIMOH* a1)
		{
			return ((::CHHGFHIPHAE*(*)(::HLNNEGIIMOH*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_12_OFFSET))(a1);
		}

		static ::AECMCBAHALK* JNHLNOCBDDK_13(::AFJEOHMFDPG* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::AECMCBAHALK*(*)(::AFJEOHMFDPG*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_13_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BCOKIBPEACH(::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* a1, ::System::Collections::Generic::List_1<::NJIJCDNNBNI>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>*, ::System::Collections::Generic::List_1<::NJIJCDNNBNI>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKOEECADKFF_BCOKIBPEACH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NNFINELFLHO(::System::Collections::Generic::List_1<::NJIJCDNNBNI>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::NJIJCDNNBNI>*, ::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_NNFINELFLHO_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::CCGFLDDDIPN*>* JFJIEOAEHBG(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::DFMGCEABBAD*>* a1)
		{
			return ((::Il2CppArray<::CCGFLDDDIPN*>*(*)(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::DFMGCEABBAD*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JFJIEOAEHBG_OFFSET))(a1);
		}

		static ::Il2CppArray<::NIODADALNHA*>* HIHDLJKLIAJ(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::DFMGCEABBAD*>* a1)
		{
			return ((::Il2CppArray<::NIODADALNHA*>*(*)(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::DFMGCEABBAD*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HIHDLJKLIAJ_OFFSET))(a1);
		}

		static ::Il2CppArray<::HOIGPAEEAHD*>* KLAPLBLECAJ(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::DFMGCEABBAD*>* a1)
		{
			return ((::Il2CppArray<::HOIGPAEEAHD*>*(*)(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::DFMGCEABBAD*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_KLAPLBLECAJ_OFFSET))(a1);
		}

		static ::Il2CppArray<::PBNONKAIAMK*>* BMLFJNDCCJO(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::DFMGCEABBAD*>* a1)
		{
			return ((::Il2CppArray<::PBNONKAIAMK*>*(*)(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::DFMGCEABBAD*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_BMLFJNDCCJO_OFFSET))(a1);
		}

		static ::Il2CppArray<::PBNONKAIAMK*>* LHLEHMKJJDN(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::DFMGCEABBAD*>* a1)
		{
			return ((::Il2CppArray<::PBNONKAIAMK*>*(*)(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::DFMGCEABBAD*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_LHLEHMKJJDN_OFFSET))(a1);
		}

		static ::FGKJPPIIKDN* JNHLNOCBDDK_14(::KIAICMELIMM* a1)
		{
			return ((::FGKJPPIIKDN*(*)(::KIAICMELIMM*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_14_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleGridFightAvatarData* JNHLNOCBDDK_15(::BJGJBNJDLIK* a1)
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::BJGJBNJDLIK*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_15_OFFSET))(a1);
		}

		static ::ABOOGEJAPHO* JNHLNOCBDDK_16(::PKDNDNABKII* a1)
		{
			return ((::ABOOGEJAPHO*(*)(::PKDNDNABKII*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_16_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleGridFightEquipData* JNHLNOCBDDK_17(::ACFLKPFDHIM* a1)
		{
			return ((::RPG::GameCore::BattleGridFightEquipData*(*)(::ACFLKPFDHIM*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_17_OFFSET))(a1);
		}

		static ::ACFLKPFDHIM* HMPDCLHIPHI_6(::RPG::GameCore::BattleGridFightEquipData* a1)
		{
			return ((::ACFLKPFDHIM*(*)(::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_6_OFFSET))(a1);
		}

		static ::BJGJBNJDLIK* HMPDCLHIPHI_7(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::BJGJBNJDLIK*(*)(::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_7_OFFSET))(a1);
		}

		static ::FFLFKJJLJEJ* JNHLNOCBDDK_18(::BGLCGNCLHLJ* a1)
		{
			return ((::FFLFKJJLJEJ*(*)(::BGLCGNCLHLJ*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_18_OFFSET))(a1);
		}

		static ::BGLCGNCLHLJ* HMPDCLHIPHI_8(::FFLFKJJLJEJ* a1)
		{
			return ((::BGLCGNCLHLJ*(*)(::FFLFKJJLJEJ*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_8_OFFSET))(a1);
		}

		static ::KEHCDMCIBJJ* JNHLNOCBDDK_19(::KHFHMJEMBOF* a1)
		{
			return ((::KEHCDMCIBJJ*(*)(::KHFHMJEMBOF*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_19_OFFSET))(a1);
		}

		static ::KHFHMJEMBOF* HMPDCLHIPHI_9(::KEHCDMCIBJJ* a1)
		{
			return ((::KHFHMJEMBOF*(*)(::KEHCDMCIBJJ*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_9_OFFSET))(a1);
		}

		static ::PKDNDNABKII* HMPDCLHIPHI_10(::ABOOGEJAPHO* a1)
		{
			return ((::PKDNDNABKII*(*)(::ABOOGEJAPHO*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_10_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleGridFightTeamTraitData* JNHLNOCBDDK_20(::NIEGDAPHKGC* a1)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::NIEGDAPHKGC*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_20_OFFSET))(a1);
		}

		static ::NIEGDAPHKGC* HMPDCLHIPHI_11(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::NIEGDAPHKGC*(*)(::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_11_OFFSET))(a1);
		}

		static ::GMMNMPCKJEM* JNHLNOCBDDK_21(::OJCBOMCCPDB* a1, ::System::Boolean a2)
		{
			return ((::GMMNMPCKJEM*(*)(::OJCBOMCCPDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_21_OFFSET))(a1, a2);
		}

		static ::System::Void JNHLNOCBDDK_22(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Double>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Double>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_22_OFFSET))(a1, a2);
		}

		static ::System::Void HMPDCLHIPHI_12(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Double>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Double>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_12_OFFSET))(a1, a2);
		}

		static ::System::Void FJBNOPHOKDN(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt64>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt64>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_FJBNOPHOKDN_OFFSET))(a1, a2);
		}

		static ::System::Void NPDHPMBCKLC(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* a1, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt64>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt64>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_NPDHPMBCKLC_OFFSET))(a1, a2);
		}

		static ::NGDGDIGJPFP* JNHLNOCBDDK_23(::LFJNNOOOGOH* a1)
		{
			return ((::NGDGDIGJPFP*(*)(::LFJNNOOOGOH*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_23_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleRogueData* JNHLNOCBDDK_24(::BLJEJFMKEII* a1)
		{
			return ((::RPG::GameCore::BattleRogueData*(*)(::BLJEJFMKEII*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_24_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleRogueMagicData* JNHLNOCBDDK_25(::CJHPPLHFNAB* a1)
		{
			return ((::RPG::GameCore::BattleRogueMagicData*(*)(::CJHPPLHFNAB*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_25_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleRogueMagicData_RoundCount* JNHLNOCBDDK_26(::EMLFDPFAPJP* a1)
		{
			return ((::RPG::GameCore::BattleRogueMagicData_RoundCount*(*)(::EMLFDPFAPJP*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_26_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleRogueMagicData_Scepter* JNHLNOCBDDK_27(::KCIEGDGJMBE* a1)
		{
			return ((::RPG::GameCore::BattleRogueMagicData_Scepter*(*)(::KCIEGDGJMBE*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_27_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleRogueMagicData_MagicUnit* JNHLNOCBDDK_28(::OJMPKMNINGK* a1)
		{
			return ((::RPG::GameCore::BattleRogueMagicData_MagicUnit*(*)(::OJMPKMNINGK*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_28_OFFSET))(a1);
		}

		static ::RPG::GameCore::BattleRogueTournData* JNHLNOCBDDK_29(::FHOHCAIFHNA* a1)
		{
			return ((::RPG::GameCore::BattleRogueTournData*(*)(::FHOHCAIFHNA*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_29_OFFSET))(a1);
		}

		static ::FAPIMOFPHBB* JNHLNOCBDDK_30(::PKPFAHEBJIO* a1)
		{
			return ((::FAPIMOFPHBB*(*)(::PKPFAHEBJIO*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_30_OFFSET))(a1);
		}

		static ::ONIIPFNFOFB* JNHLNOCBDDK_31(::GLIBGKGGEJL* a1)
		{
			return ((::ONIIPFNFOFB*(*)(::GLIBGKGGEJL*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_31_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::StageMonsterRewardItem*>* JNHLNOCBDDK_32(::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::StageMonsterRewardItem*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_32_OFFSET))(a1);
		}

		static ::Il2CppArray<::OKELLDKLMGF*>* JNHLNOCBDDK_33(::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* a1)
		{
			return ((::Il2CppArray<::OKELLDKLMGF*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_33_OFFSET))(a1);
		}

		static ::Il2CppArray<::FEKLMJPJIKG*>* JNHLNOCBDDK_34(::Google::Protobuf::Collections::RepeatedField_1<::NPOICBFPPHK*>* a1)
		{
			return ((::Il2CppArray<::FEKLMJPJIKG*>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::NPOICBFPPHK*>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_34_OFFSET))(a1);
		}

		static ::LAOKFPFHBHH* HMPDCLHIPHI_13(::HIJGDJLAOKI* a1)
		{
			return ((::LAOKFPFHBHH*(*)(::HIJGDJLAOKI*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_13_OFFSET))(a1);
		}

		static ::IGCMEFNJHKC* HMPDCLHIPHI_14(::CHHGFHIPHAE* a1)
		{
			return ((::IGCMEFNJHKC*(*)(::CHHGFHIPHAE*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_14_OFFSET))(a1);
		}

		static ::LDKIDFEJNFA* HMPDCLHIPHI_15(::AECMCBAHALK* a1)
		{
			return ((::LDKIDFEJNFA*(*)(::AECMCBAHALK*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_15_OFFSET))(a1);
		}

		static ::GMIIFDNHLFN* HMPDCLHIPHI_16(::RPG::GameCore::MazeBuffData* a1)
		{
			return ((::GMIIFDNHLFN*(*)(::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_16_OFFSET))(a1);
		}

		static ::COMGNGLLCFN* HMPDCLHIPHI_17(::CCGFLDDDIPN* a1)
		{
			return ((::COMGNGLLCFN*(*)(::CCGFLDDDIPN*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_17_OFFSET))(a1);
		}

		static ::COMGNGLLCFN* HMPDCLHIPHI_18(::NIODADALNHA* a1)
		{
			return ((::COMGNGLLCFN*(*)(::NIODADALNHA*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_18_OFFSET))(a1);
		}

		static ::COMGNGLLCFN* HMPDCLHIPHI_19(::HOIGPAEEAHD* a1)
		{
			return ((::COMGNGLLCFN*(*)(::HOIGPAEEAHD*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_19_OFFSET))(a1);
		}

		static ::COMGNGLLCFN* HMPDCLHIPHI_20(::PBNONKAIAMK* a1)
		{
			return ((::COMGNGLLCFN*(*)(::PBNONKAIAMK*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_20_OFFSET))(a1);
		}

		static ::KIAICMELIMM* HMPDCLHIPHI_21(::FGKJPPIIKDN* a1)
		{
			return ((::KIAICMELIMM*(*)(::FGKJPPIIKDN*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_21_OFFSET))(a1);
		}

		static ::LFJNNOOOGOH* HMPDCLHIPHI_22(::NGDGDIGJPFP* a1)
		{
			return ((::LFJNNOOOGOH*(*)(::NGDGDIGJPFP*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_22_OFFSET))(a1);
		}

		static ::BLJEJFMKEII* HMPDCLHIPHI_23(::RPG::GameCore::BattleRogueData* a1)
		{
			return ((::BLJEJFMKEII*(*)(::RPG::GameCore::BattleRogueData*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_23_OFFSET))(a1);
		}

		static ::CJHPPLHFNAB* HMPDCLHIPHI_24(::RPG::GameCore::BattleRogueMagicData* a1)
		{
			return ((::CJHPPLHFNAB*(*)(::RPG::GameCore::BattleRogueMagicData*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_24_OFFSET))(a1);
		}

		static ::EMLFDPFAPJP* HMPDCLHIPHI_25(::RPG::GameCore::BattleRogueMagicData_RoundCount* a1)
		{
			return ((::EMLFDPFAPJP*(*)(::RPG::GameCore::BattleRogueMagicData_RoundCount*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_25_OFFSET))(a1);
		}

		static ::KCIEGDGJMBE* HMPDCLHIPHI_26(::RPG::GameCore::BattleRogueMagicData_Scepter* a1)
		{
			return ((::KCIEGDGJMBE*(*)(::RPG::GameCore::BattleRogueMagicData_Scepter*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_26_OFFSET))(a1);
		}

		static ::OJMPKMNINGK* HMPDCLHIPHI_27(::RPG::GameCore::BattleRogueMagicData_MagicUnit* a1)
		{
			return ((::OJMPKMNINGK*(*)(::RPG::GameCore::BattleRogueMagicData_MagicUnit*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_27_OFFSET))(a1);
		}

		static ::FHOHCAIFHNA* HMPDCLHIPHI_28(::RPG::GameCore::BattleRogueTournData* a1)
		{
			return ((::FHOHCAIFHNA*(*)(::RPG::GameCore::BattleRogueTournData*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_28_OFFSET))(a1);
		}

		static ::OJCBOMCCPDB* HMPDCLHIPHI_29(::GMMNMPCKJEM* a1)
		{
			return ((::OJCBOMCCPDB*(*)(::GMMNMPCKJEM*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_29_OFFSET))(a1);
		}

		static ::PKFBNIHNLGG JNHLNOCBDDK_35(::HOLHBEOHEJD* a1)
		{
			return ((::PKFBNIHNLGG(*)(::HOLHBEOHEJD*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_35_OFFSET))(a1);
		}

		static ::HOLHBEOHEJD* HMPDCLHIPHI_30(::PKFBNIHNLGG a1)
		{
			return ((::HOLHBEOHEJD*(*)(::PKFBNIHNLGG))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_30_OFFSET))(a1);
		}

		static ::JMHDGNNIFCA* JNHLNOCBDDK_36(::JIEAANCEIJP* a1)
		{
			return ((::JMHDGNNIFCA*(*)(::JIEAANCEIJP*))((::PBYTE)hIl2Cpp + FKOEECADKFF_JNHLNOCBDDK_36_OFFSET))(a1);
		}

		static ::JIEAANCEIJP* HMPDCLHIPHI_31(::JMHDGNNIFCA* a1)
		{
			return ((::JIEAANCEIJP*(*)(::JMHDGNNIFCA*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HMPDCLHIPHI_31_OFFSET))(a1);
		}

		static ::System::UInt32 MBIADBGKJOI(::ACINIALAFDE a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::ACINIALAFDE, ::System::UInt32))((::PBYTE)hIl2Cpp + FKOEECADKFF_MBIADBGKJOI_OFFSET))(a1, a2);
		}

		static ::System::UInt32 JIMIFFGCMKE(::ACINIALAFDE a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::ACINIALAFDE, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FKOEECADKFF_JIMIFFGCMKE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 HDKCEBGKOGI(::ACINIALAFDE a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::ACINIALAFDE, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FKOEECADKFF_HDKCEBGKOGI_OFFSET))(a1, a2, a3, a4);
		}

		static ::NMBMHCNGCFG* MEHJINEJNEL(::PIOGCEBHNBF* a1)
		{
			return ((::NMBMHCNGCFG*(*)(::PIOGCEBHNBF*))((::PBYTE)hIl2Cpp + FKOEECADKFF_MEHJINEJNEL_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* FGKCNFPEPGM(::Google::Protobuf::IMessage* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Google::Protobuf::IMessage*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FKOEECADKFF_FGKCNFPEPGM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DBMPNDHOEDJ(::Google::Protobuf::IMessage* a1, ::System::IO::Stream* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::Google::Protobuf::IMessage*, ::System::IO::Stream*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FKOEECADKFF_DBMPNDHOEDJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::Byte>* PFJJBODEHIG(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_PFJJBODEHIG_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* KKDFOPPPBMI(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_KKDFOPPPBMI_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* DHJEKKOBGFI(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_DHJEKKOBGFI_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GBMBHEAGHCG(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FKOEECADKFF_GBMBHEAGHCG_OFFSET))(a1);
		}

		static ::System::Void HHGAHLCOGNG(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FKOEECADKFF_HHGAHLCOGNG_OFFSET))(a1, a2);
		}

	};
