#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define ACKABEKCMOH_NHGPPEFMBMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB123D10)
#define ACKABEKCMOH_NHGPPEFMBMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB123D00)

inline static constexpr unsigned int ACKABEKCMOH_NHGPPEFMBMD_TypeDefinitionIndex = 65957;

	class ACKABEKCMOH_NHGPPEFMBMD : public ::System::Object
	{
	public:
		::System::Object* JPHGPKBOHPE; // 0x10
		::UnityEngine::Transform* DHIPFJBEJPI; // 0x18
		::System::Boolean HNOBLPHCDBN; // 0x20
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Object*))((::PBYTE)hIl2Cpp + ACKABEKCMOH_NHGPPEFMBMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::UnityEngine::Transform* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::System::Object*))((::PBYTE)hIl2Cpp + ACKABEKCMOH_NHGPPEFMBMD_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

	};
