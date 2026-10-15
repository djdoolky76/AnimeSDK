#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class POHNBOACDHB;
namespace RPG::GameCore { class FiveDimSimpleProjectileBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimSimpleProjectileMoveConfig; }
namespace RPG::GameCore { class FiveDimSimpleProjectilePropSpawnerParam; }

#define CCHDOBAEGCN_CTOR_OFFSET UNITYSDK_OFFSET(0xC739EB0)
#define CCHDOBAEGCN_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xC7399F0)
#define CCHDOBAEGCN_GHJCDLJOJOF_OFFSET UNITYSDK_OFFSET(0xC739960)
#define CCHDOBAEGCN_GMCCDHGBMHC_OFFSET UNITYSDK_OFFSET(0xC739DE0)
#define CCHDOBAEGCN_HLGPIAMPANI_OFFSET UNITYSDK_OFFSET(0xC739BC0)
#define CCHDOBAEGCN_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xC739AB0)
#define CCHDOBAEGCN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC739520)
#define CCHDOBAEGCN_MNMPLEEMKKN_OFFSET UNITYSDK_OFFSET(0xC739B60)

inline static constexpr unsigned int CCHDOBAEGCN_TypeDefinitionIndex = 77062;

	class CCHDOBAEGCN : public ::CBIKMJHGEDE
	{
	public:
		::RPG::GameCore::FiveDimSimpleProjectilePropSpawnerParam* FAKLDOKMHBF; // 0x18
		::System::Boolean EALLIIAPEEJ; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single MMOCIIJHFHL; // 0x24
		::System::Single CEGEFFGMPNL; // 0x28
		::System::Single FLHOEGBFPJB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHDOBAEGCN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + CCHDOBAEGCN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void GBCHFFLMIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHDOBAEGCN_GBCHFFLMIIC_OFFSET))(this);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCHDOBAEGCN_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void MNMPLEEMKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHDOBAEGCN_MNMPLEEMKKN_OFFSET))(this);
		}

		::System::Boolean HLGPIAMPANI(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CCHDOBAEGCN_HLGPIAMPANI_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::FiveDimSimpleProjectileMoveConfig* GHJCDLJOJOF()
		{
			return ((::RPG::GameCore::FiveDimSimpleProjectileMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHDOBAEGCN_GHJCDLJOJOF_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig* GMCCDHGBMHC()
		{
			return ((::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHDOBAEGCN_GMCCDHGBMHC_OFFSET))(this);
		}

	};
