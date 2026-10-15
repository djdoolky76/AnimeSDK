#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class CoastinfoWaveMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_AAMBDPNOFAG_OFFSET UNITYSDK_OFFSET(0xCB8DD50)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_ANFFLAJPOMN_OFFSET UNITYSDK_OFFSET(0xCB8CEC0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_BKCOHBDJKOA_OFFSET UNITYSDK_OFFSET(0xCB91820)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_CCPIHLBINAI_OFFSET UNITYSDK_OFFSET(0xCB8A190)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB92550)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCB91EE0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCB92290)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_FBNKIDBAPOO_OFFSET UNITYSDK_OFFSET(0xCB8DA10)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_FCKJGDGGHGA_OFFSET UNITYSDK_OFFSET(0xCB8A040)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_FFBNLOKJAAH_OFFSET UNITYSDK_OFFSET(0xCB8A9F0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_FKKJAFKADHP_OFFSET UNITYSDK_OFFSET(0xCB8DF00)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCB8C620)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_GILPGMLBAHB_OFFSET UNITYSDK_OFFSET(0xCB909E0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_HJEKCBAEDBD_OFFSET UNITYSDK_OFFSET(0xCB91300)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_JAJAMEEMGCN_OFFSET UNITYSDK_OFFSET(0xCB8C660)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_JEFLGHICNJH_OFFSET UNITYSDK_OFFSET(0xCB8EB10)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_JGGHDLAHENA_OFFSET UNITYSDK_OFFSET(0xCB8C930)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_JIGJNOGKKJF_OFFSET UNITYSDK_OFFSET(0xCB8AA70)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCB91F40)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_KCMGJCNAIGH_OFFSET UNITYSDK_OFFSET(0xCB90FD0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_KJDHILPBKBL_OFFSET UNITYSDK_OFFSET(0xCB8EE20)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_KMGNKHONNHB_OFFSET UNITYSDK_OFFSET(0xCB898B0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_KNEHIFFNHGJ_OFFSET UNITYSDK_OFFSET(0xCB8ACF0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCB91D80)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_MAMJJAJFDJK_OFFSET UNITYSDK_OFFSET(0xCB8D3B0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCB91E70)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_MFCFLDLCJEL_OFFSET UNITYSDK_OFFSET(0xCB8E4A0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_MHMNHALFNMI_OFFSET UNITYSDK_OFFSET(0xCB8E830)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_MLCMJPOLIOO_OFFSET UNITYSDK_OFFSET(0xCB90200)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCB92040)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_NKFABDFLDJF_OFFSET UNITYSDK_OFFSET(0xCB92100)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCB91FA0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_OJFMMNCHBED_OFFSET UNITYSDK_OFFSET(0xCB8BC30)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCB91E10)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_PGOJHDBBJEB_OFFSET UNITYSDK_OFFSET(0xCB8FC70)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCB92000)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCB920A0)
#define RPG_CLIENT_COASTINFOWAVEBEHAVIOR__COMPUTENEARFARFROMBOUNDS_G__EXTENTALONGDIR_2_0_OFFSET UNITYSDK_OFFSET(0xCB8A9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CoastinfoWaveBehavior_TypeDefinitionIndex = 70926;

	class CoastinfoWaveBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _tmActive; // 0x38
		::System::Byte _padding0[0x7];
		::UnityEngine::Mesh* _tmSharedMesh; // 0x40
		::Il2CppArray<::UnityEngine::Mesh*>* _tmMeshGroupMeshes; // 0x48
		::Il2CppArray<::System::Boolean>* _tmMeshGroupIsBaked; // 0x50
		::Il2CppArray<::System::Int32>* _tmMeshGroupResolutions; // 0x58
		::Il2CppArray<::System::Int32>* _lodToMeshGroup; // 0x60
		::System::Int32 _tmMeshGroupCount; // 0x68
		::System::Byte _padding1[0x4];
		::UnityEngine::Material* _tmMat; // 0x70
		::UnityEngine::MaterialPropertyBlock* _tmMPB; // 0x78
		::System::Int32 _tmSourceMatId; // 0x80
		::System::Byte _padding2[0x4];
		::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* _tmMeshGroupMatrices; // 0x88
		::Il2CppArray<::Il2CppArray<::UnityEngine::Vector4>*>* _tmMeshGroupSeamMasks; // 0x90
		::Il2CppArray<::Il2CppArray<::UnityEngine::Vector4>*>* _tmMeshGroupSeamSpacings; // 0x98
		::Il2CppArray<::System::Int32>* _tmMeshGroupInstanceCounts; // 0xA0
		::Il2CppArray<::UnityEngine::Matrix4x4>* _tmBatch1023; // 0xA8
		::Il2CppArray<::UnityEngine::Vector4>* _tmBatchSeamMasks; // 0xB0
		::Il2CppArray<::UnityEngine::Vector4>* _tmBatchSeamSpacings; // 0xB8
		::System::Int32 _tmInstanceCount; // 0xC0
		::System::Boolean _tmDirtyMatrices; // 0xC4
		::System::Byte _padding3[0x3];
		::System::Int32 _tmFrameCounter; // 0xC8
		::UnityEngine::Vector3 _tmLastSnapOriginWS; // 0xCC
		::UnityEngine::Quaternion _tmLastSnapCamRot; // 0xD8
		::System::Boolean _tmHasSnapCamRot; // 0xE8
		::System::Byte _padding4[0x3];
		::UnityEngine::Quaternion _tmPreviousTickCamRot; // 0xEC
		::System::Boolean _tmHasPreviousTickCamRot; // 0xFC
		::System::Byte _padding5[0x3];
		::System::Single _tmLastTileSize; // 0x100
		::System::Int32 _tmLastTileResolution; // 0x104
		::System::Int32 _tmLastMeshResolutionHash; // 0x108
		::System::Int32 _tmLastBakedMeshCacheHash; // 0x10C
		::System::Int32 _tmLastLodLevels; // 0x110
		::System::Single _tmLastFrustumExpandPerSideDegrees; // 0x114
		::System::Single _tmLastFrustumPadding; // 0x118
		::System::Single _tmLastSkirtDepth; // 0x11C
		::System::Boolean _tmLastSeamSnapEnabled; // 0x120
		::System::Byte _padding6[0x3];
		::UnityEngine::Vector3 _refOriginWS; // 0x124
		::UnityEngine::Vector3 _refAxisT_WS; // 0x130
		::UnityEngine::Vector3 _refAxisN_WS; // 0x13C
		::UnityEngine::Vector3 _refNormalWS; // 0x148
		::UnityEngine::Quaternion _refRotWS; // 0x154
		::System::Single _refWidthWorld; // 0x164
		::System::Single _refDepthWorld; // 0x168
		::UnityEngine::Vector4 _refCornerUV00_10; // 0x16C
		::UnityEngine::Vector4 _refCornerUV01_11; // 0x17C
		::UnityEngine::Vector4 _refUVAffineU; // 0x18C
		::UnityEngine::Vector4 _refUVAffineV; // 0x19C
		::System::Byte _padding7[0x4];
		::Il2CppArray<::UnityEngine::Vector4>* _seaClipCenterHalf; // 0x1B0
		::Il2CppArray<::UnityEngine::Vector4>* _seaClipAxes; // 0x1B8
		::UnityEngine::Vector3 _tmTileScale; // 0x1C0
		::System::Byte _padding8[0x4];
		::Il2CppArray<::UnityEngine::Plane>* _tmFrustumPlanes; // 0x1D0
		::Il2CppArray<::System::Single>* _lodRingOuter; // 0x1D8
		::Il2CppArray<::System::Int32>* _lodHalfCounts; // 0x1E0
		::Il2CppArray<::System::Int32>* _lodCamTileIx; // 0x1E8
		::Il2CppArray<::System::Int32>* _lodCamTileIz; // 0x1F0
		::Il2CppArray<::System::Int32>* _lodOuterMinU; // 0x1F8
		::Il2CppArray<::System::Int32>* _lodOuterMaxU; // 0x200
		::Il2CppArray<::System::Int32>* _lodOuterMinV; // 0x208
		::Il2CppArray<::System::Int32>* _lodOuterMaxV; // 0x210
		::Il2CppArray<::System::Int32>* _lodInnerMinU; // 0x218
		::Il2CppArray<::System::Int32>* _lodInnerMaxU; // 0x220
		::Il2CppArray<::System::Int32>* _lodInnerMinV; // 0x228
		::Il2CppArray<::System::Int32>* _lodInnerMaxV; // 0x230
		::Il2CppArray<::System::Single>* _lodTileSizes; // 0x238
		::Il2CppArray<::System::Single>* _lodHalfExtents; // 0x240
		::Il2CppArray<::UnityEngine::Vector3>* _lodTileExtents; // 0x248
		::Il2CppArray<::UnityEngine::Vector3>* _lodTileScale; // 0x250
		static ::System::Int32* StaticGet_ID_SeaClipCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BC0);
		}

		static ::System::Int32* StaticGet_ID_TileSeamEnabled()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BC4);
		}

		static ::System::Int32* StaticGet_ID_SeaClipCenterHalf()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BC8);
		}

		static ::System::Int32* StaticGet_ID_TileSeamSpacing()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BCC);
		}

		static ::System::Int32* StaticGet_ID_RefSizeWS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BD0);
		}

		static ::System::Int32* StaticGet_ID_RefUV00_10()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BD4);
		}

		static ::System::Int32* StaticGet_ID_CustomLightMtxRow1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BD8);
		}

		static ::System::Int32* StaticGet_ID_CustomLightMtxRow0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BDC);
		}

		static ::System::Int32* StaticGet_ID_SeaClipAxes()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BE0);
		}

		static ::System::Int32* StaticGet_ID_TM_WrapMode()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BE4);
		}

		static ::System::Int32* StaticGet_ID_RefUVAffineV()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BE8);
		}

		static ::System::Int32* StaticGet_ID_CustomLightMtxRow2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BEC);
		}

		static ::System::Int32* StaticGet_ID_TM_Switch()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BF0);
		}

		static ::System::Int32* StaticGet_ID_TileSeamMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BF4);
		}

		static ::System::Int32* StaticGet_ID_RefAxisT_WS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BF8);
		}

		static ::System::Int32* StaticGet_ID_RefUV01_11()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4BFC);
		}

		static ::System::Int32* StaticGet_ID_CustomLightFinalDir()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4C00);
		}

		static ::System::Int32* StaticGet_ID_RefOriginWS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4C04);
		}

		static ::System::Int32* StaticGet_ID_RefUVAffineU()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4C08);
		}

		static ::System::Int32* StaticGet_ID_RefAxisN_WS()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4C0C);
		}

		static ::System::Int32* StaticGet_ID_CustomLightMode()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CoastinfoWaveBehavior")->GetStaticField(0x4C10);
		}

		// static const ::System::Object kMaxMeshGroups; // 0x0
		// static const ::System::Object kMaxInstancesPerBatch; // 0x0
		// static const ::System::Object kMaxSeaClipZones; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_CCTOR_OFFSET))();
		}

		static ::System::Void KMGNKHONNHB(::UnityEngine::Mesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_KMGNKHONNHB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FCKJGDGGHGA(::Il2CppArray<::UnityEngine::ComputeBuffer*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::ComputeBuffer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_FCKJGDGGHGA_OFFSET))(a1);
		}

		static ::System::Boolean CCPIHLBINAI(::UnityEngine::Camera* a1, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_CCPIHLBINAI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void FFBNLOKJAAH(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_FFBNLOKJAAH_OFFSET))(a1);
		}

		::System::Void JIGJNOGKKJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_JIGJNOGKKJF_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* KNEHIFFNHGJ(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_KNEHIFFNHGJ_OFFSET))(a1, a2, a3);
		}

		::System::Boolean OJFMMNCHBED(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_OJFMMNCHBED_OFFSET))(this, a1);
		}

		static ::System::Void JAJAMEEMGCN(::RPG::Client::CoastinfoWaveMonoPlugin* a1)
		{
			return ((::System::Void(*)(::RPG::Client::CoastinfoWaveMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_JAJAMEEMGCN_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 JGGHDLAHENA()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_JGGHDLAHENA_OFFSET))();
		}

		::System::Void ANFFLAJPOMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_ANFFLAJPOMN_OFFSET))(this);
		}

		::System::Int32 MAMJJAJFDJK(::RPG::Client::CoastinfoWaveMonoPlugin* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CoastinfoWaveMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_MAMJJAJFDJK_OFFSET))(this, a1);
		}

		::System::Void FBNKIDBAPOO(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_FBNKIDBAPOO_OFFSET))(this, a1, a2);
		}

		::System::Void AAMBDPNOFAG(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_AAMBDPNOFAG_OFFSET))(this, a1);
		}

		::System::Void FKKJAFKADHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_FKKJAFKADHP_OFFSET))(this);
		}

		::System::Void MFCFLDLCJEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_MFCFLDLCJEL_OFFSET))(this);
		}

		static ::System::Boolean MHMNHALFNMI(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_MHMNHALFNMI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JEFLGHICNJH(::UnityEngine::Camera* a1, ::Il2CppArray<::UnityEngine::Plane>* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::Plane>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_JEFLGHICNJH_OFFSET))(a1, a2, a3);
		}

		::System::Boolean KJDHILPBKBL(::UnityEngine::Camera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_KJDHILPBKBL_OFFSET))(this, a1, a2);
		}

		::System::Void PGOJHDBBJEB(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Single a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9, ::RPG::Client::CoastinfoWaveMonoPlugin* a10, ::System::Int32 a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::CoastinfoWaveMonoPlugin*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_PGOJHDBBJEB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void MLCMJPOLIOO(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7, ::System::Single a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::RPG::Client::CoastinfoWaveMonoPlugin* a11, ::System::Int32 a12)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::CoastinfoWaveMonoPlugin*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_MLCMJPOLIOO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void KCMGJCNAIGH(::RPG::Client::CoastinfoWaveMonoPlugin* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::UnityEngine::Vector4 a5, ::UnityEngine::Vector4 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CoastinfoWaveMonoPlugin*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_KCMGJCNAIGH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean GILPGMLBAHB(::RPG::Client::CoastinfoWaveMonoPlugin* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CoastinfoWaveMonoPlugin*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_GILPGMLBAHB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HJEKCBAEDBD(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_HJEKCBAEDBD_OFFSET))(this, a1);
		}

		::System::Void BKCOHBDJKOA(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_BKCOHBDJKOA_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::CoastinfoWaveMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::CoastinfoWaveMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void NKFABDFLDJF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR_NKFABDFLDJF_OFFSET))(this, a1);
		}

		static ::System::Single _ComputeNearFarFromBounds_g__ExtentAlongDir_2_0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEBEHAVIOR__COMPUTENEARFARFROMBOUNDS_G__EXTENTALONGDIR_2_0_OFFSET))(a1, a2);
		}

	};
}
