#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/MonoTerrainZoneVoxel_BEFDJNDCGNA.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/System/Numerics/Vector3.h"

class EPBCKEFEADP;
namespace MoleMole { class MonoDynamicObjectVoxel; }
namespace MoleMole { class MonoStageEnv; }
namespace MoleMole { class MonoTerrainZoneVoxel_VoxelData; }
namespace MoleMole::Voxel { class VoxelArray; }
namespace MoleMole::Voxel { class VoxelCompressArray; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_MONOTERRAINZONEVOXEL_ACLMIIKMPIA_OFFSET UNITYSDK_OFFSET(0x14B06530)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ADDDYNAMICOBJECTVOXEL_OFFSET UNITYSDK_OFFSET(0x14B06580)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_BBGBCMHBNND_OFFSET UNITYSDK_OFFSET(0x14B07C90)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_BLPACEFLCDN_OFFSET UNITYSDK_OFFSET(0x14B07BC0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_CFNGPFKIFBH_OFFSET UNITYSDK_OFFSET(0x14B074D0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_DLNIAHNJGEA_OFFSET UNITYSDK_OFFSET(0x14B04CC0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_EAKMJJAPJHH_OFFSET UNITYSDK_OFFSET(0x14B079E0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_EGGMEAGKBHA_1_OFFSET UNITYSDK_OFFSET(0x14B07990)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_EGGMEAGKBHA_OFFSET UNITYSDK_OFFSET(0x14B072B0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_EMPHMNMDPNK_OFFSET UNITYSDK_OFFSET(0x14B07360)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_COMPRESSEDARRAY_OFFSET UNITYSDK_OFFSET(0x14B06170)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_OCT_OFFSET UNITYSDK_OFFSET(0x14B05910)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_OFFSET UNITYSDK_OFFSET(0x14B05810)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_RAWARRAY_OFFSET UNITYSDK_OFFSET(0x14B05E80)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_FNADNKNOBAK_OFFSET UNITYSDK_OFFSET(0x14B06CD0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_GETSURFACECOVERSWITCHINFO_OFFSET UNITYSDK_OFFSET(0x14B04220)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_GETSURFACESWITCHINFO_OFFSET UNITYSDK_OFFSET(0x14B04090)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_GETUNSCALEPOS_OFFSET UNITYSDK_OFFSET(0x14B054F0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_GETVOXEL_OFFSET UNITYSDK_OFFSET(0x14B055E0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_GKOCBBPAJLE_OFFSET UNITYSDK_OFFSET(0x14B07400)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_GMECMEFOPAA_OFFSET UNITYSDK_OFFSET(0x14B066E0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_HHCBLPDCJNA_OFFSET UNITYSDK_OFFSET(0x14B06E30)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_HLMELOGOJOD_OFFSET UNITYSDK_OFFSET(0x14B07DB0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_IFKNLGPGBCN_OFFSET UNITYSDK_OFFSET(0x14B07530)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_JAFAACAOEAK_OFFSET UNITYSDK_OFFSET(0x14B07E60)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_JGJFJHDCEEJ_OFFSET UNITYSDK_OFFSET(0x14B07020)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_KAPDOGMKOFM_OFFSET UNITYSDK_OFFSET(0x14B07D30)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_KBBMEMOKAEL_OFFSET UNITYSDK_OFFSET(0x14B04890)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_KDKOCNKFDMK_OFFSET UNITYSDK_OFFSET(0x14B05790)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_LICEFPEPFFJ_OFFSET UNITYSDK_OFFSET(0x14B07CD0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_MFCMKKHOILI_OFFSET UNITYSDK_OFFSET(0x14B07080)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_MKGGEIBDIJG_OFFSET UNITYSDK_OFFSET(0x14B07840)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_MPOJPEPOAOL_OFFSET UNITYSDK_OFFSET(0x14B04670)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_NIAMOGANEPN_OFFSET UNITYSDK_OFFSET(0x14B077A0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_NNMLOACDCDF_OFFSET UNITYSDK_OFFSET(0x14B07300)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ODOAPLFHCCC_OFFSET UNITYSDK_OFFSET(0x14B04FC0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_OKHBPJHGPLP_OFFSET UNITYSDK_OFFSET(0x14B07460)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14B045F0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14B045B0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_PACKMATTYPE_OFFSET UNITYSDK_OFFSET(0x14B04380)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_PACKSPANDATATOTOP_OFFSET UNITYSDK_OFFSET(0x14B04560)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_REMOVEDYNAMICOBJECTVOXEL_OFFSET UNITYSDK_OFFSET(0x14B06630)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_RESETVOXEL_OFFSET UNITYSDK_OFFSET(0x14B05590)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_START_OFFSET UNITYSDK_OFFSET(0x14B04B70)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_UNPACKMATTYPE_OFFSET UNITYSDK_OFFSET(0x14B044C0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x14B04F70)
#define MOLEMOLE_MONOTERRAINZONEVOXEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B06C60)
#define MOLEMOLE_MONOTERRAINZONEVOXEL__CTOR_OFFSET UNITYSDK_OFFSET(0x14B068E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZoneVoxel_TypeDefinitionIndex = 63475;

	class MonoTerrainZoneVoxel : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_1<::UnityEngine::Vector3>** StaticGet_MJDJHIIOPBA()
		{
			return (::System::Action_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MonoTerrainZoneVoxel_TypeDefinitionIndex)->GetStaticField(0x34B00);
		}
		static ::System::Byte* StaticGet_BASE_MAT_MAX_RANGE()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonoTerrainZoneVoxel_TypeDefinitionIndex)->GetStaticField(0xB1E0);
		}
		static ::System::Byte* StaticGet_COVER_MAT_MAX_RANGE()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonoTerrainZoneVoxel_TypeDefinitionIndex)->GetStaticField(0xB1E1);
		}
		static ::System::Int32* StaticGet_FDHDEMNIEPN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoTerrainZoneVoxel_TypeDefinitionIndex)->GetStaticField(0xB1E4);
		}
		static ::System::Int32* StaticGet_LNPPKAKOEIO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoTerrainZoneVoxel_TypeDefinitionIndex)->GetStaticField(0xB1E8);
		}
		// static const ::System::String* MJLJOFBPILB; // 0x0
		::MoleMole::MonoTerrainZoneVoxel_BEFDJNDCGNA OFCENPKIIKD; // 0x18
		::MoleMole::Config::WeatherType bakedWeatherType; // 0x1C
		::Il2CppArray<::System::Object*>* weatherVoxelData; // 0x20
		::MoleMole::Voxel::VoxelArray* weatherVoxelArray; // 0x28
		::MoleMole::Voxel::VoxelCompressArray* weatherVoxelCompressedArray; // 0x30
		::UnityEngine::Vector3Int voxelMeta; // 0x38
		::UnityEngine::Vector3 voxelMin; // 0x44
		::UnityEngine::Vector3 voxelMax; // 0x50
		::UnityEngine::Vector2 voxelPrecision; // 0x5C
		::System::Single QueryRadis; // 0x64
		::UnityEngine::Vector3 CharacterPos; // 0x68
		::UnityEngine::Vector3 VoxelCharacterPos; // 0x74
		::MoleMole::MonoStageEnv* EEPBBJJPAHG; // 0x80
		::System::Boolean HKBHKFPCJND; // 0x88
		::System::Byte _padding0[0x3];
		::MoleMole::Config::WeatherType _currentTerrainWeatherType; // 0x8C
		::System::Collections::Generic::List_1<::System::Byte>* EPHAGOFLDFG; // 0x90
		::MoleMole::Voxel::VoxelArray* DLJIDNPNDMA; // 0x98
		::System::Boolean FFOEGJPGLMN; // 0xA0
		::System::Byte _padding1[0x7];
		::Foundation::AssetRequestHandle NNBIHDEFEHC; // 0xA8
		::MoleMole::Voxel::VoxelCompressArray* ILEHLMFOJOF; // 0xC8
		::EPBCKEFEADP* LOBPIJMBMPF; // 0xD0
		::Il2CppArray<::UnityEngine::Color>* BFFHKHOGBNP; // 0xD8
		::UnityEngine::Material* LIDEAIFDGOG; // 0xE0
		::System::Boolean PFCILMCGMKD; // 0xE8
		::System::Byte _padding2[0x3];
		::UnityEngine::Bounds JIAGKPFBPKP; // 0xEC
		::System::Byte _padding3[0x4];
		::UnityEngine::ComputeBuffer* MKDPHFDFBFL; // 0x108
		::Foundation::AssetRequestHandle MFOAGFOOJAP; // 0x110
		::Il2CppArray<::System::Object*>* defaultTerrainMatTypes; // 0x130
		::System::Boolean isWorking; // 0x138
		::System::Boolean AIIOCFOHMFD; // 0x139
		::System::Byte _padding4[0x2];
		::System::Int32 JILAACIGKPN; // 0x13C
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::WeatherType, ::System::Byte>* MPFLHIPOAGD; // 0x140
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LNHNEAHBKII; // 0x148
		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> NIFIDOODANP; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL__CCTOR_OFFSET))();
		}

		static ::System::Void GetSurfaceSwitchInfo(::MoleMole::Config::TerrainMatType KNNDDLMOKCG, ::System::String*& GCMFNEDFOAK, ::System::String*& BLNPKKGMONJ)
		{
			return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_GETSURFACESWITCHINFO_OFFSET))(KNNDDLMOKCG, GCMFNEDFOAK, BLNPKKGMONJ);
		}

		static ::System::Void GetSurfaceCoverSwitchInfo(::MoleMole::Config::TerrainMatType KNNDDLMOKCG, ::System::String*& GCMFNEDFOAK, ::System::String*& BLNPKKGMONJ)
		{
			return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_GETSURFACECOVERSWITCHINFO_OFFSET))(KNNDDLMOKCG, GCMFNEDFOAK, BLNPKKGMONJ);
		}

		static ::System::Void PackMatType(::System::Int32 APHIOACPOIA, ::System::Int32 NMNENPNKDDG, ::System::Byte& ABGCEKBKIEI)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_PACKMATTYPE_OFFSET))(APHIOACPOIA, NMNENPNKDDG, ABGCEKBKIEI);
		}

		static ::System::Void UnpackMatType(::System::Byte ABGCEKBKIEI, ::System::Byte& HCMCEJGHNCJ, ::System::Byte& EHMEODELCMC)
		{
			return ((::System::Void(*)(::System::Byte, ::System::Byte&, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_UNPACKMATTYPE_OFFSET))(ABGCEKBKIEI, HCMCEJGHNCJ, EHMEODELCMC);
		}

		static ::System::Int32 PackSpanDataToTop(::System::Int16 LJBPECKCCEA, ::System::Int32 FHMHCDPLGPG)
		{
			return ((::System::Int32(*)(::System::Int16, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_PACKSPANDATATOTOP_OFFSET))(LJBPECKCCEA, FHMHCDPLGPG);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetUnScalePos(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_GETUNSCALEPOS_OFFSET))(this, CKPGOKHECCH);
		}

		::System::Void ResetVoxel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_RESETVOXEL_OFFSET))(this);
		}

		::System::Boolean GetVoxel(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Collections::Generic::List_1<::System::Byte>*& PILELGPBCLL)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::Byte>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_GETVOXEL_OFFSET))(this, CKPGOKHECCH, PILELGPBCLL);
		}

		::System::Boolean FetchVoxelWithLayer(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Byte& PJDMCGIFAPI, ::System::Byte& FJIPMELDMDF)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte&, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_OFFSET))(this, CKPGOKHECCH, PJDMCGIFAPI, FJIPMELDMDF);
		}

		::System::Boolean FetchVoxelWithLayer_RawArray(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Byte& PJDMCGIFAPI, ::System::Byte& FJIPMELDMDF)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte&, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_RAWARRAY_OFFSET))(this, CKPGOKHECCH, PJDMCGIFAPI, FJIPMELDMDF);
		}

		::System::Void AddDynamicObjectVoxel(::MoleMole::MonoDynamicObjectVoxel* LJACIKAEILI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ADDDYNAMICOBJECTVOXEL_OFFSET))(this, LJACIKAEILI);
		}

		::System::Void RemoveDynamicObjectVoxel(::MoleMole::MonoDynamicObjectVoxel* LJACIKAEILI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_REMOVEDYNAMICOBJECTVOXEL_OFFSET))(this, LJACIKAEILI);
		}

		::System::Boolean FetchVoxelWithLayer_CompressedArray(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Byte& PJDMCGIFAPI, ::System::Byte& FJIPMELDMDF)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte&, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_COMPRESSEDARRAY_OFFSET))(this, CKPGOKHECCH, PJDMCGIFAPI, FJIPMELDMDF);
		}

		::System::Boolean FetchVoxelWithLayer_Oct(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Byte& PJDMCGIFAPI, ::System::Byte& FJIPMELDMDF)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte&, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_OCT_OFFSET))(this, CKPGOKHECCH, PJDMCGIFAPI, FJIPMELDMDF);
		}

		::System::Void FNADNKNOBAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_FNADNKNOBAK_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* JGJFJHDCEEJ()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_JGJFJHDCEEJ_OFFSET))(this);
		}

		::System::Void HHCBLPDCJNA(::UnityEngine::ComputeShader* EGJFDCDEINP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_HHCBLPDCJNA_OFFSET))(this, EGJFDCDEINP);
		}

		::System::Void MFCMKKHOILI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_MFCMKKHOILI_OFFSET))(this);
		}

		::System::Void EGGMEAGKBHA(::System::String* LCEGOBBEECM, ::System::Boolean HJHAMICPOJB)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_EGGMEAGKBHA_OFFSET))(this, LCEGOBBEECM, HJHAMICPOJB);
		}

		::UnityEngine::Mesh* NNMLOACDCDF()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_NNMLOACDCDF_OFFSET))(this);
		}

		::System::Boolean EMPHMNMDPNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_EMPHMNMDPNK_OFFSET))(this);
		}

		::System::Void MPOJPEPOAOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_MPOJPEPOAOL_OFFSET))(this);
		}

		::System::Void ODOAPLFHCCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ODOAPLFHCCC_OFFSET))(this);
		}

		::System::Void OKHBPJHGPLP(::System::Boolean FBILHHBPEHD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_OKHBPJHGPLP_OFFSET))(this, FBILHHBPEHD);
		}

		::System::Void CFNGPFKIFBH(::System::Byte LJBPECKCCEA, ::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_CFNGPFKIFBH_OFFSET))(this, LJBPECKCCEA, CKPGOKHECCH);
		}

		::System::Void IFKNLGPGBCN(::MoleMole::MonoTerrainZoneVoxel_VoxelData* ICCPJMAELND)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTerrainZoneVoxel_VoxelData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_IFKNLGPGBCN_OFFSET))(this, ICCPJMAELND);
		}

		::System::Void KBBMEMOKAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_KBBMEMOKAEL_OFFSET))(this);
		}

		::System::Void MKGGEIBDIJG(::System::Object* HEAJMIGHEHG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_MKGGEIBDIJG_OFFSET))(this, HEAJMIGHEHG);
		}

		::System::Void EGGMEAGKBHA_1(::System::String* NGHLLDAJJJE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_EGGMEAGKBHA_1_OFFSET))(this, NGHLLDAJJJE);
		}

		::System::Boolean GMECMEFOPAA(::System::Byte& MBNJJODLBFK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_GMECMEFOPAA_OFFSET))(this, MBNJJODLBFK);
		}

		::System::Void EAKMJJAPJHH(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_EAKMJJAPJHH_OFFSET))(this, CKPGOKHECCH);
		}

		static ::System::Numerics::Vector3 KDKOCNKFDMK(::UnityEngine::Vector3 HFMHOELKCAJ)
		{
			return ((::System::Numerics::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_KDKOCNKFDMK_OFFSET))(HFMHOELKCAJ);
		}

		::System::Void BLPACEFLCDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_BLPACEFLCDN_OFFSET))(this);
		}

		static ::System::Void ACLMIIKMPIA(::UnityEngine::Vector3& HLFFCMIFFIB)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ACLMIIKMPIA_OFFSET))(HLFFCMIFFIB);
		}

		::System::Void LICEFPEPFFJ(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_LICEFPEPFFJ_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
		}

		static ::UnityEngine::Vector3 KAPDOGMKOFM(::System::Numerics::Vector3 HFMHOELKCAJ)
		{
			return ((::UnityEngine::Vector3(*)(::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_KAPDOGMKOFM_OFFSET))(HFMHOELKCAJ);
		}

		::System::Void HLMELOGOJOD(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_HLMELOGOJOD_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
		}

		::System::Void DLNIAHNJGEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_DLNIAHNJGEA_OFFSET))(this);
		}

		::System::Void BBGBCMHBNND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_BBGBCMHBNND_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* GKOCBBPAJLE()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_GKOCBBPAJLE_OFFSET))(this);
		}

		::System::Void JAFAACAOEAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_JAFAACAOEAK_OFFSET))(this);
		}

		::UnityEngine::Vector3 NIAMOGANEPN(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_NIAMOGANEPN_OFFSET))(this, CKPGOKHECCH);
		}
	};
}
