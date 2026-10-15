#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace VLB { class VolumetricDustParticles; }
namespace VLB { class VolumetricLightBeam; }

#define LLPHPDPFBKL_CENHGGHMENL_OFFSET UNITYSDK_OFFSET(0xB76F480)
#define LLPHPDPFBKL_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xB770720)
#define LLPHPDPFBKL_CTOR_OFFSET UNITYSDK_OFFSET(0xB7710A0)
#define LLPHPDPFBKL_DOBCCOOKGGO_OFFSET UNITYSDK_OFFSET(0xB770F00)
#define LLPHPDPFBKL_HBMPJLPNECN_OFFSET UNITYSDK_OFFSET(0xB76F950)
#define LLPHPDPFBKL_IFCKLCDFGHK_OFFSET UNITYSDK_OFFSET(0xB76F580)
#define LLPHPDPFBKL_IKDMAFCHICM_OFFSET UNITYSDK_OFFSET(0xB76FBF0)
#define LLPHPDPFBKL_KDMHEIIDBIE_OFFSET UNITYSDK_OFFSET(0xB770870)
#define LLPHPDPFBKL_KMNKLLBBBIN_OFFSET UNITYSDK_OFFSET(0xB771040)
#define LLPHPDPFBKL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB76F220)
#define LLPHPDPFBKL_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xB7706A0)
#define LLPHPDPFBKL_NIMKDJPAHKH_OFFSET UNITYSDK_OFFSET(0xB76F9E0)
#define LLPHPDPFBKL_OIBCJNMFJFM_OFFSET UNITYSDK_OFFSET(0xB770980)
#define LLPHPDPFBKL_OMGPLHJLILH_OFFSET UNITYSDK_OFFSET(0xB770FE0)
#define LLPHPDPFBKL_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xB76FB90)
#define LLPHPDPFBKL_PKGNNMBKHBC_OFFSET UNITYSDK_OFFSET(0xB770F80)
#define LLPHPDPFBKL_PNIEFOONFOP_OFFSET UNITYSDK_OFFSET(0xB76F400)
#define LLPHPDPFBKL_TICK_OFFSET UNITYSDK_OFFSET(0xB7707E0)

inline static constexpr unsigned int LLPHPDPFBKL_TypeDefinitionIndex = 49011;

	class LLPHPDPFBKL : public ::RPG::Client::TABehaviorBase
	{
	public:
		::VLB::VolumetricLightBeam* KNCIKKHBPPJ; // 0x38
		::UnityEngine::ParticleSystemRenderer* GCBMHAAOANI; // 0x40
		::UnityEngine::ParticleSystem* INPDNIHAEEG; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_KPJGDHLENIP_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* NIMKDJPAHKH(::UnityEngine::ParticleSystem* a1)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_NIMKDJPAHKH_OFFSET))(this, a1);
		}

		::System::Void IFCKLCDFGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_IFCKLCDFGHK_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void HBMPJLPNECN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_HBMPJLPNECN_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_TICK_OFFSET))(this, a1);
		}

		::System::Void IKDMAFCHICM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_IKDMAFCHICM_OFFSET))(this);
		}

		::System::Void OIBCJNMFJFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_OIBCJNMFJFM_OFFSET))(this);
		}

		::VLB::VolumetricDustParticles* PNIEFOONFOP()
		{
			return ((::VLB::VolumetricDustParticles*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_PNIEFOONFOP_OFFSET))(this);
		}

		::System::Boolean CENHGGHMENL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_CENHGGHMENL_OFFSET))(this);
		}

		::System::Void KDMHEIIDBIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_KDMHEIIDBIE_OFFSET))(this);
		}

		::System::Boolean PKGNNMBKHBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_PKGNNMBKHBC_OFFSET))(this);
		}

		::System::Int32 OMGPLHJLILH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_OMGPLHJLILH_OFFSET))(this);
		}

		::System::Int32 KMNKLLBBBIN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_KMNKLLBBBIN_OFFSET))(this);
		}

		::UnityEngine::Camera* DOBCCOOKGGO()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPHPDPFBKL_DOBCCOOKGGO_OFFSET))(this);
		}

	};
