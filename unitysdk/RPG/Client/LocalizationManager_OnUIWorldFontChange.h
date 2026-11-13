#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19447CF0)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x19447C70)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19447D40)
#define RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19447CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizationManager_OnUIWorldFontChange_TypeDefinitionIndex = 62739;

	class LocalizationManager_OnUIWorldFontChange : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZATIONMANAGER_ONUIWORLDFONTCHANGE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
