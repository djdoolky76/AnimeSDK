#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define ICIMFKPDDMD_CEHBLMGKHHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15E4EA40)
#define ICIMFKPDDMD_CEHBLMGKHHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E4EA30)

inline static constexpr unsigned int ICIMFKPDDMD_CEHBLMGKHHN_TypeDefinitionIndex = 71178;

	class ICIMFKPDDMD_CEHBLMGKHHN : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DHIPFJBEJPI; // 0x10
		::System::Object* JPHGPKBOHPE; // 0x18
		::System::Boolean HNOBLPHCDBN; // 0x20
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Object*))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_CEHBLMGKHHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::UnityEngine::Transform* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::System::Object*))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_CEHBLMGKHHN_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

	};
