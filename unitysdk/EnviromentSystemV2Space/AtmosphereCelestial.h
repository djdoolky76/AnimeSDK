#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/CelestialShadowProxy.h"
#include "unitysdk/RPG/Client/CelestialRenderer.h"
class CelestialBodyData;
class HGEGFCADEEC;
class HGEGFCADEEC_GOBPIMACLEE;
class OrbitData;
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_APPLY_OFFSET UNITYSDK_OFFSET(0x15628620)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x15628AF0)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x15628B70)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15628B40)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x15628580)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_HNJCLJMEAJJ_OFFSET UNITYSDK_OFFSET(0x15628900)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_MFLCMFPIKCI_OFFSET UNITYSDK_OFFSET(0x156280B0)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_REFRESHCELESTIAL_OFFSET UNITYSDK_OFFSET(0x15627DE0)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_SETOBSERVER_OFFSET UNITYSDK_OFFSET(0x156282A0)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_TICK_OFFSET UNITYSDK_OFFSET(0x15628590)
#define ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_UPDATEFROMDATA_OFFSET UNITYSDK_OFFSET(0x15627ED0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int AtmosphereCelestial_TypeDefinitionIndex = 49359;

	class AtmosphereCelestial : public ::RPG::Client::CelestialRenderer
	{
	public:
		::System::String* BGLOMMEGJBP; // 0x50
		::CelestialBodyType KCJFNJALHIE; // 0x58
		::CelestialBodyType celestialType; // 0x59
		::CelestialShadowProxy celestialShadowProxy; // 0x5C
		::System::Single viewSize; // 0x60
		::System::Boolean _IsVisible_k__BackingField; // 0x64
		::System::Byte _padding0[0x3];
		::UnityEngine::MaterialPropertyBlock* CAIHEFKEOLA; // 0x68
		::UnityEngine::Renderer* IGEDAHDPAMG; // 0x70
		static ::System::Int32* StaticGet_CNONBNIELNF()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystemV2Space", "AtmosphereCelestial")->GetStaticField(0x114B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_CCTOR_OFFSET))();
		}

		::System::Void RefreshCelestial(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_REFRESHCELESTIAL_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateFromData(::OrbitData* a1, ::CelestialBodyData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OrbitData*, ::CelestialBodyData*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_UPDATEFROMDATA_OFFSET))(this, a1, a2);
		}

		::System::Void MFLCMFPIKCI(::HGEGFCADEEC_GOBPIMACLEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGEGFCADEEC_GOBPIMACLEE*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_MFLCMFPIKCI_OFFSET))(this, a1);
		}

		::System::Void SetObserver(::HGEGFCADEEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGEGFCADEEC*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_SETOBSERVER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_TICK_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_APPLY_OFFSET))(this, a1);
		}

		::System::Void HNJCLJMEAJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_HNJCLJMEAJJ_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ATMOSPHERECELESTIAL_AWAKE_OFFSET))(this);
		}

	};
}
