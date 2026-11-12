#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class BABNOKHOBCF;
class DNFFEFPKDPC;
class GAFMLDLBCEB;
class INMMPMDELKE;
class JAODHHPIKGJ;
class MNCOPNHONHO;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define JEKAHBPEMCH_ADFOCLNEKKL_OFFSET UNITYSDK_OFFSET(0xB97F660)
#define JEKAHBPEMCH_AEOBADMIABL_OFFSET UNITYSDK_OFFSET(0xB975010)
#define JEKAHBPEMCH_AHCIIHODMHF_OFFSET UNITYSDK_OFFSET(0xB9775F0)
#define JEKAHBPEMCH_AHKPKDIGNPE_OFFSET UNITYSDK_OFFSET(0xB97DD10)
#define JEKAHBPEMCH_AHOHACMBOGG_OFFSET UNITYSDK_OFFSET(0xB974910)
#define JEKAHBPEMCH_ANPBBNAENEN_1_OFFSET UNITYSDK_OFFSET(0xB97CC60)
#define JEKAHBPEMCH_ANPBBNAENEN_OFFSET UNITYSDK_OFFSET(0xB974EA0)
#define JEKAHBPEMCH_BLGGFNAAGMF_OFFSET UNITYSDK_OFFSET(0xB979090)
#define JEKAHBPEMCH_CCBFIKPLLEF_OFFSET UNITYSDK_OFFSET(0xB978400)
#define JEKAHBPEMCH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9804D0)
#define JEKAHBPEMCH_CJCDFDBEAFK_OFFSET UNITYSDK_OFFSET(0xB97CED0)
#define JEKAHBPEMCH_CLFIOLMNCDO_OFFSET UNITYSDK_OFFSET(0xB97F260)
#define JEKAHBPEMCH_CONFMNBDGLA_OFFSET UNITYSDK_OFFSET(0xB975DE0)
#define JEKAHBPEMCH_CTOR_OFFSET UNITYSDK_OFFSET(0xB974470)
#define JEKAHBPEMCH_DADJBKMKFFG_OFFSET UNITYSDK_OFFSET(0xB97AA60)
#define JEKAHBPEMCH_DFMGMNBAEGL_OFFSET UNITYSDK_OFFSET(0xB9781A0)
#define JEKAHBPEMCH_DKABCLDECPJ_OFFSET UNITYSDK_OFFSET(0xB97BC00)
#define JEKAHBPEMCH_EMHBKBPPCAO_OFFSET UNITYSDK_OFFSET(0xB977340)
#define JEKAHBPEMCH_FAFMEANMDHL_OFFSET UNITYSDK_OFFSET(0xB97E9A0)
#define JEKAHBPEMCH_FIHPPJIJNOO_OFFSET UNITYSDK_OFFSET(0xB97A940)
#define JEKAHBPEMCH_FKHJPDCLJGB_OFFSET UNITYSDK_OFFSET(0xB97C1F0)
#define JEKAHBPEMCH_GDCKNKOFBKD_OFFSET UNITYSDK_OFFSET(0xB9747C0)
#define JEKAHBPEMCH_GNDIGGMHCOD_OFFSET UNITYSDK_OFFSET(0xB97E550)
#define JEKAHBPEMCH_HBGFIMENOMD_OFFSET UNITYSDK_OFFSET(0xB97D130)
#define JEKAHBPEMCH_HKBJINHICLC_OFFSET UNITYSDK_OFFSET(0xB975300)
#define JEKAHBPEMCH_IKPCNICNLPE_OFFSET UNITYSDK_OFFSET(0xB976380)
#define JEKAHBPEMCH_JDDDFOMKOMM_OFFSET UNITYSDK_OFFSET(0xB97C2F0)
#define JEKAHBPEMCH_JGCHBHNCEAI_OFFSET UNITYSDK_OFFSET(0xB9757E0)
#define JEKAHBPEMCH_JGIDKANGLLN_OFFSET UNITYSDK_OFFSET(0xB9773F0)
#define JEKAHBPEMCH_JJKLIHFHHLC_OFFSET UNITYSDK_OFFSET(0xB97D420)
#define JEKAHBPEMCH_JMCIPPAINKK_OFFSET UNITYSDK_OFFSET(0xB975160)
#define JEKAHBPEMCH_JNJMNOJOCOA_OFFSET UNITYSDK_OFFSET(0xB974730)
#define JEKAHBPEMCH_KBALGKJAIGE_OFFSET UNITYSDK_OFFSET(0xB97E230)
#define JEKAHBPEMCH_KFICCGPKOAJ_OFFSET UNITYSDK_OFFSET(0xB975720)
#define JEKAHBPEMCH_KFJJEJIFLEE_OFFSET UNITYSDK_OFFSET(0xB97DC70)
#define JEKAHBPEMCH_KLONBGBGFIK_OFFSET UNITYSDK_OFFSET(0xB975370)
#define JEKAHBPEMCH_KMJKFOELMBO_OFFSET UNITYSDK_OFFSET(0xB97D9F0)
#define JEKAHBPEMCH_KPCMMHFBILI_OFFSET UNITYSDK_OFFSET(0xB97EF30)
#define JEKAHBPEMCH_MBMGNECEOKF_OFFSET UNITYSDK_OFFSET(0xB97E080)
#define JEKAHBPEMCH_NEGNHELFDME_OFFSET UNITYSDK_OFFSET(0xB975BB0)
#define JEKAHBPEMCH_NFGHDAGCHEM_1_OFFSET UNITYSDK_OFFSET(0xB976F60)
#define JEKAHBPEMCH_NFGHDAGCHEM_OFFSET UNITYSDK_OFFSET(0xB976BF0)
#define JEKAHBPEMCH_NFGHKDJHMLI_OFFSET UNITYSDK_OFFSET(0xB97D690)
#define JEKAHBPEMCH_OBBHODLFJKF_OFFSET UNITYSDK_OFFSET(0xB97BB40)
#define JEKAHBPEMCH_OCENBJBGNHL_OFFSET UNITYSDK_OFFSET(0xB974F90)
#define JEKAHBPEMCH_OJPMJBCILHE_OFFSET UNITYSDK_OFFSET(0xB977BA0)
#define JEKAHBPEMCH_OMBELIHNLDN_1_OFFSET UNITYSDK_OFFSET(0xB9767F0)
#define JEKAHBPEMCH_OMBELIHNLDN_OFFSET UNITYSDK_OFFSET(0xB9764D0)
#define JEKAHBPEMCH_OMLEAAEFKCN_OFFSET UNITYSDK_OFFSET(0xB979230)
#define JEKAHBPEMCH_PHJFCICHAHC_OFFSET UNITYSDK_OFFSET(0xB97ECB0)

inline static constexpr unsigned int JEKAHBPEMCH_TypeDefinitionIndex = 79036;

	class JEKAHBPEMCH : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>* EBJHNCCJAJF; // 0x10
		::BABNOKHOBCF* FKINCGODJEP; // 0x18
		::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>* MNPANGCABID; // 0x20
		::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>* GNDBFGMFCLK; // 0x28
		::System::Collections::Generic::Dictionary_2<::INMMPMDELKE*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimEffectItem*, ::UnityEngine::GameObject*>*>* JIEMPCNPJPO; // 0x30
		::GAFMLDLBCEB* JAJOGJKHAJP; // 0x38
		::MNCOPNHONHO* PDENFEFCAGN; // 0x40
		::UnityEngine::Vector3 GJDGCLKCMEF; // 0x48
		::System::Boolean OONEEOCDCHL; // 0x54
		::System::Boolean LBIJFMLOLEI; // 0x55
		static ::RPG::Client::RPGProfilerMarker** StaticGet_CFOPGAFNBLL()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "JEKAHBPEMCH")->GetStaticField(0x68A00);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_FCAJGEDIELJ()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "JEKAHBPEMCH")->GetStaticField(0x68A08);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_COLACBAFCJA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "JEKAHBPEMCH")->GetStaticField(0x68A10);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NFODGIGNIEG()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "JEKAHBPEMCH")->GetStaticField(0x68A18);
		}

		::System::Void _ctor(::MNCOPNHONHO* a1, ::BABNOKHOBCF* a2, ::GAFMLDLBCEB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MNCOPNHONHO*, ::BABNOKHOBCF*, ::GAFMLDLBCEB*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEKAHBPEMCH_CCTOR_OFFSET))();
		}

		::System::Void JNJMNOJOCOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_JNJMNOJOCOA_OFFSET))(this);
		}

		::System::Void AHOHACMBOGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_AHOHACMBOGG_OFFSET))(this);
		}

		::System::Void AEOBADMIABL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_AEOBADMIABL_OFFSET))(this, a1);
		}

		::System::Void GDCKNKOFBKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_GDCKNKOFBKD_OFFSET))(this);
		}

		::System::Void JMCIPPAINKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_JMCIPPAINKK_OFFSET))(this);
		}

		::System::Void KLONBGBGFIK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_KLONBGBGFIK_OFFSET))(this, a1);
		}

		::System::Void OCENBJBGNHL(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_OCENBJBGNHL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HKBJINHICLC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_HKBJINHICLC_OFFSET))(this, a1);
		}

		::System::Boolean KFICCGPKOAJ(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>* a4, ::DNFFEFPKDPC* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>*, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_KFICCGPKOAJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean JGCHBHNCEAI(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>* a4, ::DNFFEFPKDPC* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>*, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_JGCHBHNCEAI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean CONFMNBDGLA(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>* a4, ::DNFFEFPKDPC* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>*, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_CONFMNBDGLA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NEGNHELFDME(::System::Boolean a1, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>* a2, ::DNFFEFPKDPC* a3, ::UnityEngine::Vector3 a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>*, ::DNFFEFPKDPC*, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_NEGNHELFDME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::DNFFEFPKDPC* IKPCNICNLPE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::DNFFEFPKDPC*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_IKPCNICNLPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 OMBELIHNLDN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::DNFFEFPKDPC* a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::DNFFEFPKDPC*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_OMBELIHNLDN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 OMBELIHNLDN_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_OMBELIHNLDN_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 NFGHDAGCHEM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::DNFFEFPKDPC* a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_NFGHDAGCHEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 NFGHDAGCHEM_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_NFGHDAGCHEM_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EMHBKBPPCAO(::DNFFEFPKDPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_EMHBKBPPCAO_OFFSET))(this, a1);
		}

		::System::Boolean JGIDKANGLLN(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_JGIDKANGLLN_OFFSET))(this, a1);
		}

		::System::Boolean AHCIIHODMHF(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_AHCIIHODMHF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OJPMJBCILHE(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Func_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Func_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean>*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_OJPMJBCILHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CCBFIKPLLEF(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3, ::System::Func_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean>* a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Func_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_CCBFIKPLLEF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean DFMGMNBAEGL(::DNFFEFPKDPC* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Int32 a4, ::System::Func_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Func_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean>*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_DFMGMNBAEGL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean BLGGFNAAGMF(::DNFFEFPKDPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_BLGGFNAAGMF_OFFSET))(this, a1);
		}

		::System::Single OMLEAAEFKCN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_OMLEAAEFKCN_OFFSET))(this, a1);
		}

		::System::Boolean FIHPPJIJNOO(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_FIHPPJIJNOO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean DADJBKMKFFG(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_DADJBKMKFFG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OBBHODLFJKF(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_OBBHODLFJKF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DKABCLDECPJ(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_DKABCLDECPJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FKHJPDCLJGB(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_FKHJPDCLJGB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JDDDFOMKOMM(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_JDDDFOMKOMM_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 ANPBBNAENEN(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_ANPBBNAENEN_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 ANPBBNAENEN_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_ANPBBNAENEN_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CJCDFDBEAFK(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_CJCDFDBEAFK_OFFSET))(this, a1);
		}

		::System::Void HBGFIMENOMD(::INMMPMDELKE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_HBGFIMENOMD_OFFSET))(this, a1, a2);
		}

		::System::Void JJKLIHFHHLC(::INMMPMDELKE* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_JJKLIHFHHLC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KFJJEJIFLEE(::INMMPMDELKE* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::RPG::Client::LittleGame::Move::MoveState a4)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_KFJJEJIFLEE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NFGHKDJHMLI(::INMMPMDELKE* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_NFGHKDJHMLI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KMJKFOELMBO(::INMMPMDELKE* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_KMJKFOELMBO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MBMGNECEOKF(::INMMPMDELKE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_MBMGNECEOKF_OFFSET))(this, a1, a2);
		}

		::System::Void KBALGKJAIGE(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_KBALGKJAIGE_OFFSET))(this, a1);
		}

		::System::Void FAFMEANMDHL(::INMMPMDELKE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_FAFMEANMDHL_OFFSET))(this, a1, a2);
		}

		::System::Void PHJFCICHAHC(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_PHJFCICHAHC_OFFSET))(this, a1);
		}

		::System::Void CLFIOLMNCDO(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_CLFIOLMNCDO_OFFSET))(this, a1);
		}

		::System::Void GNDIGGMHCOD(::INMMPMDELKE* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_GNDIGGMHCOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AHKPKDIGNPE(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_AHKPKDIGNPE_OFFSET))(this, a1);
		}

		::System::Void KPCMMHFBILI(::INMMPMDELKE* a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*, ::System::String*))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_KPCMMHFBILI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ADFOCLNEKKL(::INMMPMDELKE* a1, ::JAODHHPIKGJ* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::JAODHHPIKGJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JEKAHBPEMCH_ADFOCLNEKKL_OFFSET))(this, a1, a2, a3, a4);
		}

	};
