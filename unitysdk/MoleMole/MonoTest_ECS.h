#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_MONOTEST_ECS_PNJLCAKBBJH_OFFSET UNITYSDK_OFFSET(0x1310B790)
#define MOLEMOLE_MONOTEST_ECS_TEST_OFFSET UNITYSDK_OFFSET(0x1310B700)
#define MOLEMOLE_MONOTEST_ECS__CTOR_OFFSET UNITYSDK_OFFSET(0x1310B740)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTest_ECS_TypeDefinitionIndex = 77649;

	class MonoTest_ECS : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* IJJJJELADMA; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEST_ECS__CTOR_OFFSET))(this);
		}

		::System::Void Test()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEST_ECS_TEST_OFFSET))(this);
		}

		::System::Int32 PNJLCAKBBJH(::System::String* ANJGNKPAJAN)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEST_ECS_PNJLCAKBBJH_OFFSET))(this, ANJGNKPAJAN);
		}
	};
}
