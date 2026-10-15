#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_AINFIDLKOBF_OFFSET UNITYSDK_OFFSET(0xC9317B0)
#define RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_CTOR_OFFSET UNITYSDK_OFFSET(0xC931870)
#define RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_ECACFPDDGEJ_OFFSET UNITYSDK_OFFSET(0xC9316F0)
#define RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_PNAKMMIPLDB_OFFSET UNITYSDK_OFFSET(0xC931620)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraSomatoDynamicOffset_TypeDefinitionIndex = 69726;

	class CameraSomatoDynamicOffset : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterSomatoType SomatoType; // 0x10
		::System::Single SomatoHeightMin; // 0x14
		::System::Single SomatoHeightMax; // 0x18
		::UnityEngine::Vector3 AnchorOffsetMax; // 0x1C
		::UnityEngine::Vector3 AimOffsetMax; // 0x28
		::UnityEngine::Vector3 SelectDarkOffset; // 0x34
		::UnityEngine::Vector3 SelectDarkAimOffsetMax; // 0x40
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* AnchorOffsetRatioCurve; // 0x50
		::UnityEngine::AnimationCurve* AimOffsetRatioCurve; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 PNAKMMIPLDB(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_PNAKMMIPLDB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ECACFPDDGEJ(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_ECACFPDDGEJ_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 AINFIDLKOBF(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERASOMATODYNAMICOFFSET_AINFIDLKOBF_OFFSET))(this, a1);
		}

	};
}
