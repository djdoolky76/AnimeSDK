#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTTOKENDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D135BD0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTTOKENDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D135C00)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTTOKENDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D1356B0)
#define MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTTOKENDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1356A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_GetAccountTokenDelegate_TypeDefinitionIndex = 18949;

	class ConsoleDelegate_GetAccountTokenDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTTOKENDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTTOKENDELEGATE_INVOKE_OFFSET))(this, callback);
		}

		::System::IAsyncResult* BeginInvoke(::System::Action_1<::System::String*>* callback, ::System::AsyncCallback* __callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTTOKENDELEGATE_BEGININVOKE_OFFSET))(this, callback, __callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE_GETACCOUNTTOKENDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
