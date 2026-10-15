#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/RPG/CustomRP/CustomQueryType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LightRatioConfig;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define JMIDBCIBMGF_CTOR_OFFSET UNITYSDK_OFFSET(0xB268CF0)
#define JMIDBCIBMGF_HBAFGFJKKCD_OFFSET UNITYSDK_OFFSET(0xB268800)
#define JMIDBCIBMGF_KHJPCGCNPMC_1_OFFSET UNITYSDK_OFFSET(0xB267F90)
#define JMIDBCIBMGF_KHJPCGCNPMC_OFFSET UNITYSDK_OFFSET(0xB267CE0)
#define JMIDBCIBMGF_LCKDDGIODNM_OFFSET UNITYSDK_OFFSET(0xB267BF0)
#define JMIDBCIBMGF_LFBNALOGPKK_OFFSET UNITYSDK_OFFSET(0xB267130)
#define JMIDBCIBMGF_NIJGCLPKKCG_OFFSET UNITYSDK_OFFSET(0xB2688D0)
#define JMIDBCIBMGF_NLKEDPGMFBM_OFFSET UNITYSDK_OFFSET(0xB267270)
#define JMIDBCIBMGF_NNLLBKHKBEP_OFFSET UNITYSDK_OFFSET(0xB268920)

inline static constexpr unsigned int JMIDBCIBMGF_TypeDefinitionIndex = 47560;

	class JMIDBCIBMGF : public ::System::Object
	{
	public:
		static ::LightRatioConfig** StaticGet_EABKOHGCHFP()
		{
			return (::LightRatioConfig**)UnitySDK::FromName("", "JMIDBCIBMGF")->GetStaticField(0x1EC70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIDBCIBMGF_CTOR_OFFSET))(this);
		}

		static ::System::Void LFBNALOGPKK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMIDBCIBMGF_LFBNALOGPKK_OFFSET))();
		}

		static ::System::Single NLKEDPGMFBM()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + JMIDBCIBMGF_NLKEDPGMFBM_OFFSET))();
		}

		static ::System::Single KHJPCGCNPMC(::RPG::CustomRP::CustomQueryType a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::RPG::CustomRP::CustomQueryType, ::System::Single))((::PBYTE)hIl2Cpp + JMIDBCIBMGF_KHJPCGCNPMC_OFFSET))(a1, a2);
		}

		static ::System::Single KHJPCGCNPMC_1(::RPG::CustomRP::CustomQueryType a1)
		{
			return ((::System::Single(*)(::RPG::CustomRP::CustomQueryType))((::PBYTE)hIl2Cpp + JMIDBCIBMGF_KHJPCGCNPMC_1_OFFSET))(a1);
		}

		static ::System::Single LCKDDGIODNM(::RPG::CustomRP::CustomLightQualityFilter a1, ::System::Single a2, ::RPG::CustomRP::CustomQueryType a3)
		{
			return ((::System::Single(*)(::RPG::CustomRP::CustomLightQualityFilter, ::System::Single, ::RPG::CustomRP::CustomQueryType))((::PBYTE)hIl2Cpp + JMIDBCIBMGF_LCKDDGIODNM_OFFSET))(a1, a2, a3);
		}

		static ::System::Single HBAFGFJKKCD()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + JMIDBCIBMGF_HBAFGFJKKCD_OFFSET))();
		}

		static ::System::Single NIJGCLPKKCG()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + JMIDBCIBMGF_NIJGCLPKKCG_OFFSET))();
		}

		static ::System::Void NNLLBKHKBEP(::UnityEngine::GameObject* a1, ::UnityEngine::Camera* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + JMIDBCIBMGF_NNLLBKHKBEP_OFFSET))(a1, a2, a3, a4);
		}

	};
