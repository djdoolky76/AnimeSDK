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

#define FIVEDIMRENDERINGPANEL_ACIPEKKIBNG_OFFSET UNITYSDK_OFFSET(0x16862DD0)
#define FIVEDIMRENDERINGPANEL_AGFEDHBODHL_1_OFFSET UNITYSDK_OFFSET(0x16860AE0)
#define FIVEDIMRENDERINGPANEL_AGFEDHBODHL_OFFSET UNITYSDK_OFFSET(0x168606B0)
#define FIVEDIMRENDERINGPANEL_AKKLHBCIFAD_OFFSET UNITYSDK_OFFSET(0x168645D0)
#define FIVEDIMRENDERINGPANEL_APPENDBOUNDSJOBINPUTS_OFFSET UNITYSDK_OFFSET(0x168614D0)
#define FIVEDIMRENDERINGPANEL_APPLYDYNAMICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x168621B0)
#define FIVEDIMRENDERINGPANEL_APPLYINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x16862370)
#define FIVEDIMRENDERINGPANEL_APPLYSTATICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x16862230)
#define FIVEDIMRENDERINGPANEL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1685C350)
#define FIVEDIMRENDERINGPANEL_BFCMCCCFKJD_OFFSET UNITYSDK_OFFSET(0x1685FC60)
#define FIVEDIMRENDERINGPANEL_BOCLBNGCHED_OFFSET UNITYSDK_OFFSET(0x1685DE70)
#define FIVEDIMRENDERINGPANEL_BUILDINSTANCESFROMSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x1685C810)
#define FIVEDIMRENDERINGPANEL_CCBOOMCOCFG_OFFSET UNITYSDK_OFFSET(0x1685E950)
#define FIVEDIMRENDERINGPANEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x16865C10)
#define FIVEDIMRENDERINGPANEL_CILHMAJPLOM_OFFSET UNITYSDK_OFFSET(0x168610F0)
#define FIVEDIMRENDERINGPANEL_CLEARDYNAMICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x168622B0)
#define FIVEDIMRENDERINGPANEL_CLEARSERIALIZEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x16862F20)
#define FIVEDIMRENDERINGPANEL_CLEARSTATICINSTANCEDITEMSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x16862310)
#define FIVEDIMRENDERINGPANEL_COLLECTSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0x16862410)
#define FIVEDIMRENDERINGPANEL_CTOR_OFFSET UNITYSDK_OFFSET(0x16865720)
#define FIVEDIMRENDERINGPANEL_CULLINSTANCEDITEM_OFFSET UNITYSDK_OFFSET(0x1685D9C0)
#define FIVEDIMRENDERINGPANEL_DDKCHFDKEEI_OFFSET UNITYSDK_OFFSET(0x16860F10)
#define FIVEDIMRENDERINGPANEL_DELETEDISABLEDITEMS_OFFSET UNITYSDK_OFFSET(0x16863110)
#define FIVEDIMRENDERINGPANEL_EAJIDNINIDO_OFFSET UNITYSDK_OFFSET(0x16862C10)
#define FIVEDIMRENDERINGPANEL_EKMMFIBENJN_OFFSET UNITYSDK_OFFSET(0x168603E0)
#define FIVEDIMRENDERINGPANEL_ENAIBJGFMFI_OFFSET UNITYSDK_OFFSET(0x1685ED60)
#define FIVEDIMRENDERINGPANEL_ESTIMATEUPDATEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x168613A0)
#define FIVEDIMRENDERINGPANEL_FNHFHMDLKFO_OFFSET UNITYSDK_OFFSET(0x16861450)
#define FIVEDIMRENDERINGPANEL_GETPROTOTYPEREGISTED_OFFSET UNITYSDK_OFFSET(0x1685AF50)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x1685B9C0)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDSSIZE_OFFSET UNITYSDK_OFFSET(0x1685BAA0)
#define FIVEDIMRENDERINGPANEL_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1685B7F0)
#define FIVEDIMRENDERINGPANEL_GET_CLIPSPACE_OFFSET UNITYSDK_OFFSET(0x1685B700)
#define FIVEDIMRENDERINGPANEL_GET_CUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x1685C0F0)
#define FIVEDIMRENDERINGPANEL_GET_DITHERALPHA_OFFSET UNITYSDK_OFFSET(0x1685B890)
#define FIVEDIMRENDERINGPANEL_GET_FOGSCALE_OFFSET UNITYSDK_OFFSET(0x1685BCC0)
#define FIVEDIMRENDERINGPANEL_GET_FORCEPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1685C1B0)
#define FIVEDIMRENDERINGPANEL_GET_HASBOUNDCLIP_OFFSET UNITYSDK_OFFSET(0x1685B6F0)
#define FIVEDIMRENDERINGPANEL_GET_INVERTBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x1685BB80)
#define FIVEDIMRENDERINGPANEL_GET_ISAVAILABLEFOREXTERNALRENDERING_OFFSET UNITYSDK_OFFSET(0x1685C3F0)
#define FIVEDIMRENDERINGPANEL_GET_ITEMCUSTOMHIZTEST_OFFSET UNITYSDK_OFFSET(0x1685BF70)
#define FIVEDIMRENDERINGPANEL_GET_ITEMISCPUCULLED_OFFSET UNITYSDK_OFFSET(0x1685C270)
#define FIVEDIMRENDERINGPANEL_GET_ITEMRENDERERAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1685C330)
#define FIVEDIMRENDERINGPANEL_GET_LASTUPDATEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1685C340)
#define FIVEDIMRENDERINGPANEL_GET_LIGHTDIR_OFFSET UNITYSDK_OFFSET(0x1685BBF0)
#define FIVEDIMRENDERINGPANEL_GET_USEBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x1685B950)
#define FIVEDIMRENDERINGPANEL_GET_USECUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x1685C030)
#define FIVEDIMRENDERINGPANEL_GFKEINJLOOF_OFFSET UNITYSDK_OFFSET(0x1685F220)
#define FIVEDIMRENDERINGPANEL_GLJJHHMCEME_OFFSET UNITYSDK_OFFSET(0x16864170)
#define FIVEDIMRENDERINGPANEL_GMEDBNAABDC_OFFSET UNITYSDK_OFFSET(0x1685C5B0)
#define FIVEDIMRENDERINGPANEL_GPJICOJDHFA_OFFSET UNITYSDK_OFFSET(0x16864F30)
#define FIVEDIMRENDERINGPANEL_HIADPAKCJMA_OFFSET UNITYSDK_OFFSET(0x1685FD80)
#define FIVEDIMRENDERINGPANEL_HOAMFKDHGAE_OFFSET UNITYSDK_OFFSET(0x1685E0F0)
#define FIVEDIMRENDERINGPANEL_ICJPNFILMBN_OFFSET UNITYSDK_OFFSET(0x1685F930)
#define FIVEDIMRENDERINGPANEL_JILFFDJCADH_OFFSET UNITYSDK_OFFSET(0x1685FCF0)
#define FIVEDIMRENDERINGPANEL_KGPBPDMCCDM_OFFSET UNITYSDK_OFFSET(0x16862FC0)
#define FIVEDIMRENDERINGPANEL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1685D670)
#define FIVEDIMRENDERINGPANEL_LHDCONPHMPP_OFFSET UNITYSDK_OFFSET(0x1685D0B0)
#define FIVEDIMRENDERINGPANEL_MARKRENDERERDITHER_OFFSET UNITYSDK_OFFSET(0x16863870)
#define FIVEDIMRENDERINGPANEL_MEDJPPJBMNH_OFFSET UNITYSDK_OFFSET(0x1685BD90)
#define FIVEDIMRENDERINGPANEL_NHNDEMAGKOL_OFFSET UNITYSDK_OFFSET(0x1685F6B0)
#define FIVEDIMRENDERINGPANEL_NIAABPHODGP_OFFSET UNITYSDK_OFFSET(0x1685F480)
#define FIVEDIMRENDERINGPANEL_OLFELKHOEEH_OFFSET UNITYSDK_OFFSET(0x1685FBD0)
#define FIVEDIMRENDERINGPANEL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1685EC20)
#define FIVEDIMRENDERINGPANEL_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x168653F0)
#define FIVEDIMRENDERINGPANEL_ONECLICKCOLLECTANDBUILDANDDISABLE_OFFSET UNITYSDK_OFFSET(0x16862D70)
#define FIVEDIMRENDERINGPANEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1685C470)
#define FIVEDIMRENDERINGPANEL_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1685C3A0)
#define FIVEDIMRENDERINGPANEL_OOLOBEBDCAN_OFFSET UNITYSDK_OFFSET(0x16860090)
#define FIVEDIMRENDERINGPANEL_PCNHCGANGOC_OFFSET UNITYSDK_OFFSET(0x1685DF20)
#define FIVEDIMRENDERINGPANEL_PKPGKIEMHGF_OFFSET UNITYSDK_OFFSET(0x1685E760)
#define FIVEDIMRENDERINGPANEL_PREPARE_OFFSET UNITYSDK_OFFSET(0x1685C650)
#define FIVEDIMRENDERINGPANEL_REGISTERITEMCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x168649E0)
#define FIVEDIMRENDERINGPANEL_REGISTERITEMDITHER_OFFSET UNITYSDK_OFFSET(0x1685A7B0)
#define FIVEDIMRENDERINGPANEL_REGISTERRENDERER_1_OFFSET UNITYSDK_OFFSET(0x16863590)
#define FIVEDIMRENDERINGPANEL_REGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0x16863420)
#define FIVEDIMRENDERINGPANEL_REGISTITEM_OFFSET UNITYSDK_OFFSET(0x16858EC0)
#define FIVEDIMRENDERINGPANEL_RESETLASTUPDATECOUNT_OFFSET UNITYSDK_OFFSET(0x16861350)
#define FIVEDIMRENDERINGPANEL_SETPROTOTYPEMATPARAM_OFFSET UNITYSDK_OFFSET(0x1685B0E0)
#define FIVEDIMRENDERINGPANEL_SETRENDERERDITHER_OFFSET UNITYSDK_OFFSET(0x16863700)
#define FIVEDIMRENDERINGPANEL_SET_BOUNDSCENTER_OFFSET UNITYSDK_OFFSET(0x1685B9E0)
#define FIVEDIMRENDERINGPANEL_SET_BOUNDSSIZE_OFFSET UNITYSDK_OFFSET(0x1685BAC0)
#define FIVEDIMRENDERINGPANEL_SET_CUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x1685C150)
#define FIVEDIMRENDERINGPANEL_SET_DITHERALPHA_OFFSET UNITYSDK_OFFSET(0x1685B8A0)
#define FIVEDIMRENDERINGPANEL_SET_FOGSCALE_OFFSET UNITYSDK_OFFSET(0x1685BCD0)
#define FIVEDIMRENDERINGPANEL_SET_FORCEPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1685C210)
#define FIVEDIMRENDERINGPANEL_SET_INVERTBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x1685BB90)
#define FIVEDIMRENDERINGPANEL_SET_ITEMCUSTOMHIZTEST_OFFSET UNITYSDK_OFFSET(0x1685BFD0)
#define FIVEDIMRENDERINGPANEL_SET_ITEMISCPUCULLED_OFFSET UNITYSDK_OFFSET(0x1685C2D0)
#define FIVEDIMRENDERINGPANEL_SET_LIGHTDIR_OFFSET UNITYSDK_OFFSET(0x1685BC10)
#define FIVEDIMRENDERINGPANEL_SET_USEBOUNDSCLIP_OFFSET UNITYSDK_OFFSET(0x1685B960)
#define FIVEDIMRENDERINGPANEL_SET_USECUSTOMDRAWLAYER_OFFSET UNITYSDK_OFFSET(0x1685C090)
#define FIVEDIMRENDERINGPANEL_TICKRENDERPHASE1_OFFSET UNITYSDK_OFFSET(0x1685D8E0)
#define FIVEDIMRENDERINGPANEL_TICKRENDERPHASE2_OFFSET UNITYSDK_OFFSET(0x1685DD70)
#define FIVEDIMRENDERINGPANEL_TICKRENDER_OFFSET UNITYSDK_OFFSET(0x1685DE00)
#define FIVEDIMRENDERINGPANEL_TRYSETSHAREDMATSTATE_OFFSET UNITYSDK_OFFSET(0x16863AE0)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEMCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x16864C80)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEMDITHER_OFFSET UNITYSDK_OFFSET(0x1685A990)
#define FIVEDIMRENDERINGPANEL_UNREGISTERITEM_OFFSET UNITYSDK_OFFSET(0x16859D40)
#define FIVEDIMRENDERINGPANEL_UNREGISTERRENDERER_OFFSET UNITYSDK_OFFSET(0x168639B0)
#define FIVEDIMRENDERINGPANEL_UPDATEINSTANCEDITEMBOUNDSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1685D950)

inline static constexpr unsigned int FiveDimRenderingPanel_TypeDefinitionIndex = 48148;

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
		::System::Single _fogScale; // 0x58
		::System::Boolean UsePrototypeExpand; // 0x5C
		::System::Byte _padding2[0x3];
		::System::Single PrototypeExpandScale; // 0x60
		::System::Byte _padding3[0x4];
		::ABGNMNDCEND* EBILLBOENIN; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* BHGBOPDEKMG; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* HCIFKCELOPO; // 0x78
		::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* BJBEIKLJMAH; // 0x80
		::System::Collections::Generic::List_1<::System::UInt64>* CJJONHINAAE; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* OLLCJIHNDFI; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* NDOMNPPIALJ; // 0x98
		::System::Collections::Generic::List_1<::System::Boolean>* MFMAJFBLBFI; // 0xA0
		::System::Boolean KGBFBPIODLK; // 0xA8
		::System::Boolean externalDrivenRender; // 0xA9
		::System::Boolean externalDrivenUpdate; // 0xAA
		::System::Boolean panelPosDirty; // 0xAB
		::System::Boolean clipDirty; // 0xAC
		::System::Boolean lightingDirty; // 0xAD
		::System::Boolean RegisterChildWhenEnable; // 0xAE
		::System::Byte _padding4[0x1];
		::UnityEngine::Transform* GOFNJPLABPI; // 0xB0
		::System::Boolean panelCpuCulled; // 0xB8
		::System::Byte _padding5[0x3];
		::System::Int32 boundsCalculateCount; // 0xBC
		::System::Boolean instancedBoundsDirty; // 0xC0
		::System::Boolean dynamicInstancedBoundsDirty; // 0xC1
		::System::Boolean staticInstancedBoundsDirty; // 0xC2
		::System::Boolean KBKFLFAFFOP; // 0xC3
		::System::Boolean CCCKNHLOICO; // 0xC4
		::System::Boolean OGHNDHLKGMA; // 0xC5
		::System::Byte _padding6[0x2];
		::UnityEngine::Bounds ABLHIPGJBHK; // 0xC8
		::UnityEngine::Bounds JEIMHEJCOOI; // 0xE0
		::UnityEngine::Bounds IKEICAMDFDF; // 0xF8
		::System::Int32 POMCOCJGFHF; // 0x110
		::System::Byte _padding7[0x4];
		::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>* JCLDKIHILDK; // 0x118
		::System::Collections::Generic::HashSet_1<::FiveDimRenderingItem*>* IKLKKLKPGFP; // 0x120
		::System::Boolean useSerializedData; // 0x128
		::System::Byte _padding8[0x7];
		::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* serializedPrototypes; // 0x130
		::System::Collections::Generic::List_1<::System::Object*>* serializedInstances; // 0x138
		::System::Collections::Generic::List_1<::IDGOINOHFEE*>* DHNHEELELLE; // 0x140
		::UnityEngine::GameObject* BHDAOCBFPOG; // 0x148
		static ::System::Int32* StaticGet_ANMEPJNBDMF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10EF0);
		}

		static ::System::Int32* StaticGet_FAONCHMBCBB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10EF4);
		}

		static ::System::Int32* StaticGet_NLNJLMAEGKI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10EF8);
		}

		static ::System::Int32* StaticGet_ADLFKLLDPBJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10EFC);
		}

		static ::System::Int32* StaticGet_DEHOEOFPEIK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10F00);
		}

		static ::System::Int32* StaticGet_HHAEIDMBAHE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10F04);
		}

		static ::System::Int32* StaticGet_CBJHNGBICBN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10F08);
		}

		static ::System::Int32* StaticGet_KPIDPJBKJII()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10F0C);
		}

		static ::System::Int32* StaticGet_IMIDNKBAMNI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10F10);
		}

		static ::System::Int32* StaticGet_LIGICMLEABF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10F14);
		}

		static ::System::Int32* StaticGet_CKIDJOPJMBP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10F18);
		}

		static ::System::Int32* StaticGet_JBJPBPIFJDF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FiveDimRenderingPanel")->GetStaticField(0x10F1C);
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

		::System::Single get_FogScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_GET_FOGSCALE_OFFSET))(this);
		}

		::System::Void set_FogScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_SET_FOGSCALE_OFFSET))(this, a1);
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

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_ONVALIDATE_OFFSET))(this);
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

		::System::Void MEDJPPJBMNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_MEDJPPJBMNH_OFFSET))(this);
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

		::System::Void OLFELKHOEEH(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_OLFELKHOEEH_OFFSET))(this, a1);
		}

		::System::Void BFCMCCCFKJD(::DEBEAKKOHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGPANEL_BFCMCCCFKJD_OFFSET))(this, a1);
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
