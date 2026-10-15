#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define NENAEDAOCDI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB6D950)
#define NENAEDAOCDI_GDOHCMKJAPK_OFFSET UNITYSDK_OFFSET(0xBB6D130)
#define NENAEDAOCDI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB6D0B0)
#define NENAEDAOCDI_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xBB6D3D0)

inline static constexpr unsigned int NENAEDAOCDI_TypeDefinitionIndex = 73006;

	class NENAEDAOCDI : public ::System::Object
	{
	public:
		static ::UnityEngine::Transform** StaticGet_DHJPAMNMOGO()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "NENAEDAOCDI")->GetStaticField(0x30540);
		}

		static ::UnityEngine::Camera** StaticGet_IEMGKEFBPCG()
		{
			return (::UnityEngine::Camera**)UnitySDK::FromName("", "NENAEDAOCDI")->GetStaticField(0x30548);
		}

		static ::UnityEngine::Transform** StaticGet_KGIJAGKPGMO()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "NENAEDAOCDI")->GetStaticField(0x30550);
		}

		static ::UnityEngine::Vector3* StaticGet_LHLFBFGOGGN()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "NENAEDAOCDI")->GetStaticField(0x9EC0);
		}

		static ::UnityEngine::Vector3* StaticGet_BKHBJLICFPM()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "NENAEDAOCDI")->GetStaticField(0x9ECC);
		}

		static ::System::Boolean* StaticGet_MFMCJABEDLE()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NENAEDAOCDI")->GetStaticField(0x9ED8);
		}

		static ::UnityEngine::Vector3* StaticGet_PFMBDNAPPJH()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "NENAEDAOCDI")->GetStaticField(0x9EDC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NENAEDAOCDI_CCTOR_OFFSET))();
		}

		static ::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NENAEDAOCDI_HADOHLNHHGB_OFFSET))();
		}

		static ::System::Void HCCKBPDFINA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NENAEDAOCDI_HCCKBPDFINA_OFFSET))();
		}

		static ::System::Void GDOHCMKJAPK(::System::Boolean a1, ::UnityEngine::Camera* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Camera*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NENAEDAOCDI_GDOHCMKJAPK_OFFSET))(a1, a2, a3);
		}

	};
