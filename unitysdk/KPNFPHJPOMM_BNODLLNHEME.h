#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace ScenenLightManager { class BaseSceneLightExportData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KPNFPHJPOMM_BNODLLNHEME_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB5C70C0)
#define KPNFPHJPOMM_BNODLLNHEME_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C6FD0)
#define KPNFPHJPOMM_BNODLLNHEME_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB5C70F0)
#define KPNFPHJPOMM_BNODLLNHEME_INVOKE_OFFSET UNITYSDK_OFFSET(0xB5C34F0)

inline static constexpr unsigned int KPNFPHJPOMM_BNODLLNHEME_TypeDefinitionIndex = 49182;

	class KPNFPHJPOMM_BNODLLNHEME : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_BNODLLNHEME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::ScenenLightManager::BaseSceneLightExportData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BaseSceneLightExportData*))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_BNODLLNHEME_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ScenenLightManager::BaseSceneLightExportData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ScenenLightManager::BaseSceneLightExportData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_BNODLLNHEME_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_BNODLLNHEME_ENDINVOKE_OFFSET))(this, a1);
		}

	};
