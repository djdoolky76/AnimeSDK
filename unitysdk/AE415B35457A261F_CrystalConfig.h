#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Transform; }

#define AE415B35457A261F_CRYSTALCONFIG_GET_CENTERWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x165A3C0)
#define AE415B35457A261F_CRYSTALCONFIG_GET_CURRROTATIONWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x165A3E0)
#define AE415B35457A261F_CRYSTALCONFIG_SET_CENTERWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x165A450)
#define AE415B35457A261F_CRYSTALCONFIG_SET_CURRROTATIONWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x165A460)
#define AE415B35457A261F_CRYSTALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE415B35457A261F_CrystalConfig_TypeDefinitionIndex = 16142;

class AE415B35457A261F_CrystalConfig : public ::System::Object
{
public:
	::UnityEngine::Vector3 LocalCenter; // 0x10
	::UnityEngine::Quaternion Rotaion; // 0x1C
	::System::Int32 CrystalIndex; // 0x2C
	::UnityEngine::Cubemap* InnnerNormalMap; // 0x30
	::Il2CppArray<::UnityEngine::Transform*>* MaxBones; // 0x38
	::Il2CppArray<::System::Single>* MaxWeights; // 0x40
	::Il2CppArray<::UnityEngine::ACF10FE87B4C5617>* BindPoses; // 0x48
	::UnityEngine::Vector3 _CenterWorldSpace_k__BackingField; // 0x50
	::UnityEngine::Quaternion _CurrRotationWorldSpace_k__BackingField; // 0x5C

	::UnityEngine::Vector3 get_CenterWorldSpace()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_CRYSTALCONFIG_GET_CENTERWORLDSPACE_OFFSET))(this);
	}

	::System::Void set_CenterWorldSpace(::UnityEngine::Vector3 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AE415B35457A261F_CRYSTALCONFIG_SET_CENTERWORLDSPACE_OFFSET))(this, E937D4885DAA1AE8);
	}

	::UnityEngine::Quaternion get_CurrRotationWorldSpace()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_CRYSTALCONFIG_GET_CURRROTATIONWORLDSPACE_OFFSET))(this);
	}

	::System::Void set_CurrRotationWorldSpace(::UnityEngine::Quaternion E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + AE415B35457A261F_CRYSTALCONFIG_SET_CURRROTATIONWORLDSPACE_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_CRYSTALCONFIG__CTOR_OFFSET))(this);
	}
};
