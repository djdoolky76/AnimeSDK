#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFParticles_B37FA3C1C455C7B0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/ParticleSystem_AF362526E5AFF6EF.h"
#include "unitysdk/UnityEngine/ParticleSystem_B297A9218B6E7597.h"
#include "unitysdk/UnityEngine/ParticleSystem_B7BEE7EA60C69282.h"
#include "unitysdk/UnityEngine/ParticleSystem_BC568F97191FD735.h"
#include "unitysdk/UnityEngine/ParticleSystem_BF37818FA4B8D624.h"
#include "unitysdk/UnityEngine/ParticleSystem_E0082904B8CA0508.h"
#include "unitysdk/UnityEngine/ParticleSystem_E6774BABD4022ACB.h"
#include "unitysdk/UnityEngine/ParticleSystem_EAE4062119CE6ED2.h"
#include "unitysdk/UnityEngine/ParticleSystem_EBEC79F482C4E882.h"
#include "unitysdk/UnityEngine/ParticleSystem_EEE2FC946AD3BA52.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFParticleCollisionDebris; }
namespace RayFire { class RFParticleCollisionDust; }
namespace RayFire { class RFParticleDynamicDebris; }
namespace RayFire { class RFParticleDynamicDust; }
namespace RayFire { class RFParticleNoise; }
namespace RayFire { class RayfireDebris; }
namespace RayFire { class RayfireDust; }
namespace RayFire { class RayfireRigid; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RFPARTICLES_COPYPARTICLES_OFFSET UNITYSDK_OFFSET(0x296C380)
#define RAYFIRE_RFPARTICLES_COPYROOTMESHPARTICLES_OFFSET UNITYSDK_OFFSET(0x296C8A0)
#define RAYFIRE_RFPARTICLES_CREATEDEBRISIMPACT_OFFSET UNITYSDK_OFFSET(0x296D2D0)
#define RAYFIRE_RFPARTICLES_CREATEDEBRISRIGID_OFFSET UNITYSDK_OFFSET(0x296D4D0)
#define RAYFIRE_RFPARTICLES_CREATEDEMOLITIONDEBRIS_OFFSET UNITYSDK_OFFSET(0x296D5B0)
#define RAYFIRE_RFPARTICLES_CREATEDEMOLITIONDUST_OFFSET UNITYSDK_OFFSET(0x296DA40)
#define RAYFIRE_RFPARTICLES_CREATEDUSTIMPACT_OFFSET UNITYSDK_OFFSET(0x296DED0)
#define RAYFIRE_RFPARTICLES_CREATEDUSTRIGID_OFFSET UNITYSDK_OFFSET(0x296E0D0)
#define RAYFIRE_RFPARTICLES_CREATEPARTICLESYSTEMDEBRIS_OFFSET UNITYSDK_OFFSET(0x296E1B0)
#define RAYFIRE_RFPARTICLES_CREATEPARTICLESYSTEMDUST_OFFSET UNITYSDK_OFFSET(0x296E330)
#define RAYFIRE_RFPARTICLES_CREATEPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x296E4B0)
#define RAYFIRE_RFPARTICLES_DETACHPARTICLES_OFFSET UNITYSDK_OFFSET(0x296E6E0)
#define RAYFIRE_RFPARTICLES_GETCURVEROTATIONBYLIFE_OFFSET UNITYSDK_OFFSET(0x296EF60)
#define RAYFIRE_RFPARTICLES_GETCURVEROTATIONBYSPEED_OFFSET UNITYSDK_OFFSET(0x296F1F0)
#define RAYFIRE_RFPARTICLES_GETCURVESIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x296F430)
#define RAYFIRE_RFPARTICLES_GETDEBRISTARGETS_OFFSET UNITYSDK_OFFSET(0x296F670)
#define RAYFIRE_RFPARTICLES_GETDUSTTARGETS_OFFSET UNITYSDK_OFFSET(0x296F880)
#define RAYFIRE_RFPARTICLES_GETEMISSIONMATINDEX_OFFSET UNITYSDK_OFFSET(0x296FA90)
#define RAYFIRE_RFPARTICLES_INITACTIVATIONPARTICLES_OFFSET UNITYSDK_OFFSET(0x296FBA0)
#define RAYFIRE_RFPARTICLES_INITDEMOLITIONPARTICLES_OFFSET UNITYSDK_OFFSET(0x296FD50)
#define RAYFIRE_RFPARTICLES_SETCOLLISIONDEBRIS_OFFSET UNITYSDK_OFFSET(0x296FE20)
#define RAYFIRE_RFPARTICLES_SETCOLLISIONDUST_OFFSET UNITYSDK_OFFSET(0x296FF90)
#define RAYFIRE_RFPARTICLES_SETCOLOROVERLIFE_OFFSET UNITYSDK_OFFSET(0x2970040)
#define RAYFIRE_RFPARTICLES_SETDEBRISFINALAMOUNT_OFFSET UNITYSDK_OFFSET(0x29702C0)
#define RAYFIRE_RFPARTICLES_SETDUSTFINALAMOUNT_OFFSET UNITYSDK_OFFSET(0x2970520)
#define RAYFIRE_RFPARTICLES_SETEMISSION_OFFSET UNITYSDK_OFFSET(0x2970780)
#define RAYFIRE_RFPARTICLES_SETMAIN_OFFSET UNITYSDK_OFFSET(0x29708D0)
#define RAYFIRE_RFPARTICLES_SETNOISE_OFFSET UNITYSDK_OFFSET(0x2970B50)
#define RAYFIRE_RFPARTICLES_SETPARTICLECOMPONENTS_OFFSET UNITYSDK_OFFSET(0x2970DA0)
#define RAYFIRE_RFPARTICLES_SETROTATIONBYSPEED_OFFSET UNITYSDK_OFFSET(0x29711C0)
#define RAYFIRE_RFPARTICLES_SETROTATIONOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x2971470)
#define RAYFIRE_RFPARTICLES_SETSHAPEMESH_OFFSET UNITYSDK_OFFSET(0x2971540)
#define RAYFIRE_RFPARTICLES_SETSHAPEOBJECT_OFFSET UNITYSDK_OFFSET(0x2971600)
#define RAYFIRE_RFPARTICLES_SETSIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x2971650)
#define RAYFIRE_RFPARTICLES_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x2971750)
#define RAYFIRE_RFPARTICLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x2971840)
#define RAYFIRE_RFPARTICLES__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace RayFire
{
	inline static constexpr unsigned int RFParticles_TypeDefinitionIndex = 15489;

	class RFParticles : public ::System::Object
	{
	public:
		static ::UnityEngine::ParticleSystem_MinMaxCurve* StaticGet_constantCurve()
		{
			return (::UnityEngine::ParticleSystem_MinMaxCurve*)Il2CppClass::FromTypeDefinitionIndex(RFParticles_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_debrisStr()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RFParticles_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::String** StaticGet_dustStr()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RFParticles_TypeDefinitionIndex)->GetStaticField(0x28);
		}

		static ::System::Void SetDebrisFinalAmount(::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>* AE6F379D49132D4B, ::RayFire::RFParticles_B37FA3C1C455C7B0 E24AF89A3B9AB8CD, ::System::Int32 F50E1DE9CCEF1C0C)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>*, ::RayFire::RFParticles_B37FA3C1C455C7B0, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETDEBRISFINALAMOUNT_OFFSET))(AE6F379D49132D4B, E24AF89A3B9AB8CD, F50E1DE9CCEF1C0C);
		}

		static ::System::Void SetVelocity(::UnityEngine::ParticleSystem_BF37818FA4B8D624 E53F9540C727B4AB, ::RayFire::RFParticleDynamicDebris* F79478E6FDA452CB)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_BF37818FA4B8D624, ::RayFire::RFParticleDynamicDebris*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETVELOCITY_OFFSET))(E53F9540C727B4AB, F79478E6FDA452CB);
		}

		static ::UnityEngine::ParticleSystem_MinMaxCurve GetCurveRotationBySpeed(::System::Single E880B8C7F252A5CF)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_GETCURVEROTATIONBYSPEED_OFFSET))(E880B8C7F252A5CF);
		}

		static ::System::Void SetRotationBySpeed(::UnityEngine::ParticleSystem_BC568F97191FD735 F5580E1716D05322, ::System::Single E880B8C7F252A5CF)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_BC568F97191FD735, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETROTATIONBYSPEED_OFFSET))(F5580E1716D05322, E880B8C7F252A5CF);
		}

		static ::System::Void SetDustFinalAmount(::System::Collections::Generic::List_1<::RayFire::RayfireDust*>* AE6F379D49132D4B, ::RayFire::RFParticles_B37FA3C1C455C7B0 E24AF89A3B9AB8CD, ::System::Int32 F50E1DE9CCEF1C0C)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RayfireDust*>*, ::RayFire::RFParticles_B37FA3C1C455C7B0, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETDUSTFINALAMOUNT_OFFSET))(AE6F379D49132D4B, E24AF89A3B9AB8CD, F50E1DE9CCEF1C0C);
		}

		static ::System::Int32 GetEmissionMatIndex(::UnityEngine::Renderer* E7A817CCB63CA4F5, ::UnityEngine::Material* A54EF53C742D300D)
		{
			return ((::System::Int32(*)(::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_GETEMISSIONMATINDEX_OFFSET))(E7A817CCB63CA4F5, A54EF53C742D300D);
		}

		static ::System::Void CreateDustRigid(::RayFire::RayfireDust* F249A74E7BFBE1A7)
		{
			return ((::System::Void(*)(::RayFire::RayfireDust*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_CREATEDUSTRIGID_OFFSET))(F249A74E7BFBE1A7);
		}

		static ::System::Void InitDemolitionParticles(::RayFire::RayfireRigid* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_INITDEMOLITIONPARTICLES_OFFSET))(AFE8F10692F5139F);
		}

		static ::System::Void SetNoise(::UnityEngine::ParticleSystem_EAE4062119CE6ED2 F40E4EEC7A2E837E, ::RayFire::RFParticleNoise* FBBC9C0E33689BAF)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EAE4062119CE6ED2, ::RayFire::RFParticleNoise*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETNOISE_OFFSET))(F40E4EEC7A2E837E, FBBC9C0E33689BAF);
		}

		static ::System::Void SetSizeOverLifeTime(::UnityEngine::ParticleSystem_E6774BABD4022ACB A12CA7AC8F1E3648, ::UnityEngine::Vector3 F54AF627638DE3C9)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_E6774BABD4022ACB, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETSIZEOVERLIFETIME_OFFSET))(A12CA7AC8F1E3648, F54AF627638DE3C9);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES__CTOR_OFFSET))(this);
		}

		static ::System::Void CopyRootMeshParticles(::RayFire::RayfireRigid* AFE8F10692F5139F, ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* AE6F379D49132D4B)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_COPYROOTMESHPARTICLES_OFFSET))(AFE8F10692F5139F, AE6F379D49132D4B);
		}

		static ::System::Void SetShapeMesh(::UnityEngine::ParticleSystem_AF362526E5AFF6EF B604B19684521061, ::UnityEngine::Mesh* FF762A0FE86505A5, ::System::Int32 F7F39AAD7A36778D, ::UnityEngine::Vector3 BB13E330F03B905C)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_AF362526E5AFF6EF, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETSHAPEMESH_OFFSET))(B604B19684521061, FF762A0FE86505A5, F7F39AAD7A36778D, BB13E330F03B905C);
		}

		static ::System::Void CreateDebrisImpact(::RayFire::RayfireDebris* B339D225BCBFDE30, ::UnityEngine::Vector3 B038E4A0878A50F2, ::UnityEngine::Vector3 E5918751FB23E61F)
		{
			return ((::System::Void(*)(::RayFire::RayfireDebris*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_CREATEDEBRISIMPACT_OFFSET))(B339D225BCBFDE30, B038E4A0878A50F2, E5918751FB23E61F);
		}

		static ::UnityEngine::ParticleSystem_MinMaxCurve GetCurveRotationByLife(::System::Single B1B809B8F59553D0)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_GETCURVEROTATIONBYLIFE_OFFSET))(B1B809B8F59553D0);
		}

		static ::System::Void CreateDemolitionDebris(::RayFire::RayfireRigid* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_CREATEDEMOLITIONDEBRIS_OFFSET))(AFE8F10692F5139F);
		}

		static ::System::Void InitActivationParticles(::RayFire::RayfireRigid* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_INITACTIVATIONPARTICLES_OFFSET))(AFE8F10692F5139F);
		}

		static ::UnityEngine::ParticleSystem* CreateParticleSystemDebris(::RayFire::RayfireDebris* B339D225BCBFDE30)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::RayFire::RayfireDebris*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_CREATEPARTICLESYSTEMDEBRIS_OFFSET))(B339D225BCBFDE30);
		}

		static ::UnityEngine::ParticleSystem* CreateParticleSystem(::UnityEngine::Transform* F64C72FFEBBF3A94)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_CREATEPARTICLESYSTEM_OFFSET))(F64C72FFEBBF3A94);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES__CCTOR_OFFSET))();
		}

		static ::UnityEngine::ParticleSystem* CreateParticleSystemDust(::RayFire::RayfireDust* EA9A88A069455750)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::RayFire::RayfireDust*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_CREATEPARTICLESYSTEMDUST_OFFSET))(EA9A88A069455750);
		}

		static ::System::Void CopyParticles(::RayFire::RayfireRigid* AFE8F10692F5139F, ::RayFire::RayfireRigid* F249A74E7BFBE1A7)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_COPYPARTICLES_OFFSET))(AFE8F10692F5139F, F249A74E7BFBE1A7);
		}

		static ::System::Void SetColorOverLife(::UnityEngine::ParticleSystem_EBEC79F482C4E882 F02450C35A842973, ::System::Single A14621B60015AFD0)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EBEC79F482C4E882, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETCOLOROVERLIFE_OFFSET))(F02450C35A842973, A14621B60015AFD0);
		}

		static ::System::Void CreateDemolitionDust(::RayFire::RayfireRigid* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_CREATEDEMOLITIONDUST_OFFSET))(AFE8F10692F5139F);
		}

		static ::System::Void DetachParticles(::RayFire::RayfireRigid* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_DETACHPARTICLES_OFFSET))(AFE8F10692F5139F);
		}

		static ::System::Void SetCollisionDebris(::UnityEngine::ParticleSystem_EEE2FC946AD3BA52 B6BB4AD5CC511FFB, ::RayFire::RFParticleCollisionDebris* F86513DEE5D16613)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EEE2FC946AD3BA52, ::RayFire::RFParticleCollisionDebris*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETCOLLISIONDEBRIS_OFFSET))(B6BB4AD5CC511FFB, F86513DEE5D16613);
		}

		static ::System::Void SetShapeObject(::UnityEngine::ParticleSystem_AF362526E5AFF6EF B604B19684521061)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_AF362526E5AFF6EF))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETSHAPEOBJECT_OFFSET))(B604B19684521061);
		}

		static ::System::Void GetDebrisTargets(::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>* FA1D996231A8C3F7, ::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>* AE6F379D49132D4B, ::System::Single BD38B1C89D3E2613, ::System::Int32 E2FBDFFC7FC1BE87, ::System::Int32 AA95C3757B73C688)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>*, ::System::Collections::Generic::List_1<::RayFire::RayfireDebris*>*, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_GETDEBRISTARGETS_OFFSET))(FA1D996231A8C3F7, AE6F379D49132D4B, BD38B1C89D3E2613, E2FBDFFC7FC1BE87, AA95C3757B73C688);
		}

		static ::System::Void SetParticleComponents(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETPARTICLECOMPONENTS_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void CreateDebrisRigid(::RayFire::RayfireDebris* F249A74E7BFBE1A7)
		{
			return ((::System::Void(*)(::RayFire::RayfireDebris*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_CREATEDEBRISRIGID_OFFSET))(F249A74E7BFBE1A7);
		}

		static ::System::Void SetEmission(::UnityEngine::ParticleSystem_B7BEE7EA60C69282 ED7B1E9DB467CCD1, ::System::Single F7A5444AE71B1971, ::System::Int32 F50E1DE9CCEF1C0C)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_B7BEE7EA60C69282, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETEMISSION_OFFSET))(ED7B1E9DB467CCD1, F7A5444AE71B1971, F50E1DE9CCEF1C0C);
		}

		static ::System::Void GetDustTargets(::System::Collections::Generic::List_1<::RayFire::RayfireDust*>* FA1D996231A8C3F7, ::System::Collections::Generic::List_1<::RayFire::RayfireDust*>* AE6F379D49132D4B, ::System::Single BD38B1C89D3E2613, ::System::Int32 E2FBDFFC7FC1BE87, ::System::Int32 AA95C3757B73C688)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RayfireDust*>*, ::System::Collections::Generic::List_1<::RayFire::RayfireDust*>*, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_GETDUSTTARGETS_OFFSET))(FA1D996231A8C3F7, AE6F379D49132D4B, BD38B1C89D3E2613, E2FBDFFC7FC1BE87, AA95C3757B73C688);
		}

		static ::System::Void SetMain(::UnityEngine::ParticleSystem_E0082904B8CA0508 E4597A15448B3252, ::System::Single FCCF89DE8DF58B13, ::System::Single E8835992C6C6E5A0, ::System::Single A5E751610F6148E0, ::System::Single FEF64F242C0D0ACD, ::System::Single F8DD1CD2EDB7623E, ::System::Single A8671C1DA88E72BC, ::System::Single AFE180ABE0852BB4, ::System::Single A79D16DBC2A5417E, ::System::Single B2DF158947AB2345, ::System::Int32 FDAB0CD107530D34, ::System::Single BD3B33D72884EDA1)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_E0082904B8CA0508, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETMAIN_OFFSET))(E4597A15448B3252, FCCF89DE8DF58B13, E8835992C6C6E5A0, A5E751610F6148E0, FEF64F242C0D0ACD, F8DD1CD2EDB7623E, A8671C1DA88E72BC, AFE180ABE0852BB4, A79D16DBC2A5417E, B2DF158947AB2345, FDAB0CD107530D34, BD3B33D72884EDA1);
		}

		static ::System::Void SetCollisionDust(::UnityEngine::ParticleSystem_EEE2FC946AD3BA52 B6BB4AD5CC511FFB, ::RayFire::RFParticleCollisionDust* F86513DEE5D16613)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EEE2FC946AD3BA52, ::RayFire::RFParticleCollisionDust*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETCOLLISIONDUST_OFFSET))(B6BB4AD5CC511FFB, F86513DEE5D16613);
		}

		static ::System::Void CreateDustImpact(::RayFire::RayfireDust* EA9A88A069455750, ::UnityEngine::Vector3 B038E4A0878A50F2, ::UnityEngine::Vector3 E5918751FB23E61F)
		{
			return ((::System::Void(*)(::RayFire::RayfireDust*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_CREATEDUSTIMPACT_OFFSET))(EA9A88A069455750, B038E4A0878A50F2, E5918751FB23E61F);
		}

		static ::UnityEngine::ParticleSystem_MinMaxCurve GetCurveSizeOverLifeTime(::System::Single E6A305882BEE348D)
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_GETCURVESIZEOVERLIFETIME_OFFSET))(E6A305882BEE348D);
		}

		static ::System::Void SetRotationOverLifeTime(::UnityEngine::ParticleSystem_B297A9218B6E7597 A0556B8B541B6D55, ::RayFire::RFParticleDynamicDust* F79478E6FDA452CB)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_B297A9218B6E7597, ::RayFire::RFParticleDynamicDust*))((::PBYTE)hIl2Cpp + RAYFIRE_RFPARTICLES_SETROTATIONOVERLIFETIME_OFFSET))(A0556B8B541B6D55, F79478E6FDA452CB);
		}
	};
}
