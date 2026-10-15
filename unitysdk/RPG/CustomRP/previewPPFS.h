#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::CustomRP { class PPFilterStack; }
namespace RPG::CustomRP { class RPGBlink; }
namespace RPG::CustomRP { class RPGChromaticAberration; }
namespace RPG::CustomRP { class RPGColorGrading; }
namespace RPG::CustomRP { class RPGGaussianBlur; }
namespace RPG::CustomRP { class RPGLensGlitch2; }
namespace RPG::CustomRP { class RPGPPPattern; }
namespace RPG::CustomRP { class RPGRadialBlur; }
namespace RPG::CustomRP { class RPGVignette; }
namespace System { class String; }

#define RPG_CUSTOMRP_PREVIEWPPFS_AOFGAPNECHH_OFFSET UNITYSDK_OFFSET(0xE48DA00)
#define RPG_CUSTOMRP_PREVIEWPPFS_BCCLNEPHAPD_OFFSET UNITYSDK_OFFSET(0xE48E670)
#define RPG_CUSTOMRP_PREVIEWPPFS_CTOR_OFFSET UNITYSDK_OFFSET(0xE493960)
#define RPG_CUSTOMRP_PREVIEWPPFS_GGEBPMABHBI_OFFSET UNITYSDK_OFFSET(0xE48DE00)
#define RPG_CUSTOMRP_PREVIEWPPFS_IJCJPMAJONN_OFFSET UNITYSDK_OFFSET(0xE491920)
#define RPG_CUSTOMRP_PREVIEWPPFS_JIFEEIHEJKF_OFFSET UNITYSDK_OFFSET(0xE48F470)
#define RPG_CUSTOMRP_PREVIEWPPFS_JNFHEIHEEIJ_OFFSET UNITYSDK_OFFSET(0xE48F0A0)
#define RPG_CUSTOMRP_PREVIEWPPFS_LHPJDLCGIIL_OFFSET UNITYSDK_OFFSET(0xE492160)
#define RPG_CUSTOMRP_PREVIEWPPFS_OKBFHIBJNEF_OFFSET UNITYSDK_OFFSET(0xE48C720)
#define RPG_CUSTOMRP_PREVIEWPPFS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE4930D0)
#define RPG_CUSTOMRP_PREVIEWPPFS_START_OFFSET UNITYSDK_OFFSET(0xE48C510)
#define RPG_CUSTOMRP_PREVIEWPPFS_UPDATE_OFFSET UNITYSDK_OFFSET(0xE48C590)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int previewPPFS_TypeDefinitionIndex = 51867;

	class previewPPFS : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::CustomRP::PPFilterStack* ppf; // 0x18
		::System::Single rate; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* ppfpath; // 0x28
		::RPG::Client::EnvironmentSystem* LKDKHHMECAG; // 0x30
		::RPG::CustomRP::RPGColorGrading* POMGLACAHDI; // 0x38
		::RPG::CustomRP::RPGRadialBlur* LHPICBOLAFO; // 0x40
		::RPG::CustomRP::RPGVignette* BCFEKNAMPPP; // 0x48
		::RPG::CustomRP::RPGChromaticAberration* MOIHNDMLBPP; // 0x50
		::RPG::CustomRP::RPGGaussianBlur* PMCFCEMADNP; // 0x58
		::RPG::CustomRP::RPGBlink* JKPIJFGCNOP; // 0x60
		::RPG::CustomRP::RPGPPPattern* MMODKOPKKCK; // 0x68
		::RPG::CustomRP::RPGLensGlitch2* IDEHNOEPNIJ; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_ONDISABLE_OFFSET))(this);
		}

		::System::Void OKBFHIBJNEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_OKBFHIBJNEF_OFFSET))(this);
		}

		::System::Void BCCLNEPHAPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_BCCLNEPHAPD_OFFSET))(this);
		}

		::System::Void JNFHEIHEEIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_JNFHEIHEEIJ_OFFSET))(this);
		}

		::System::Void AOFGAPNECHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_AOFGAPNECHH_OFFSET))(this);
		}

		::System::Void GGEBPMABHBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_GGEBPMABHBI_OFFSET))(this);
		}

		::System::Void LHPJDLCGIIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_LHPJDLCGIIL_OFFSET))(this);
		}

		::System::Void JIFEEIHEJKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_JIFEEIHEJKF_OFFSET))(this);
		}

		::System::Void IJCJPMAJONN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_IJCJPMAJONN_OFFSET))(this);
		}

	};
}
