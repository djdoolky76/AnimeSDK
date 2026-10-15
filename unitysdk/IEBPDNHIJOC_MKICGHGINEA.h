#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/System/Object.h"
class CJJCNKJHNEA;
namespace RPG::GameCore { class CRPVirtualCameraConfigList; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define IEBPDNHIJOC_MKICGHGINEA_AGIDIKCOPJL_OFFSET UNITYSDK_OFFSET(0x15EE05D0)
#define IEBPDNHIJOC_MKICGHGINEA_ALOODOIDANH_OFFSET UNITYSDK_OFFSET(0x15EDE430)
#define IEBPDNHIJOC_MKICGHGINEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15EDE560)
#define IEBPDNHIJOC_MKICGHGINEA_EDLBHIANEMN_OFFSET UNITYSDK_OFFSET(0x15EDF800)
#define IEBPDNHIJOC_MKICGHGINEA_EFPBCKGBFBG_OFFSET UNITYSDK_OFFSET(0x15EE0490)
#define IEBPDNHIJOC_MKICGHGINEA_GOLCAPKLCDB_OFFSET UNITYSDK_OFFSET(0x15EE02C0)
#define IEBPDNHIJOC_MKICGHGINEA_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x15EDCE20)
#define IEBPDNHIJOC_MKICGHGINEA_ILILKCFFDBH_OFFSET UNITYSDK_OFFSET(0x15EE0710)
#define IEBPDNHIJOC_MKICGHGINEA_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x15EE0260)
#define IEBPDNHIJOC_MKICGHGINEA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15EDCBE0)
#define IEBPDNHIJOC_MKICGHGINEA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15EDDF60)

inline static constexpr unsigned int IEBPDNHIJOC_MKICGHGINEA_TypeDefinitionIndex = 69901;

	class IEBPDNHIJOC_MKICGHGINEA : public ::System::Object
	{
	public:
		::System::String* CPLCMIOKHCH; // 0x10
		::UnityEngine::AnimationClip* DPIJLJPKFBD; // 0x18
		::UnityEngine::Rendering::CRPVirtualCamera* FLBPCLGAOJO; // 0x20
		::UnityEngine::MeshRenderer* JHGPEICPMFP; // 0x28
		::UnityEngine::Camera* DGPNFMMMPBH; // 0x30
		::System::String* JKGBFDEBIJF; // 0x38
		::CJJCNKJHNEA* BJEALPOOAFG; // 0x40
		::RPG::GameCore::CRPVirtualCameraConfigList* MMCDFOLIMGP; // 0x48
		::RPG::GameCore::GameEntityList* KGKEPIJIABL; // 0x50
		::System::Boolean KNPMNAHDIMO; // 0x58
		::System::Byte _padding0[0x3];
		::System::Single LLOIIIDBJOL; // 0x5C
		::RPG::CustomRP::VCMask JFIEENJBBFF; // 0x60
		::System::Void _ctor(::RPG::CustomRP::VCMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::VCMask))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MKICGHGINEA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MKICGHGINEA_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Boolean EDLBHIANEMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MKICGHGINEA_EDLBHIANEMN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MKICGHGINEA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MKICGHGINEA_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void GOLCAPKLCDB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MKICGHGINEA_GOLCAPKLCDB_OFFSET))(this, a1);
		}

		::System::Void AGIDIKCOPJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MKICGHGINEA_AGIDIKCOPJL_OFFSET))(this);
		}

		::System::Single ILILKCFFDBH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MKICGHGINEA_ILILKCFFDBH_OFFSET))(this, a1);
		}

		::System::Void EFPBCKGBFBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MKICGHGINEA_EFPBCKGBFBG_OFFSET))(this);
		}

		::System::Void ALOODOIDANH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MKICGHGINEA_ALOODOIDANH_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBPDNHIJOC_MKICGHGINEA_KHGIKBFDLFB_OFFSET))(this);
		}

	};
