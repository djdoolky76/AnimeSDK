#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_BCFD7EB8C6BF5F1C_B5B5C7AD4F7ECB57_OFFSET UNITYSDK_OFFSET(0x412C880)
#define UNITYENGINE_BCFD7EB8C6BF5F1C_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_BCFD7EB8C6BF5F1C_E49BD7E84AC43B7F_OFFSET UNITYSDK_OFFSET(0x27CB070)
#define UNITYENGINE_BCFD7EB8C6BF5F1C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int BCFD7EB8C6BF5F1C_TypeDefinitionIndex = 17139;

	class BCFD7EB8C6BF5F1C : public ::System::Object
	{
	public:
		::System::Boolean B5B5C7AD4F7ECB57()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BCFD7EB8C6BF5F1C_B5B5C7AD4F7ECB57_OFFSET))(this);
		}

		::System::Object* E49BD7E84AC43B7F()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BCFD7EB8C6BF5F1C_E49BD7E84AC43B7F_OFFSET))(this);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BCFD7EB8C6BF5F1C_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BCFD7EB8C6BF5F1C__CTOR_OFFSET))(this);
		}
	};
}
