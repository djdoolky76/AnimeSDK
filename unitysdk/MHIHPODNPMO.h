#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class BABNOKHOBCF;
class HIECHPAKPFL;
class INMMPMDELKE;
class MNCOPNHONHO;
class OEOAMBFMNIB;
namespace Entitas { class IComponent; }
namespace Entitas { class IGroup; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAnimalAttachBillboardData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelProgressTipsData; }
namespace RPG::GameCore { class FourRotateVoxelEntranceConfig; }
namespace RPG::GameCore { class FourRotateVoxelGuideHintBillboardConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelVarCondition; }
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHIHPODNPMO_AFPICLJFLDG_OFFSET UNITYSDK_OFFSET(0xB93E0C0)
#define MHIHPODNPMO_ANKDKINLHIN_OFFSET UNITYSDK_OFFSET(0xB93F3B0)
#define MHIHPODNPMO_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xB941260)
#define MHIHPODNPMO_BDJBEOELBKM_OFFSET UNITYSDK_OFFSET(0xB93D3C0)
#define MHIHPODNPMO_BPHOOOHHHLN_OFFSET UNITYSDK_OFFSET(0xB93C150)
#define MHIHPODNPMO_CAPMNNPLEBI_OFFSET UNITYSDK_OFFSET(0xB9406C0)
#define MHIHPODNPMO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB942F40)
#define MHIHPODNPMO_CDFKKIHDOII_OFFSET UNITYSDK_OFFSET(0xB93EB60)
#define MHIHPODNPMO_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0xB941C60)
#define MHIHPODNPMO_CHDPHLEFPLL_OFFSET UNITYSDK_OFFSET(0xB93F450)
#define MHIHPODNPMO_CJGODEIBHOG_OFFSET UNITYSDK_OFFSET(0xB940AC0)
#define MHIHPODNPMO_CTOR_OFFSET UNITYSDK_OFFSET(0xB93BA30)
#define MHIHPODNPMO_DMJIEKABOLA_OFFSET UNITYSDK_OFFSET(0xB93F540)
#define MHIHPODNPMO_EEHBEPJAMEI_OFFSET UNITYSDK_OFFSET(0xB93DBF0)
#define MHIHPODNPMO_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB93F620)
#define MHIHPODNPMO_FBJCFGIPHOL_OFFSET UNITYSDK_OFFSET(0xB9409A0)
#define MHIHPODNPMO_FJGGODFCDCJ_OFFSET UNITYSDK_OFFSET(0xB93DEC0)
#define MHIHPODNPMO_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0xB942370)
#define MHIHPODNPMO_GBJHNBHFPPM_OFFSET UNITYSDK_OFFSET(0xB93C230)
#define MHIHPODNPMO_GCMBPNMAHEK_OFFSET UNITYSDK_OFFSET(0xB93EEB0)
#define MHIHPODNPMO_GOAMGGMMMND_OFFSET UNITYSDK_OFFSET(0xB93F0F0)
#define MHIHPODNPMO_GOLIDAKNPIJ_OFFSET UNITYSDK_OFFSET(0xB93D2A0)
#define MHIHPODNPMO_GPDGILEKOMF_OFFSET UNITYSDK_OFFSET(0xB93C000)
#define MHIHPODNPMO_HFIAIGEFBFM_OFFSET UNITYSDK_OFFSET(0xB9425C0)
#define MHIHPODNPMO_IABPLAKDNNJ_OFFSET UNITYSDK_OFFSET(0xB941760)
#define MHIHPODNPMO_IFIBHDBIFJH_OFFSET UNITYSDK_OFFSET(0xB93D0E0)
#define MHIHPODNPMO_IHOLFJEIEDJ_OFFSET UNITYSDK_OFFSET(0xB941A90)
#define MHIHPODNPMO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB93E540)
#define MHIHPODNPMO_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0xB941FA0)
#define MHIHPODNPMO_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0xB93D220)
#define MHIHPODNPMO_JFMLLMFNJLM_OFFSET UNITYSDK_OFFSET(0xB93EDD0)
#define MHIHPODNPMO_KBPGENFPPCO_OFFSET UNITYSDK_OFFSET(0xB940B20)
#define MHIHPODNPMO_KDGEHBAFBJK_OFFSET UNITYSDK_OFFSET(0xB942D30)
#define MHIHPODNPMO_KKJNIIJEDCA_OFFSET UNITYSDK_OFFSET(0xB93CC10)
#define MHIHPODNPMO_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0xB941F00)
#define MHIHPODNPMO_MDEKKFEOKDH_OFFSET UNITYSDK_OFFSET(0xB941430)
#define MHIHPODNPMO_NAKDFBLLBLP_OFFSET UNITYSDK_OFFSET(0xB9403D0)
#define MHIHPODNPMO_NFBMPGADGFP_OFFSET UNITYSDK_OFFSET(0xB942760)
#define MHIHPODNPMO_NHNBBEKGDEM_OFFSET UNITYSDK_OFFSET(0xB942B50)
#define MHIHPODNPMO_NLEKHKKGBHP_OFFSET UNITYSDK_OFFSET(0xB9412A0)
#define MHIHPODNPMO_NNHGODBMEPL_OFFSET UNITYSDK_OFFSET(0xB940940)
#define MHIHPODNPMO_OFBKIOEEMKE_OFFSET UNITYSDK_OFFSET(0xB93D9C0)
#define MHIHPODNPMO_OHDIJBAIHNE_OFFSET UNITYSDK_OFFSET(0xB93FFA0)
#define MHIHPODNPMO_OHMNDEGOBMD_OFFSET UNITYSDK_OFFSET(0xB93DDB0)
#define MHIHPODNPMO_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB940CF0)
#define MHIHPODNPMO___TRYFINISHGAMEAFTERREWARD_B__15_0_OFFSET UNITYSDK_OFFSET(0xB942FC0)

inline static constexpr unsigned int MHIHPODNPMO_TypeDefinitionIndex = 76776;

	class MHIHPODNPMO : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::Dictionary_2<::INMMPMDELKE*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* KJJHDDDIPJN; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::INMMPMDELKE*>* GLFODDENPOF; // 0x20
		::BABNOKHOBCF* FKINCGODJEP; // 0x28
		::System::Collections::Generic::Dictionary_2<::INMMPMDELKE*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* MOFKEHBPAEF; // 0x30
		::System::Collections::Generic::Dictionary_2<::INMMPMDELKE*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelProgressTipsData*>* OGDNCPGCFEP; // 0x38
		::Entitas::IGroup* HNGMCHOLELK; // 0x40
		::Entitas::IGroup* BJLLMDGBGKL; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0x50
		::RPG::GameCore::FourRotateVoxelPortalConfig* BGAOAGMGJKI; // 0x58
		::Entitas::IGroup* NJJIHFCPPBF; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple>*>* IKBEHONCHMM; // 0x68
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* FDFBDBKGIHH; // 0x70
		::System::Collections::Generic::List_1<::INMMPMDELKE*>* MBCFFPGIIME; // 0x78
		::System::Single ANFKIKEFGAN; // 0x80
		::System::UInt32 EHCPMCOCODB; // 0x84
		::System::Boolean KDBFJBKPBJP; // 0x88
		::System::Byte _padding0[0x3];
		::System::Int32 ADJMAIEKHGD; // 0x8C
		::System::Int32 EACONPIEIBO; // 0x90
		::System::Single LECBDFEEAMI; // 0x94
		::System::Boolean EDHFBDOGOLO; // 0x98
		::System::Boolean PFEMHADNCKP; // 0x99
		::System::Boolean JHFJHMMFBNL; // 0x9A
		::System::Boolean LJCCDOMODCP; // 0x9B
		::System::Boolean KAKFPBFBKGG; // 0x9C
		::System::Boolean GPFFNLIFHBC; // 0x9D
		::System::Boolean FGMEGPMHJLG; // 0x9E
		::System::Boolean BFPOBJEBCEN; // 0x9F
		static ::System::String** StaticGet_FJOJCABLAFI()
		{
			return (::System::String**)UnitySDK::FromName("", "MHIHPODNPMO")->GetStaticField(0x6FB70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_DJIIBGMFPPJ()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MHIHPODNPMO")->GetStaticField(0x6FB78);
		}

		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHIHPODNPMO_CCTOR_OFFSET))();
		}

		::System::Void GPDGILEKOMF(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_GPDGILEKOMF_OFFSET))(this, a1);
		}

		::System::Void GBJHNBHFPPM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_GBJHNBHFPPM_OFFSET))(this, a1);
		}

		::System::Void OFBKIOEEMKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_OFBKIOEEMKE_OFFSET))(this, a1);
		}

		::System::Void EEHBEPJAMEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_EEHBEPJAMEI_OFFSET))(this);
		}

		::System::Void OHMNDEGOBMD(::RPG::GameCore::FourRotateVoxelEntranceConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelEntranceConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MHIHPODNPMO_OHMNDEGOBMD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KKJNIIJEDCA(::INMMPMDELKE* a1, ::RPG::Client::QuestData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_KKJNIIJEDCA_OFFSET))(this, a1, a2);
		}

		::System::Void FJGGODFCDCJ(::OEOAMBFMNIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEOAMBFMNIB*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_FJGGODFCDCJ_OFFSET))(this, a1);
		}

		::System::Void BPHOOOHHHLN(::INMMPMDELKE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + MHIHPODNPMO_BPHOOOHHHLN_OFFSET))(this, a1, a2);
		}

		::System::Void AFPICLJFLDG(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_AFPICLJFLDG_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_INITIALIZE_OFFSET))(this);
		}

		::System::Void CDFKKIHDOII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_CDFKKIHDOII_OFFSET))(this);
		}

		::System::Void GCMBPNMAHEK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_GCMBPNMAHEK_OFFSET))(this, a1, a2);
		}

		::System::Void CHDPHLEFPLL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_CHDPHLEFPLL_OFFSET))(this, a1);
		}

		::System::Void GOAMGGMMMND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_GOAMGGMMMND_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_EXECUTE_OFFSET))(this);
		}

		::System::Void KBPGENFPPCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_KBPGENFPPCO_OFFSET))(this);
		}

		::System::Boolean NNHGODBMEPL(::HIECHPAKPFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIECHPAKPFL*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_NNHGODBMEPL_OFFSET))(this, a1);
		}

		::INMMPMDELKE* CAPMNNPLEBI()
		{
			return ((::INMMPMDELKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_CAPMNNPLEBI_OFFSET))(this);
		}

		::System::Void FBJCFGIPHOL(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_FBJCFGIPHOL_OFFSET))(this, a1);
		}

		::System::Void CJGODEIBHOG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHIHPODNPMO_CJGODEIBHOG_OFFSET))(this, a1);
		}

		::System::Void NAKDFBLLBLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_NAKDFBLLBLP_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_TEARDOWN_OFFSET))(this);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void NLEKHKKGBHP(::RPG::GameCore::FourRotateVoxelPortalConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelPortalConfig*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_NLEKHKKGBHP_OFFSET))(this, a1);
		}

		::System::Boolean JFMLLMFNJLM(::RPG::GameCore::FourRotateVoxelPortalConfig* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelPortalConfig*, ::System::String*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_JFMLLMFNJLM_OFFSET))(this, a1, a2);
		}

		::System::Void ANKDKINLHIN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHIHPODNPMO_ANKDKINLHIN_OFFSET))(this, a1);
		}

		::System::Void DMJIEKABOLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_DMJIEKABOLA_OFFSET))(this);
		}

		::System::Void OHDIJBAIHNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO_OHDIJBAIHNE_OFFSET))(this);
		}

		::System::Boolean IFIBHDBIFJH(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_IFIBHDBIFJH_OFFSET))(this, a1);
		}

		::System::Boolean GOLIDAKNPIJ(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_GOLIDAKNPIJ_OFFSET))(this, a1);
		}

		::System::Void IHOLFJEIEDJ(::Entitas::IGroup* a1, ::INMMPMDELKE* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup*, ::INMMPMDELKE*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_IHOLFJEIEDJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean LAGAFLIFFMN(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_LAGAFLIFFMN_OFFSET))(this, a1, a2);
		}

		::System::Void JCONBLBJFJJ(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_JCONBLBJFJJ_OFFSET))(this, a1);
		}

		::System::Void JCONBLBJFJJ_1(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_JCONBLBJFJJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void CFDCFBDGKEB(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_CFDCFBDGKEB_OFFSET))(this, a1, a2);
		}

		::System::Void FNHOOMOJJJO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_FNHOOMOJJJO_OFFSET))(this, a1, a2);
		}

		::System::Boolean MDEKKFEOKDH(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_MDEKKFEOKDH_OFFSET))(this, a1, a2);
		}

		::System::Void HFIAIGEFBFM(::Entitas::IGroup* a1, ::INMMPMDELKE* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup*, ::INMMPMDELKE*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_HFIAIGEFBFM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IABPLAKDNNJ(::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelGuideHintBillboardConfig*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_IABPLAKDNNJ_OFFSET))(this, a1);
		}

		::System::Boolean NHNBBEKGDEM(::RPG::GameCore::FourRotateVoxelLevelVarCondition* a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelVarCondition*, ::System::Int16))((::PBYTE)hIl2Cpp + MHIHPODNPMO_NHNBBEKGDEM_OFFSET))(this, a1, a2);
		}

		::System::Void BDJBEOELBKM(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_BDJBEOELBKM_OFFSET))(this, a1);
		}

		::System::Void NFBMPGADGFP(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_NFBMPGADGFP_OFFSET))(this, a1);
		}

		::System::Void KDGEHBAFBJK(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MHIHPODNPMO_KDGEHBAFBJK_OFFSET))(this, a1, a2);
		}

		::System::Void __TryFinishGameAfterReward_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO___TRYFINISHGAMEAFTERREWARD_B__15_0_OFFSET))(this);
		}

	};
