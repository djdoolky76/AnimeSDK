#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class Collider; }

namespace UnityEngine
{
	inline static constexpr unsigned int A0E628DFE6F8EFC7_TypeDefinitionIndex = 20817;

	class A0E628DFE6F8EFC7 : public ::System::Object
	{
	public:
		::UnityEngine::CharacterController* AB4BFFC423D62B5D; // 0x10
		::UnityEngine::Collider* B54114F6BBE37349; // 0x18
		::UnityEngine::Vector3 F83C4AF0B738639A; // 0x20
		::UnityEngine::Vector3 E94143082AABB810; // 0x2C
		::UnityEngine::Vector3 F99AA1D7423A9134; // 0x38
		::System::Single B37C5F173FE5982A; // 0x44
		::System::Int32 A21F2E7A1A4645DC; // 0x48
	};
}
