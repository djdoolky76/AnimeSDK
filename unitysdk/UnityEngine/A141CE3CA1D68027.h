#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/BCFD7EB8C6BF5F1C.h"

namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_A141CE3CA1D68027_BA3292CCC28B33FB_OFFSET UNITYSDK_OFFSET(0x415DEE0)
#define UNITYENGINE_A141CE3CA1D68027__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

namespace UnityEngine
{
	inline static constexpr unsigned int A141CE3CA1D68027_TypeDefinitionIndex = 17440;

	class A141CE3CA1D68027 : public ::UnityEngine::BCFD7EB8C6BF5F1C
	{
	public:
		::System::Func_1<::System::Boolean>* A3707C39E9A40A78; // 0x10

		::System::Void _ctor(::System::Func_1<::System::Boolean>* FED8380F90B07F47)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_A141CE3CA1D68027__CTOR_OFFSET))(this, FED8380F90B07F47);
		}

		::System::Boolean BA3292CCC28B33FB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A141CE3CA1D68027_BA3292CCC28B33FB_OFFSET))(this);
		}
	};
}
