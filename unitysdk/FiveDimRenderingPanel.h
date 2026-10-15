#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFPDHFOBAH_FiveDimRenderingPanelBoundsGroup.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/CLFPDHFOBAH_MAGKBIDFDJN.h"
#include "unitysdk/FiveDimPrototype.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
class ABGNMNDCEND;
class DEBEAKKOHLN;
class FDRIMatStateOperation;
class FiveDimRenderingItem;
class IDGOINOHFEE;
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define FIVEDIMRENDERINGPANEL_ACIPEKKIBNG_OFFSET UNITYSDK_OFFSET(0x1592EF30)
#define FIVEDIMRENDERINGPANEL_AGFEDHBODHL_1_OFFSET UNITYSDK_OFFSET(0x1592CC40)
#define FIVEDIMRENDERINGPANEL_AGFEDHBODHL_OFFSET UNITYSDK_OFFSET(0x1592C810)
#define FIVEDIMRENDERINGPANEL_AKKLHBCIFAD_OFFSET UNITYSDK_OFFSET(0x15930730)
#define FIVEDIMRENDERINGPANEL_APPENDBOUNDSJOBINPUTS_OFFSET UNITYSDK_OFFSET(0x1592D630)
#define FIVEDIMRENDERINGPANEL_APPLYDYNAMICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1592E310)
#define FIVEDIMRENDERINGPANEL_APPLYINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1592E4D0)
#define FIVEDIMRENDERINGPANEL_APPLYSTATICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1592E390)
#define FIVEDIMRENDERINGPANEL_AWAKE_OFFSET UNITYSDK_OFFSET(0x15928610)
#define FIVEDIMRENDERINGPANEL_BOCLBNGCHED_OFFSET UNITYSDK_OFFSET(0x1592A100)
#define FIVEDIMRENDERINGPANEL_BUILDINSTANCESFROMSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x15928A80)
#define FIVEDIMRENDERINGPANEL_CCBOOMCOCFG_OFFSET UNITYSDK_OFFSET(0x1592ABE0)
#define FIVEDIMRENDERINGPANEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x159320F0)
#define FIVEDIMRENDERINGPANEL_CILHMAJPLOM_OFFSET UNITYSDK_OFFSET(0x1592D250)
#define FIVEDIMRENDERINGPANEL_CLEARDYNAMICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1592E410)
#define FIVEDIMRENDERINGPANEL_CLEARSERIALIZEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1592F080)
#define FIVEDIMRENDERINGPANEL_CLEARSTATICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1592E470)
#define FIVEDIMRENDERINGPANEL_COLLECTSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x1592E570)
#define FIVEDIMRENDERINGPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0x15931BE0)
#define FIVEDIMRENDERINGPANEL_CULLINSTANCEDITEM_OFFSET UNITYSDK_OFFSET(0x15929C50)
#define FIVEDIMRENDERINGPANEL_DDKCHFDKEEI_OFFSET UNITYSDK_OFFSET(0x1592D070)
#define FIVEDIMRENDERINGPANEL_DELETEDISABLEDITEMS_OFFSET UNITYSDK_OFFSET(0x1592F270)
#define FIVEDIMRENDERINGPANEL_EAJIDNINIDO_OFFSET UNITYSDK_OFFSET(0x1592ED70)
#define FIVEDIMRENDERINGPANEL_EKMMFIBENJN_OFFSET UNITYSDK_OFFSET(0x1592C540)
#define FIVEDIMRENDERINGPANEL_ENAIBJGFMFI_OFFSET UNITYSDK_OFFSET(0x1592AFF0)
#define FIVEDIMRENDERINGPANEL_ESTIMATEUPDATEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1592D500)
#define FIVEDIMRENDERINGPANEL_FNHFHMDLKFO_OFFSET UNITYSDK_OFFSET(0x1592D5B0)
#define FIVEDIMRENDERINGPANEL_GETPROTOTYPEREGISTED_OFFSET UNITYSDK_OFFSET(0x159274C0)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x15927F30)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDSSIZE_OFFSET UNITYSDK_OFFSET(0x15928010)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x15927D60)
#define FIVEDIMRENDERINGPANEL_GET_CLIPSPACE_OFFSET UNITYSDK_OFFSET(0x15927C70)
#define FIVEDIMRENDERINGPANEL_GET_CUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x159283B0)
#define FIVEDIMRENDERINGPANEL_GET_DITHERALPHA_OFFSET UNITYSDK_OFFSET(0x15927E00)
#define FIVEDIMRENDERINGPANEL_GET_FORCEPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x15928470)
#define FIVEDIMRENDERINGPANEL_GET_HASBOUNDCLIP_OFFSET UNITYSDK_OFFSET(0x15927C60)
#define FIVEDIMRENDERINGPANEL_GET_INVERTBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x159280F0)
#define FIVEDIMRENDERINGPANEL_GET_ISAVAILABLEFOREXTERNALRENDERING_OFFSET UNITYSDK_OFFSET(0x15928660)
#define FIVEDIMRENDERINGPANEL_GET_ITEMCUSTOMHIZTEST_OFFSET UNITYSDK_OFFSET(0x15928230)
#define FIVEDIMRENDERINGPANEL_GET_ITEMISCPUCULLED_OFFSET UNITYSDK_OFFSET(0x15928530)
#define FIVEDIMRENDERINGPANEL_GET_ITEMRENDERERAVAILABLE_OFFSET UNITYSDK_OFFSET(0x159285F0)
#define FIVEDIMRENDERINGPANEL_GET_LASTUPDATEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x15928600)
#define FIVEDIMRENDERINGPANEL_GET_LIGHTDIR_OFFSET UNITYSDK_OFFSET(0x15928160)
#define FIVEDIMRENDERINGPANEL_GET_USEBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x15927EC0)
#define FIVEDIMRENDERINGPANEL_GET_USECUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x159282F0)
#define FIVEDIMRENDERINGPANEL_GFKEINJLOOF_OFFSET UNITYSDK_OFFSET(0x1592B4A0)
#define FIVEDIMRENDERINGPANEL_GLJJHHMCEME_OFFSET UNITYSDK_OFFSET(0x159302D0)
#define FIVEDIMRENDERINGPANEL_GMEDBNAABDC_OFFSET UNITYSDK_OFFSET(0x15928820)
#define FIVEDIMRENDERINGPANEL_GPJICOJDHFA_OFFSET UNITYSDK_OFFSET(0x15931090)
#define FIVEDIMRENDERINGPANEL_HIADPAKCJMA_OFFSET UNITYSDK_OFFSET(0x1592BEE0)
#define FIVEDIMRENDERINGPANEL_HOAMFKDHGAE_OFFSET UNITYSDK_OFFSET(0x1592A380)
#define FIVEDIMRENDERINGPANEL_ICJPNFILMBN_OFFSET UNITYSDK_OFFSET(0x1592BBB0)
#define FIVEDIMRENDERINGPANEL_JILFFDJCADH_OFFSET UNITYSDK_OFFSET(0x1592BE50)
#define FIVEDIMRENDERINGPANEL_KGPBPDMCCDM_OFFSET UNITYSDK_OFFSET(0x1592F120)
#define FIVEDIMRENDERINGPANEL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15929900)
#define FIVEDIMRENDERINGPANEL_LHDCONPHMPP_OFFSET UNITYSDK_OFFSET(0x15929320)
#define FIVEDIMRENDERINGPANEL_MARKRENDERERDITHER_OFFSET UNITYSDK_OFFSET(0x1592F9D0)
#define FIVEDIMRENDERINGPANEL_NHNDEMAGKOL_OFFSET UNITYSDK_OFFSET(0x1592B930)
#define FIVEDIMRENDERINGPANEL_NIAABPHODGP_OFFSET UNITYSDK_OFFSET(0x1592B700)
#define FIVEDIMRENDERINGPANEL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1592AEB0)
#define FIVEDIMRENDERINGPANEL_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x15931550)
#define FIVEDIMRENDERINGPANEL_ONECLICKCOLLECTANDBUILDANDDISABLE_OFFSET UNITYSDK_OFFSET(0x1592EED0)
#define FIVEDIMRENDERINGPANEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x159286E0)
#define FIVEDIMRENDERINGPANEL_OOLOBEBDCAN_OFFSET UNITYSDK_OFFSET(0x1592C1F0)
#define FIVEDIMRENDERINGPANEL_PCNHCGANGOC_OFFSET UNITYSDK_OFFSET(0x1592A1B0)
#define FIVEDIMRENDERINGPANEL_PKPGKIEMHGF_OFFSET UNITYSDK_OFFSET(0x1592A9F0)
#define FIVEDIMRENDERINGPANEL_PREPARE_OFFSET UNITYSDK_OFFSET(0x159288C0)
#define FIVEDIMRENDERINGPANEL_REGISTERITEMCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x15930B40)
#define FIVEDIMRENDERINGPANEL_REGISTERITEMDITHER_OFFSET UNITYSDK_OFFSET(0x15926D20)
#define FIVEDIMRENDERINGPANEL_REGISTERRENDERER_1_OFFSET UNITYSDK_OFFSET(0x1592F6F0)
#define FIVEDIMRENDERINGPANEL_REGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0x1592F580)
#define FIVEDIMRENDERINGPANEL_REGISTITEM_OFFSET UNITYSDK_OFFSET(0x15925440)
#define FIVEDIMRENDERINGPANEL_RESETLASTUPDATECOUNT_OFFSET UNITYSDK_OFFSET(0x1592D4B0)
#define FIVEDIMRENDERINGPANEL_SETPROTOTYPEMATPARAM_OFFSET UNITYSDK_OFFSET(0x15927650)
#define FIVEDIMRENDERINGPANEL_SETRENDERERDITHER_OFFSET UNITYSDK_OFFSET(0x1592F860)
#define FIVEDIMRENDERINGPANEL_SET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x15927F50)
#define FIVEDIMRENDERINGPANEL_SET_BOUNDSSIZE_OFFSET UNITYSDK_OFFSET(0x15928030)
#define FIVEDIMRENDERINGPANEL_SET_CUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x15928410)
#define FIVEDIMRENDERINGPANEL_SET_DITHERALPHA_OFFSET UNITYSDK_OFFSET(0x15927E10)
#define FIVEDIMRENDERINGPANEL_SET_FORCEPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x159284D0)
#define FIVEDIMRENDERINGPANEL_SET_INVERTBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x15928100)
#define FIVEDIMRENDERINGPANEL_SET_ITEMCUSTOMHIZTEST_OFFSET UNITYSDK_OFFSET(0x15928290)
#define FIVEDIMRENDERINGPANEL_SET_ITEMISCPUCULLED_OFFSET UNITYSDK_OFFSET(0x15928590)
#define FIVEDIMRENDERINGPANEL_SET_LIGHTDIR_OFFSET UNITYSDK_OFFSET(0x15928180)
#define FIVEDIMRENDERINGPANEL_SET_USEBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x15927ED0)
#define FIVEDIMRENDERINGPANEL_SET_USECUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x15928350)
#define FIVEDIMRENDERINGPANEL_TICKRENDERPHASE1_OFFSET UNITYSDK_OFFSET(0x15929B70)
#define FIVEDIMRENDERINGPANEL_TICKRENDERPHASE2_OFFSET UNITYSDK_OFFSET(0x1592A000)
#define FIVEDIMRENDERINGPANEL_TICKRENDER_OFFSET UNITYSDK_OFFSET(0x1592A090)
#define FIVEDIMRENDERINGPANEL_TRYSETSHAREDMATSTATE_OFFSET UNITYSDK_OFFSET(0x1592FC40)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEMCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x15930DE0)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEMDITHER_OFFSET UNITYSDK_OFFSET(0x15926F00)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEM_OFFSET UNITYSDK_OFFSET(0x159262B0)
#define FIVEDIMRENDERINGPANEL_UNREGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0x1592FB10)
#define FIVEDIMRENDERINGPANEL_UPDATEINSTANCEDITEMBOUNDSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x15929BE0)

inline static constexpr unsigned int FiveDimRenderingPanel_TypeDefinitionIndex = 47120;

	class FiveDimRenderingPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector4 PanelScaleTilling; // 0x18
		::System::Single _ditherAlpha; // 0x28
		::System::Boolean _useBoundsClip; // 0x2C
		::System::Boolean _InvertBoundsClip; // 0x2D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 _boundsCenter; // 0x30
		::UnityEngine::Vector3 _boundsSize; // 0x3C
		::System::Boolean OverrideLight; // 0x48
		::System::Boolean OverrideByCamera; // 0x49
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector3 _LightDir; // 0x4C
		::System::Boolean UsePrototypeExpand; // 0x58
		::System::Byte _padding2[0x3];
		::System::Single PrototypeExpandScale; // 0x5C
		::ABGNMNDCEND* EBILLBOENIN; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* BHGBOPDEKMG; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* HCIFKCELOPO; // 0x70
		::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* BJBEIKLJMAH; // 0x78
		::System::Collections::Generic::List_1<::System::UInt64>* CJJONHINAAE; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* OLLCJIHNDFI; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* NDOMNPPIALJ; // 0x90
		::System::Collections::Generic::List_1<::System::Boolean>* MFMAJFBLBFI; // 0x98
		::System::Boolean KGBFBPIODLK; // 0xA0
		::System::Boolean externalDrivenRender; // 0xA1
		::System::Boolean externalDrivenUpdate; // 0xA2
		::System::Boolean panelPosDirty; // 0xA3
		::System::Boolean clipDirty; // 0xA4
		::System::Boolean lightingDirty; // 0xA5
		::System::Boolean RegisterChildWhenEnable; // 0xA6
		::System::Byte _padding3[0x1];
		::UnityEngine::Transform* GOFNJPLABPI; // 0xA8
		::System::Boolean panelCpuCulled; // 0xB0
		::System::Byte _padding4[0x3];
		::System::Int32 boundsCalculateCount; // 0xB4
		::System::Boolean instancedBoundsDirty; // 0xB8
		::System::Boolean dynamicInstancedBoundsDirty; // 0xB9
		::System::Boolean staticInstancedBoundsDirty; // 0xBA
		::System::Boolean KBKFLFAFFOP; // 0xBB
		::System::Boolean CCCKNHLOICO; // 0xBC
		::System::Boolean OGHNDHLKGMA; // 0xBD
		::System::Byte _padding5[0x2];
		::UnityEngine::Bounds ABLHIPGJBHK; // 0xC0
		::UnityEngine::Bounds JEIMHEJCOOI; // 0xD8
		::UnityEngine::Bounds IKEICAMDFDF; // 0xF0
		::System::Int32 POMCOCJGFHF; // 0x108
		::System::Byte _padding6[0x4];
		::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>* JCLDKIHILDK; // 0x110
		::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>* IKLKKLKPGFP; // 0x118
		::System::Boolean useSerializedData; // 0x120
		::System::Byte _padding7[0x7];
		::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* serializedPrototypes; // 0x128
		::System::Collections::Generic::List_1<::System::Object*>* serializedInstances; // 0x130
		::System::Collections::Generic::List_1<::IDGOINOHFEE*>* DHNHEELELLE; // 0x138
		::UnityEngine::GameObject* BHDAOCBFPOG; // 0x140
		static ::System::Int32* StaticGet_CKIDJOPJMBP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x14350);
		}

		static ::System::Int32* StaticGet_LIGICMLEABF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x14354);
		}

		static ::System::Int32* StaticGet_FAONCHMBCBB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x14358);
		}

		static ::System::Int32* StaticGet_NLNJLMAEGKI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x1435C);
		}

		static ::System::Int32* StaticGet_KPIDPJBKJII()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x14360);
		}

		static ::System::Int32* StaticGet_ADLFKLLDPBJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x14364);
		}

		static ::System::Int32* StaticGet_IMIDNKBAMNI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x14368);
		}

		static ::System::Int32* StaticGet_HHAEIDMBAHE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x1436C);
		}

		static ::System::Int32* StaticGet_JBJPBPIFJDF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x14370);
		}

		static ::System::Int32* StaticGet_CBJHNGBICBN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x14374);
		}

		static ::System::Int32* StaticGet_DEHOEOFPEIK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x14378);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CCTOR_OFFSET))();
		}

		::System::Boolean get_HasBoundClip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_HASBOUNDCLIP_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_ClipSpace()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_CLIPSPACE_OFFSET))(this);
		}

		::UnityEngine::Bounds get_Bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_BOUNDS_OFFSET))(this);
		}

		::System::Single get_DitherAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_DITHERALPHA_OFFSET))(this);
		}

		::System::Void set_DitherAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_DITHERALPHA_OFFSET))(this, a1);
		}

		::System::Boolean get_useBoundsClip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_USEBOUNDSCLIP_OFFSET))(this);
		}

		::System::Void set_useBoundsClip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_USEBOUNDSCLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_boundsCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_BOUNDSCENTER_OFFSET))(this);
		}

		::System::Void set_boundsCenter(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_BOUNDSCENTER_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_boundsSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_BOUNDSSIZE_OFFSET))(this);
		}

		::System::Void set_boundsSize(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_BOUNDSSIZE_OFFSET))(this, a1);
		}

		::System::Boolean get_InvertBoundsClip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_INVERTBOUNDSCLIP_OFFSET))(this);
		}

		::System::Void set_InvertBoundsClip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_INVERTBOUNDSCLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_LightDir()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_LIGHTDIR_OFFSET))(this);
		}

		::System::Void set_LightDir(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_LIGHTDIR_OFFSET))(this, a1);
		}

		::System::Boolean get_ItemCustomHizTest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_ITEMCUSTOMHIZTEST_OFFSET))(this);
		}

		::System::Void set_ItemCustomHizTest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_ITEMCUSTOMHIZTEST_OFFSET))(this, a1);
		}

		::System::Boolean get_UseCustomDrawLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_USECUSTOMDRAWLAYER_OFFSET))(this);
		}

		::System::Void set_UseCustomDrawLayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_USECUSTOMDRAWLAYER_OFFSET))(this, a1);
		}

		::System::Int32 get_CustomDrawLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_CUSTOMDRAWLAYER_OFFSET))(this);
		}

		::System::Void set_CustomDrawLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_CUSTOMDRAWLAYER_OFFSET))(this, a1);
		}

		::System::Boolean get_ForcePreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_FORCEPREVIEWMODE_OFFSET))(this);
		}

		::System::Void set_ForcePreviewMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_FORCEPREVIEWMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_ItemIsCPUCulled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_ITEMISCPUCULLED_OFFSET))(this);
		}

		::System::Void set_ItemIsCPUCulled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_ITEMISCPUCULLED_OFFSET))(this, a1);
		}

		::System::Boolean get_ItemRendererAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_ITEMRENDERERAVAILABLE_OFFSET))(this);
		}

		::System::Int32 get_LastUpdateItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_LASTUPDATEITEMCOUNT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_AWAKE_OFFSET))(this);
		}

		::System::Boolean get_IsAvailableForExternalRendering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_ISAVAILABLEFOREXTERNALRENDERING_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONENABLE_OFFSET))(this);
		}

		::System::Void GMEDBNAABDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GMEDBNAABDC_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void TickRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_TICKRENDER_OFFSET))(this);
		}

		::System::Void TickRenderPhase1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_TICKRENDERPHASE1_OFFSET))(this);
		}

		::System::Void TickRenderPhase2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_TICKRENDERPHASE2_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONDISABLE_OFFSET))(this);
		}

		::System::Void ENAIBJGFMFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ENAIBJGFMFI_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_PREPARE_OFFSET))(this);
		}

		::System::Void BOCLBNGCHED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_BOCLBNGCHED_OFFSET))(this);
		}

		::System::Void PCNHCGANGOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_PCNHCGANGOC_OFFSET))(this);
		}

		::System::Void PKPGKIEMHGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_PKPGKIEMHGF_OFFSET))(this);
		}

		::System::Void GFKEINJLOOF(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GFKEINJLOOF_OFFSET))(this, a1);
		}

		::System::Void NIAABPHODGP(::DEBEAKKOHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_NIAABPHODGP_OFFSET))(this, a1);
		}

		::System::Void NHNDEMAGKOL(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_NHNDEMAGKOL_OFFSET))(this, a1);
		}

		::System::Void ICJPNFILMBN(::DEBEAKKOHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ICJPNFILMBN_OFFSET))(this, a1);
		}

		::System::Void CCBOOMCOCFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CCBOOMCOCFG_OFFSET))(this);
		}

		::System::Void HIADPAKCJMA(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_HIADPAKCJMA_OFFSET))(this, a1, a2);
		}

		::System::Void OOLOBEBDCAN(::DEBEAKKOHLN* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_OOLOBEBDCAN_OFFSET))(this, a1, a2);
		}

		::System::Void HOAMFKDHGAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_HOAMFKDHGAE_OFFSET))(this);
		}

		::System::Boolean EKMMFIBENJN(::FiveDimRenderingItem* a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_EKMMFIBENJN_OFFSET))(this, a1, a2);
		}

		::System::Boolean AGFEDHBODHL(::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>* a1, ::UnityEngine::Bounds a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>*, ::UnityEngine::Bounds, ::System::Int32))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_AGFEDHBODHL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AGFEDHBODHL_1(::System::Collections::Generic::List_1<::IDGOINOHFEE*>* a1, ::UnityEngine::Bounds a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::IDGOINOHFEE*>*, ::UnityEngine::Bounds, ::System::Int32))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_AGFEDHBODHL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DDKCHFDKEEI(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_DDKCHFDKEEI_OFFSET))(this, a1);
		}

		::System::Boolean CILHMAJPLOM(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CILHMAJPLOM_OFFSET))(this, a1);
		}

		::System::Void ResetLastUpdateCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_RESETLASTUPDATECOUNT_OFFSET))(this);
		}

		::System::Int32 EstimateUpdateItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ESTIMATEUPDATEITEMCOUNT_OFFSET))(this);
		}

		::System::Void UpdateInstancedItemBoundsIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UPDATEINSTANCEDITEMBOUNDSIFNEEDED_OFFSET))(this);
		}

		::System::Boolean CullInstancedItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CULLINSTANCEDITEM_OFFSET))(this);
		}

		::System::Boolean FNHFHMDLKFO(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_FNHFHMDLKFO_OFFSET))(this, a1);
		}

		::System::Void AppendBoundsJobInputs(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Int32 a2, ::CLFPDHFOBAH_FiveDimRenderingPanelBoundsGroup a3, ::CLFPDHFOBAH_MAGKBIDFDJN a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::CLFPDHFOBAH_FiveDimRenderingPanelBoundsGroup, ::CLFPDHFOBAH_MAGKBIDFDJN))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_APPENDBOUNDSJOBINPUTS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ApplyDynamicInstancedItemsLocalBounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_APPLYDYNAMICINSTANCEDITEMSLOCALBOUNDS_OFFSET))(this, a1);
		}

		::System::Void ApplyStaticInstancedItemsLocalBounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_APPLYSTATICINSTANCEDITEMSLOCALBOUNDS_OFFSET))(this, a1);
		}

		::System::Void ClearDynamicInstancedItemsLocalBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CLEARDYNAMICINSTANCEDITEMSLOCALBOUNDS_OFFSET))(this);
		}

		::System::Void ClearStaticInstancedItemsLocalBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CLEARSTATICINSTANCEDITEMSLOCALBOUNDS_OFFSET))(this);
		}

		::System::Void ApplyInstancedItemsLocalBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_APPLYINSTANCEDITEMSLOCALBOUNDS_OFFSET))(this);
		}

		::System::Void CollectSerializedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_COLLECTSERIALIZEDDATA_OFFSET))(this);
		}

		::System::Void BuildInstancesFromSerializedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_BUILDINSTANCESFROMSERIALIZEDDATA_OFFSET))(this);
		}

		::System::Void EAJIDNINIDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_EAJIDNINIDO_OFFSET))(this);
		}

		::System::Void OneClickCollectAndBuildAndDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONECLICKCOLLECTANDBUILDANDDISABLE_OFFSET))(this);
		}

		::System::Void ClearSerializedInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_CLEARSERIALIZEDINSTANCES_OFFSET))(this);
		}

		::System::Void DeleteDisabledItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_DELETEDISABLEDITEMS_OFFSET))(this);
		}

		::System::Void ACIPEKKIBNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ACIPEKKIBNG_OFFSET))(this);
		}

		::System::Void KGPBPDMCCDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_KGPBPDMCCDM_OFFSET))(this);
		}

		::System::Void LHDCONPHMPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_LHDCONPHMPP_OFFSET))(this);
		}

		::System::Void RegisterRenderer(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERRENDERER_OFFSET))(this, a1);
		}

		::System::Void RegisterRenderer_1(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERRENDERER_1_OFFSET))(this, a1);
		}

		::System::Void SetRendererDither(::UnityEngine::Renderer* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SETRENDERERDITHER_OFFSET))(this, a1, a2);
		}

		::System::Void MarkRendererDither(::UnityEngine::Renderer* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_MARKRENDERERDITHER_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterRenderer(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERRENDERER_OFFSET))(this, a1);
		}

		::RPG::Client::LiteInstancedItem::ItemPrototype* GetPrototypeRegisted(::FiveDimPrototype a1)
		{
			return ((::RPG::Client::LiteInstancedItem::ItemPrototype*(*)(::PVOID, ::FiveDimPrototype))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GETPROTOTYPEREGISTED_OFFSET))(this, a1);
		}

		::System::Boolean TrySetSharedMatState(::System::String* a1, ::RPG::GameCore::FDRIStateMaskEnum a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FDRIStateMaskEnum))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_TRYSETSHAREDMATSTATE_OFFSET))(this, a1, a2);
		}

		::FiveDimRenderingItem* GLJJHHMCEME(::System::String* a1)
		{
			return ((::FiveDimRenderingItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GLJJHHMCEME_OFFSET))(this, a1);
		}

		::System::Void AKKLHBCIFAD(::System::String* a1, ::RPG::Client::LiteInstancedItem::ItemPrototype* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_AKKLHBCIFAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RegistItem(::FiveDimRenderingItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTITEM_OFFSET))(this, a1);
		}

		::System::Void UnRegisterItem(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERITEM_OFFSET))(this, a1);
		}

		::System::Boolean RegisterItemCustomData(::FiveDimPrototype a1, ::FDRIMatStateOperation* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype, ::FDRIMatStateOperation*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERITEMCUSTOMDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnRegisterItemCustomData(::FiveDimPrototype a1, ::FDRIMatStateOperation* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype, ::FDRIMatStateOperation*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERITEMCUSTOMDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean RegisterItemDither(::FiveDimPrototype a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_REGISTERITEMDITHER_OFFSET))(this, a1);
		}

		::System::Boolean UnRegisterItemDither(::FiveDimPrototype a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FiveDimPrototype))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_UNREGISTERITEMDITHER_OFFSET))(this, a1);
		}

		::System::Boolean JILFFDJCADH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_JILFFDJCADH_OFFSET))(this, a1);
		}

		::System::Void SetPrototypeMatParam(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::LiteInstancedItem::ItemPrototype* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SETPROTOTYPEMATPARAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GPJICOJDHFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GPJICOJDHFA_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

	};
