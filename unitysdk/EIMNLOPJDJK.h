#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define EIMNLOPJDJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA25340)

inline static constexpr unsigned int EIMNLOPJDJK_TypeDefinitionIndex = 42972;

	class EIMNLOPJDJK : public ::System::Object
	{
	public:
		::UnityEngine::Transform* IAODJMAEBGG; // 0x10
		::UnityEngine::Vector3 NIBGNGICDOO; // 0x18
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x24
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMNLOPJDJK_CTOR_OFFSET))(this);
		}

	};
