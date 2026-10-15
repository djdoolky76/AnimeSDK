#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAFFMDBPCGJ_ShadowJobRunResult.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
class BABNOKHOBCF;
class FAFFMDBPCGJ_CKFFJDBKBBD;
class FAFFMDBPCGJ_EIGPLIGCGJE;
class FAFFMDBPCGJ_FDMAIMDKAPI;
class FAFFMDBPCGJ_GNEDEMCFKGI;
class FAFFMDBPCGJ_HJGHKIDDBHB;
class FAFFMDBPCGJ_KHMNBOAKIJN;
class FOLHKNBFONK;
class FiveDimRenderingItem;
class FiveDimRenderingPanelRuntime;
class GAFMLDLBCEB;
class INMMPMDELKE;
class MNCOPNHONHO;
namespace RPG::Client { class RPGProfilerMarkerWithIntData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameView; }
namespace RPG::GameCore { class FiveDimBaseCameraConfig; }
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FAFFMDBPCGJ_AHGDCEBDNDM_OFFSET UNITYSDK_OFFSET(0x15677010)
#define FAFFMDBPCGJ_AJPKKEMNHDF_OFFSET UNITYSDK_OFFSET(0x1566F9E0)
#define FAFFMDBPCGJ_AMBHEJGLKKO_OFFSET UNITYSDK_OFFSET(0x15673DE0)
#define FAFFMDBPCGJ_BJEMNMAPPAN_OFFSET UNITYSDK_OFFSET(0x15676AD0)
#define FAFFMDBPCGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x156791C0)
#define FAFFMDBPCGJ_CMCFLBGNDII_OFFSET UNITYSDK_OFFSET(0x15676950)
#define FAFFMDBPCGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1566D0B0)
#define FAFFMDBPCGJ_DHAFJDFNJGO_OFFSET UNITYSDK_OFFSET(0x15677740)
#define FAFFMDBPCGJ_DIEMHCNPNLN_OFFSET UNITYSDK_OFFSET(0x156791B0)
#define FAFFMDBPCGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1566DB20)
#define FAFFMDBPCGJ_EKBOAGIEKAD_OFFSET UNITYSDK_OFFSET(0x15678970)
#define FAFFMDBPCGJ_EOGCPCOEJCL_OFFSET UNITYSDK_OFFSET(0x15672F10)
#define FAFFMDBPCGJ_EPPFAMHLEJC_OFFSET UNITYSDK_OFFSET(0x15677A60)
#define FAFFMDBPCGJ_FDHHHPDHGFN_OFFSET UNITYSDK_OFFSET(0x156761B0)
#define FAFFMDBPCGJ_FECNKKBHGDJ_OFFSET UNITYSDK_OFFSET(0x1566E580)
#define FAFFMDBPCGJ_FMCCKDJEGGD_OFFSET UNITYSDK_OFFSET(0x156748B0)
#define FAFFMDBPCGJ_GDOBGPJGNDP_OFFSET UNITYSDK_OFFSET(0x15679050)
#define FAFFMDBPCGJ_GFECDAPKPPG_OFFSET UNITYSDK_OFFSET(0x1566FA30)
#define FAFFMDBPCGJ_GJEMLOKIFMN_OFFSET UNITYSDK_OFFSET(0x15673390)
#define FAFFMDBPCGJ_HAPDKOHJINH_OFFSET UNITYSDK_OFFSET(0x15673140)
#define FAFFMDBPCGJ_HBLMKMAEEAI_OFFSET UNITYSDK_OFFSET(0x15677490)
#define FAFFMDBPCGJ_HHKHCOFECPO_OFFSET UNITYSDK_OFFSET(0x15674610)
#define FAFFMDBPCGJ_HOBBLIHEACJ_OFFSET UNITYSDK_OFFSET(0x15674590)
#define FAFFMDBPCGJ_IDFMOJAOLMO_OFFSET UNITYSDK_OFFSET(0x1566DCA0)
#define FAFFMDBPCGJ_IELGMLKFCAD_OFFSET UNITYSDK_OFFSET(0x15674730)
#define FAFFMDBPCGJ_ILAAEPFJOHI_OFFSET UNITYSDK_OFFSET(0x1566F480)
#define FAFFMDBPCGJ_JAIMBAANDPG_OFFSET UNITYSDK_OFFSET(0x1566F850)
#define FAFFMDBPCGJ_JCBGJEFADPE_OFFSET UNITYSDK_OFFSET(0x15672940)
#define FAFFMDBPCGJ_JGHLKDNGKEM_OFFSET UNITYSDK_OFFSET(0x15673F50)
#define FAFFMDBPCGJ_JIMGMHCAGMP_OFFSET UNITYSDK_OFFSET(0x156737F0)
#define FAFFMDBPCGJ_JKKKFALGJGB_1_OFFSET UNITYSDK_OFFSET(0x15678E90)
#define FAFFMDBPCGJ_JKKKFALGJGB_OFFSET UNITYSDK_OFFSET(0x156783E0)
#define FAFFMDBPCGJ_KCGMFLHEKFK_OFFSET UNITYSDK_OFFSET(0x15673AF0)
#define FAFFMDBPCGJ_KDOCJPBNGME_OFFSET UNITYSDK_OFFSET(0x15678CE0)
#define FAFFMDBPCGJ_LAFLOOEIENN_OFFSET UNITYSDK_OFFSET(0x156776A0)
#define FAFFMDBPCGJ_LIABKNDCANL_OFFSET UNITYSDK_OFFSET(0x15678670)
#define FAFFMDBPCGJ_LLCPNDPOOBP_OFFSET UNITYSDK_OFFSET(0x1566FBB0)
#define FAFFMDBPCGJ_MCBGKLBGMLG_OFFSET UNITYSDK_OFFSET(0x15675C50)
#define FAFFMDBPCGJ_MCCOLBBCDEH_OFFSET UNITYSDK_OFFSET(0x15673630)
#define FAFFMDBPCGJ_MDAHOJOKGMI_OFFSET UNITYSDK_OFFSET(0x156780B0)
#define FAFFMDBPCGJ_MFCMMMKCBNF_OFFSET UNITYSDK_OFFSET(0x15673450)
#define FAFFMDBPCGJ_MHEEJJOJNFH_OFFSET UNITYSDK_OFFSET(0x1566F110)
#define FAFFMDBPCGJ_MMILELCJKJN_OFFSET UNITYSDK_OFFSET(0x15674D50)
#define FAFFMDBPCGJ_MNMNBOIHJNG_OFFSET UNITYSDK_OFFSET(0x156747C0)
#define FAFFMDBPCGJ_MNMOFNDGCFB_OFFSET UNITYSDK_OFFSET(0x15672400)
#define FAFFMDBPCGJ_NAPLCCCHPPG_OFFSET UNITYSDK_OFFSET(0x156756F0)
#define FAFFMDBPCGJ_NEGJMJICHOC_OFFSET UNITYSDK_OFFSET(0x15673C50)
#define FAFFMDBPCGJ_NIHGKNDNJPB_OFFSET UNITYSDK_OFFSET(0x15673680)
#define FAFFMDBPCGJ_NOAFNLDDFMG_OFFSET UNITYSDK_OFFSET(0x15674330)
#define FAFFMDBPCGJ_OFFIBKLOKMF_OFFSET UNITYSDK_OFFSET(0x1566E5C0)
#define FAFFMDBPCGJ_OOPNHCAFJJH_OFFSET UNITYSDK_OFFSET(0x15678A80)
#define FAFFMDBPCGJ_PJNOOLIPNFM_OFFSET UNITYSDK_OFFSET(0x15677CF0)
#define FAFFMDBPCGJ_PNIMGNBPJHA_OFFSET UNITYSDK_OFFSET(0x156742E0)
#define FAFFMDBPCGJ__GETMONOVIEW_OFFSET UNITYSDK_OFFSET(0x1566F220)
#define FAFFMDBPCGJ__ONRELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x1566E7F0)

	class FAFFMDBPCGJ
	{
	public:
		::FAFFMDBPCGJ_GNEDEMCFKGI* IKDOGGNFCAJ; // 0x30
		::FAFFMDBPCGJ_FDMAIMDKAPI* OKAIJPIGGAO; // 0x38
		::GAFMLDLBCEB* JAJOGJKHAJP; // 0x40
		::System::Collections::Generic::HashSet_1<::INMMPMDELKE*>* LLPCMIOGDJF; // 0x48
		::MNCOPNHONHO* CPDGCCILALB; // 0x50
		::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple>* BDABLFEIJJJ; // 0x58
		::FAFFMDBPCGJ_HJGHKIDDBHB* MAALOPPHIGC; // 0x60
		::BABNOKHOBCF* FKINCGODJEP; // 0x68
		::System::Collections::Generic::HashSet_1<::FiveDimRenderingPanelRuntime*>* PPAEODALOGI; // 0x70
		::FAFFMDBPCGJ_CKFFJDBKBBD* ELPALAMOMLO; // 0x78
		::System::Int32 JGDGCEDPFPH; // 0x80
		::System::Boolean AKEGHKKGMPL; // 0x84
		::System::Boolean MFEOGBAHJNF; // 0x85
		static ::System::Collections::Generic::List_1<::INMMPMDELKE*>** StaticGet_CCDPKLNHOOE()
		{
			return (::System::Collections::Generic::List_1<::INMMPMDELKE*>**)UnitySDK::FromName("", "FAFFMDBPCGJ")->GetStaticField(0x5BEB0);
		}

		static ::RPG::Client::RPGProfilerMarkerWithIntData** StaticGet_DMEEFCFNNOA()
		{
			return (::RPG::Client::RPGProfilerMarkerWithIntData**)UnitySDK::FromName("", "FAFFMDBPCGJ")->GetStaticField(0x5BEB8);
		}

		static ::System::Int32* StaticGet_FIANHKJMJIH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAFFMDBPCGJ")->GetStaticField(0x13F20);
		}

		static ::System::Int32* StaticGet_JNHHAALGGKF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAFFMDBPCGJ")->GetStaticField(0x13F24);
		}

		::System::Void _ctor(::MNCOPNHONHO* a1, ::BABNOKHOBCF* a2, ::GAFMLDLBCEB* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MNCOPNHONHO*, ::BABNOKHOBCF*, ::GAFMLDLBCEB*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple>* FECNKKBHGDJ()
		{
			return ((::System::Collections::Generic::Dictionary_2<::FiveDimRenderingPanelRuntime*, ::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FECNKKBHGDJ_OFFSET))(this);
		}

		::System::Void OFFIBKLOKMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_OFFIBKLOKMF_OFFSET))(this);
		}

		::System::Void _OnReleaseView(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ__ONRELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void _GetMonoView(::INMMPMDELKE* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::FOLHKNBFONK* a4)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::String*, ::UnityEngine::GameObject*, ::FOLHKNBFONK*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ__GETMONOVIEW_OFFSET))(this, a1, a2, a3, a4);
		}

		::INMMPMDELKE* ILAAEPFJOHI(::INMMPMDELKE* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_ILAAEPFJOHI_OFFSET))(this, a1, a2);
		}

		::System::Void JAIMBAANDPG(::INMMPMDELKE* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2, ::RPG::GameCore::FiveDimCameraPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FiveDimBaseCameraConfig*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_JAIMBAANDPG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AJPKKEMNHDF(::RPG::GameCore::FiveDimBaseCameraConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimBaseCameraConfig*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_AJPKKEMNHDF_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GFECDAPKPPG(::INMMPMDELKE* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GFECDAPKPPG_OFFSET))(this, a1);
		}

		::System::Void LLCPNDPOOBP(::INMMPMDELKE* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_LLCPNDPOOBP_OFFSET))(this, a1, a2);
		}

		::System::Void EOGCPCOEJCL(::INMMPMDELKE* a1, ::RPG::GameCore::FourRotateVoxelFinishPointConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FourRotateVoxelFinishPointConfig*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_EOGCPCOEJCL_OFFSET))(this, a1, a2);
		}

		::System::Void MNMOFNDGCFB(::FiveDimRenderingPanelRuntime* a1, ::INMMPMDELKE* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanelRuntime*, ::INMMPMDELKE*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_MNMOFNDGCFB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JCBGJEFADPE(::INMMPMDELKE* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_JCBGJEFADPE_OFFSET))(this, a1, a2);
		}

		::System::Void HAPDKOHJINH(::INMMPMDELKE* a1, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HAPDKOHJINH_OFFSET))(this, a1, a2);
		}

		::System::Void MHEEJJOJNFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_MHEEJJOJNFH_OFFSET))(this);
		}

		::System::Void GJEMLOKIFMN(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GJEMLOKIFMN_OFFSET))(this, a1);
		}

		::System::Int32 MCCOLBBCDEH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_MCCOLBBCDEH_OFFSET))(this);
		}

		::System::Boolean NIHGKNDNJPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_NIHGKNDNJPB_OFFSET))(this);
		}

		::System::Void JIMGMHCAGMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_JIMGMHCAGMP_OFFSET))(this);
		}

		::System::Void NEGJMJICHOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_NEGJMJICHOC_OFFSET))(this);
		}

		::System::Void PNIMGNBPJHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_PNIMGNBPJHA_OFFSET))(this);
		}

		::System::Void NOAFNLDDFMG(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_NOAFNLDDFMG_OFFSET))(this, a1, a2);
		}

		::System::Boolean HHKHCOFECPO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HHKHCOFECPO_OFFSET))(this);
		}

		::System::Void IELGMLKFCAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_IELGMLKFCAD_OFFSET))(this);
		}

		::System::Boolean MNMNBOIHJNG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_MNMNBOIHJNG_OFFSET))(this);
		}

		::System::Boolean FMCCKDJEGGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FMCCKDJEGGD_OFFSET))(this);
		}

		::System::Void AMBHEJGLKKO(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_AMBHEJGLKKO_OFFSET))(this, a1, a2);
		}

		::System::Void IDFMOJAOLMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_IDFMOJAOLMO_OFFSET))(this);
		}

		::System::Boolean HOBBLIHEACJ(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HOBBLIHEACJ_OFFSET))(this, a1);
		}

		::FAFFMDBPCGJ_ShadowJobRunResult JGHLKDNGKEM(::System::Int32 a1)
		{
			return ((::FAFFMDBPCGJ_ShadowJobRunResult(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_JGHLKDNGKEM_OFFSET))(this, a1);
		}

		::FAFFMDBPCGJ_ShadowJobRunResult MMILELCJKJN(::System::Int32 a1)
		{
			return ((::FAFFMDBPCGJ_ShadowJobRunResult(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_MMILELCJKJN_OFFSET))(this, a1);
		}

		::System::Void NAPLCCCHPPG(::FiveDimRenderingItem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_NAPLCCCHPPG_OFFSET))(this, a1, a2);
		}

		::System::Void MCBGKLBGMLG(::FiveDimRenderingItem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_MCBGKLBGMLG_OFFSET))(this, a1, a2);
		}

		::System::Boolean FDHHHPDHGFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_FDHHHPDHGFN_OFFSET))(this);
		}

		::System::Void LAFLOOEIENN(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_LAFLOOEIENN_OFFSET))(this, a1, a2);
		}

		::System::Boolean HBLMKMAEEAI(::FAFFMDBPCGJ_KHMNBOAKIJN* a1, ::System::Int32 a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAFFMDBPCGJ_KHMNBOAKIJN*, ::System::Int32, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_HBLMKMAEEAI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DHAFJDFNJGO(::FAFFMDBPCGJ_KHMNBOAKIJN* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::FAFFMDBPCGJ_KHMNBOAKIJN*, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_DHAFJDFNJGO_OFFSET))(this, a1, a2);
		}

		::System::Void CMCFLBGNDII(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CMCFLBGNDII_OFFSET))(this, a1);
		}

		::System::Int32 MFCMMMKCBNF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_MFCMMMKCBNF_OFFSET))(this);
		}

		::System::Void BJEMNMAPPAN(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_BJEMNMAPPAN_OFFSET))(this, a1);
		}

		::System::Boolean PJNOOLIPNFM(::FAFFMDBPCGJ_EIGPLIGCGJE* a1, ::FiveDimRenderingItem* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAFFMDBPCGJ_EIGPLIGCGJE*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_PJNOOLIPNFM_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* MDAHOJOKGMI(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_MDAHOJOKGMI_OFFSET))(a1);
		}

		::System::Int32 KCGMFLHEKFK(::INMMPMDELKE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_KCGMFLHEKFK_OFFSET))(this, a1);
		}

		::System::Boolean LIABKNDCANL(::INMMPMDELKE* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_LIABKNDCANL_OFFSET))(this, a1, a2);
		}

		::System::Boolean AHGDCEBDNDM(::FiveDimRenderingItem* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_AHGDCEBDNDM_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 EPPFAMHLEJC(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_EPPFAMHLEJC_OFFSET))(a1, a2);
		}

		static ::System::Int32 EKBOAGIEKAD(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_EKBOAGIEKAD_OFFSET))(a1);
		}

		static ::System::Void OOPNHCAFJJH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_OOPNHCAFJJH_OFFSET))(a1);
		}

		static ::System::Void KDOCJPBNGME(::System::Int32 a1, ::FiveDimRenderingItem* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::FiveDimRenderingItem*, ::System::Single))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_KDOCJPBNGME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JKKKFALGJGB(::Il2CppArray<::System::Single>* a1, ::FiveDimRenderingItem* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_JKKKFALGJGB_OFFSET))(a1, a2);
		}

		static ::System::Void JKKKFALGJGB_1(::System::Collections::Generic::List_1<::System::Single>* a1, ::FiveDimRenderingItem* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Single>*, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_JKKKFALGJGB_1_OFFSET))(a1, a2);
		}

		::System::Void GDOBGPJGNDP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_GDOBGPJGNDP_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* DIEMHCNPNLN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_DIEMHCNPNLN_OFFSET))(this);
		}

	};
