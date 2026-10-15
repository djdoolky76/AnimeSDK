#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Scene_InstanceArrayBehavior_EDECJGHIKOD.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class Scene_InstanceArrayBehavior_ILPMKODHGDF; }
namespace RPG::Client { class Scene_InstanceArrayElementDataMonoBase; }
namespace RPG::Client { class Scene_InstanceArrayMonoPlugin; }
namespace RPG::Client { class Scene_InstanceArrayMonoPlugin_IndexedMaterial; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_APGOLAKPKPB_OFFSET UNITYSDK_OFFSET(0xE090160)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE092BD0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE08E5D0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_CMNJJFNNPLC_OFFSET UNITYSDK_OFFSET(0xE08D070)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE0924A0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_DMKFDFGHMHG_OFFSET UNITYSDK_OFFSET(0xE08EC00)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xE08E2A0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_ENIEDGAMBGN_OFFSET UNITYSDK_OFFSET(0xE08B570)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GET__ISBAKEDATACONTAINERMODE_OFFSET UNITYSDK_OFFSET(0xE08B240)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE08B2D0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GGGIIHBKFAJ_OFFSET UNITYSDK_OFFSET(0xE0903F0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GGPIBEJPLJH_OFFSET UNITYSDK_OFFSET(0xE092320)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_HBPEOKGAFBL_OFFSET UNITYSDK_OFFSET(0xE08FED0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_HDLPCFOCKLC_OFFSET UNITYSDK_OFFSET(0xE08E8A0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_HOHBLKDLOEL_OFFSET UNITYSDK_OFFSET(0xE08EB20)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_ICIHPGNCCCN_OFFSET UNITYSDK_OFFSET(0xE08B6A0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_IEDENBINHAN_OFFSET UNITYSDK_OFFSET(0xE08E9E0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_JPNAHEDJLKH_OFFSET UNITYSDK_OFFSET(0xE08F840)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_KKGAMPFPBFG_OFFSET UNITYSDK_OFFSET(0xE08F440)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_KMOEIOPHGND_OFFSET UNITYSDK_OFFSET(0xE08F630)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE08B320)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xE08CF70)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_LDABNJOLEFL_OFFSET UNITYSDK_OFFSET(0xE08FDD0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE08E500)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xE08E840)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_MPDKBLAAEAG_OFFSET UNITYSDK_OFFSET(0xE08D190)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE08E750)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_NJJPDFCOFAH_OFFSET UNITYSDK_OFFSET(0xE090830)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE08B470)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_PIKMJJIHPME_OFFSET UNITYSDK_OFFSET(0xE08F160)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_PKAMJIMNLKM_OFFSET UNITYSDK_OFFSET(0xE092440)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE08E710)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE08CEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayBehavior_TypeDefinitionIndex = 70845;

	class Scene_InstanceArrayBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Renderer* _polymerProbeRenderer; // 0x38
		::UnityEngine::MaterialPropertyBlock* _polymerProbeMPB; // 0x40
		::RPG::Client::Scene_InstanceArrayBehavior_EDECJGHIKOD _polymerState; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Mesh*>* _MeshLookup; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* _MaterialLookup; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* _BatchGroups; // 0x88
		::Il2CppArray<::UnityEngine::Matrix4x4>* _TempMatrices; // 0x90
		::UnityEngine::MaterialPropertyBlock* _TempMPB; // 0x98
		::UnityEngine::MaterialPropertyBlock* _TempSingleMPB; // 0xA0
		::System::Collections::Generic::List_1<::System::Single>* _TmpLTZ; // 0xA8
		::System::Collections::Generic::List_1<::System::Single>* _TmpRTZ; // 0xB0
		::System::Collections::Generic::List_1<::System::Single>* _TmpRTX; // 0xB8
		::System::Collections::Generic::List_1<::System::Single>* _TmpRTY; // 0xC0
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinXZ1; // 0xC8
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinXZ2; // 0xD0
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinYZ1; // 0xD8
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinYZ2; // 0xE0
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinXY1; // 0xE8
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinYX1; // 0xF0
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinZY2; // 0xF8
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinUVOffset; // 0x100
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinForceUpN; // 0x108
		::System::Collections::Generic::List_1<::System::Single>* _TmpLinMainUVScale; // 0x110
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _TmpModuleSize; // 0x118
		::System::Collections::Generic::List_1<::System::Single>* _TmpUseAtlas; // 0x120
		::System::Collections::Generic::List_1<::System::Single>* _TmpAtlasID; // 0x128
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _TmpInstanceScale; // 0x130
		::System::Collections::Generic::List_1<::RPG::Client::Scene_InstanceArrayElementDataMonoBase*>* _ScratchElements; // 0x138
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* _ScratchMeshRenderers; // 0x140
		::System::Boolean _NeedRefreshMatrices; // 0x148
		::System::Byte _padding0[0x3];
		::System::Int32 _RuntimeLastRebuildFrame; // 0x14C
		::System::Int32 _RuntimeLastRefreshFrame; // 0x150
		::System::Int32 _RuntimeLastDrawFrame; // 0x154
		::System::Int32 _RuntimeStructureHash; // 0x158
		::System::Int32 _RuntimeLastStructureHashFrame; // 0x15C
		::UnityEngine::Animator* _CachedAnimator; // 0x160
		::System::Boolean _AnimatorCacheValid; // 0x168
		static ::System::Int32* StaticGet__PropID_LTZ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x156F0);
		}

		static ::System::Int32* StaticGet__PropID_LinZY2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x156F4);
		}

		static ::System::Int32* StaticGet__Poly_DitherOn()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x156F8);
		}

		static ::System::Int32* StaticGet__Poly_IsLodSwitching()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x156FC);
		}

		static ::System::Int32* StaticGet__PropID_LinYX1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15700);
		}

		static ::System::Int32* StaticGet__PropID_LinXZ1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15704);
		}

		static ::System::Int32* StaticGet__PropID_LinMainUVScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15708);
		}

		static ::System::Int32* StaticGet__PropID_UseAtlas()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x1570C);
		}

		static ::System::Int32* StaticGet__PropID_LinForceUpN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15710);
		}

		static ::System::Int32* StaticGet__PropID_RTY()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15714);
		}

		static ::System::Int32* StaticGet__PropID_LinUVOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15718);
		}

		static ::System::Int32* StaticGet__PropID_ModuleSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x1571C);
		}

		static ::System::Int32* StaticGet__PropID_InstanceScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15720);
		}

		static ::System::Int32* StaticGet__PropID_LinYZ1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15724);
		}

		static ::System::Int32* StaticGet__Poly_TerrainRate()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15728);
		}

		static ::System::Int32* StaticGet__Poly_DitherAlpha()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x1572C);
		}

		static ::System::Int32* StaticGet__PropID_LinXY1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15730);
		}

		static ::System::Int32* StaticGet__PropID_RTX()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15734);
		}

		static ::System::Int32* StaticGet__PropID_LinXZ2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15738);
		}

		static ::System::Int32* StaticGet__Poly_DitherFadeIn()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x1573C);
		}

		static ::System::Int32* StaticGet__PropID_AtlasID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15740);
		}

		static ::System::Int32* StaticGet__PropID_RTZ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15744);
		}

		static ::System::Int32* StaticGet__Poly_DistanceType()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15748);
		}

		static ::System::Int32* StaticGet__Poly_AdjustAlbedo()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x1574C);
		}

		static ::System::Int32* StaticGet__PropID_LinYZ2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Scene_InstanceArrayBehavior")->GetStaticField(0x15750);
		}

		// static const ::System::Object kMaxBatchSize; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Boolean get__IsBakeDataContainerMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GET__ISBAKEDATACONTAINERMODE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Boolean CMNJJFNNPLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_CMNJJFNNPLC_OFFSET))(this);
		}

		::System::Void ENIEDGAMBGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_ENIEDGAMBGN_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_MHFNJCLKNMG_OFFSET))(this);
		}

		::UnityEngine::Mesh* HDLPCFOCKLC(::System::Int32 a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_HDLPCFOCKLC_OFFSET))(this, a1);
		}

		::UnityEngine::Material* IEDENBINHAN(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_IEDENBINHAN_OFFSET))(this, a1);
		}

		::RPG::Client::Scene_InstanceArrayMonoPlugin_IndexedMaterial* HOHBLKDLOEL(::System::Int32 a1)
		{
			return ((::RPG::Client::Scene_InstanceArrayMonoPlugin_IndexedMaterial*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_HOHBLKDLOEL_OFFSET))(this, a1);
		}

		::System::Void ICIHPGNCCCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_ICIHPGNCCCN_OFFSET))(this);
		}

		::System::Void JPNAHEDJLKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_JPNAHEDJLKH_OFFSET))(this);
		}

		::System::Void HBPEOKGAFBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_HBPEOKGAFBL_OFFSET))(this);
		}

		::System::Void MPDKBLAAEAG(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_MPDKBLAAEAG_OFFSET))(this, a1);
		}

		::System::Int32 APGOLAKPKPB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_APGOLAKPKPB_OFFSET))(this);
		}

		::System::Void NJJPDFCOFAH(::RPG::Client::Scene_InstanceArrayBehavior_ILPMKODHGDF* a1, ::UnityEngine::Camera* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Scene_InstanceArrayBehavior_ILPMKODHGDF*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_NJJPDFCOFAH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KKGAMPFPBFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_KKGAMPFPBFG_OFFSET))(this);
		}

		::System::Void PKAMJIMNLKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_PKAMJIMNLKM_OFFSET))(this);
		}

		::System::Void KMOEIOPHGND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_KMOEIOPHGND_OFFSET))(this);
		}

		::System::Void GGGIIHBKFAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GGGIIHBKFAJ_OFFSET))(this);
		}

		::System::Void GGPIBEJPLJH(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GGPIBEJPLJH_OFFSET))(this, a1);
		}

		::System::Void DMKFDFGHMHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_DMKFDFGHMHG_OFFSET))(this, a1);
		}

		::System::Void LDABNJOLEFL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_LDABNJOLEFL_OFFSET))(this, a1);
		}

		static ::UnityEngine::Matrix4x4 PIKMJJIHPME(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_PIKMJJIHPME_OFFSET))(a1);
		}

		::RPG::Client::Scene_InstanceArrayMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Scene_InstanceArrayMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
