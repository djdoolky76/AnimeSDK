#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_FPGDKHKELDN_OFFSET UNITYSDK_OFFSET(0xEC3FAE0)
#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_GET_INIT_OFFSET UNITYSDK_OFFSET(0xEC3FCB0)
#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0xFE8A0)
#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_GET_ROTATIONEULER_OFFSET UNITYSDK_OFFSET(0xFE880)
#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_GET_ROTATIONQUATERNION_OFFSET UNITYSDK_OFFSET(0xFE860)
#define RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_OAIPABOPIAN_OFFSET UNITYSDK_OFFSET(0xFE8C0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int QuaternionTransform_TypeDefinitionIndex = 75766;

	struct alignas(4) QuaternionTransform
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Vector3 scale; // 0x2C
		::System::Boolean rotationUseQuaternion; // 0x38
		::UnityEngine::Quaternion get_rotationQuaternion()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_GET_ROTATIONQUATERNION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_rotationEuler()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_GET_ROTATIONEULER_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_GET_MATRIX_OFFSET))(this);
		}

		/*
		static ::RPG::Client::TAUtils::QuaternionTransform FPGDKHKELDN(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::TAUtils::QuaternionTransform(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_FPGDKHKELDN_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::Client::TAUtils::QuaternionTransform get_init()
		{
			return ((::RPG::Client::TAUtils::QuaternionTransform(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_GET_INIT_OFFSET))();
		}
		*/

		/*
		::RPG::Client::TAUtils::SimpleTransform OAIPABOPIAN()
		{
			return ((::RPG::Client::TAUtils::SimpleTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_QUATERNIONTRANSFORM_OAIPABOPIAN_OFFSET))(this);
		}
		*/

	};
}
