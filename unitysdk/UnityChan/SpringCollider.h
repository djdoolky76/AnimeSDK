#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityChan/SpringColliderType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Mesh; }

#define UNITYCHAN_SPRINGCOLLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE9E8690)
#define UNITYCHAN_SPRINGCOLLIDER_IMNFJGLHNDJ_OFFSET UNITYSDK_OFFSET(0xE9E79A0)
#define UNITYCHAN_SPRINGCOLLIDER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xE9E83D0)

namespace UnityChan
{
	class SpringCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityChan::SpringColliderType type; // 0x18
		::System::Single radius; // 0x1C
		::System::Single height; // 0x20
		::UnityEngine::Vector3 offset; // 0x24
		::UnityEngine::Vector3 rotation; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Mesh* OOKBODPIGNF; // 0x40
		::System::Single HJOOCFMOHFM; // 0x48
		::System::Single IEKBKAMJKCM; // 0x4C
		::UnityEngine::Vector3 AJMLEFNLDEP; // 0x50
		::UnityEngine::Vector3 GFAHHMNIOHF; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGCOLLIDER_CTOR_OFFSET))(this);
		}

		::System::Void IMNFJGLHNDJ(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGCOLLIDER_IMNFJGLHNDJ_OFFSET))(this, a1, a2);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGCOLLIDER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

	};
}
