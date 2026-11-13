#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class BootConfigData; }

#define UNITYENGINE_BOOTCONFIGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9C7190)
#define UNITYENGINE_BOOTCONFIGDATA_WRAPBOOTCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1F9C70F0)

namespace UnityEngine
{
	inline static constexpr unsigned int BootConfigData_TypeDefinitionIndex = 4036;

	class BootConfigData : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_BOOTCONFIGDATA_CTOR_OFFSET))(this, a1);
		}

		static ::UnityEngine::BootConfigData* WrapBootConfigData(::System::IntPtr a1)
		{
			return ((::UnityEngine::BootConfigData*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_BOOTCONFIGDATA_WRAPBOOTCONFIGDATA_OFFSET))(a1);
		}

	};
}
