#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class BeforeMaterialCommandUpdate; }

#define UNITYENGINE_BEFOREMATERIALCOMMANDUPDATEPROCESS_CREATE_OFFSET UNITYSDK_OFFSET(0x1F021AF0)
#define UNITYENGINE_BEFOREMATERIALCOMMANDUPDATEPROCESS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1F021B20)
#define UNITYENGINE_BEFOREMATERIALCOMMANDUPDATEPROCESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F021B00)
#define UNITYENGINE_BEFOREMATERIALCOMMANDUPDATEPROCESS_INVOKEBEFOREMATERIALCOMMANDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F021B30)
#define UNITYENGINE_BEFOREMATERIALCOMMANDUPDATEPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F021AC0)

namespace UnityEngine
{
	inline static constexpr unsigned int BeforeMaterialCommandUpdateProcess_TypeDefinitionIndex = 5392;

	class BeforeMaterialCommandUpdateProcess : public ::System::Object
	{
	public:
		::System::IntPtr m_Handle; // 0x10
		::UnityEngine::BeforeMaterialCommandUpdate* m_BeforeMaterialCommandUpdateCallback; // 0x18

		::System::Void _ctor(::UnityEngine::BeforeMaterialCommandUpdate* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BeforeMaterialCommandUpdate*))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFOREMATERIALCOMMANDUPDATEPROCESS__CTOR_OFFSET))(this, callback);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFOREMATERIALCOMMANDUPDATEPROCESS_DISPOSE_OFFSET))(this);
		}

		static ::System::IntPtr Create(::UnityEngine::BeforeMaterialCommandUpdateProcess* process)
		{
			return ((::System::IntPtr(*)(::UnityEngine::BeforeMaterialCommandUpdateProcess*))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFOREMATERIALCOMMANDUPDATEPROCESS_CREATE_OFFSET))(process);
		}

		static ::System::Void Destroy(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFOREMATERIALCOMMANDUPDATEPROCESS_DESTROY_OFFSET))(handle);
		}

		static ::System::Void InvokeBeforeMaterialCommandUpdate(::UnityEngine::BeforeMaterialCommandUpdateProcess* process)
		{
			return ((::System::Void(*)(::UnityEngine::BeforeMaterialCommandUpdateProcess*))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFOREMATERIALCOMMANDUPDATEPROCESS_INVOKEBEFOREMATERIALCOMMANDUPDATE_OFFSET))(process);
		}
	};
}
