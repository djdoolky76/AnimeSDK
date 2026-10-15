#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OLLGLJCHNDI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBF08980)
#define OLLGLJCHNDI_CTOR_OFFSET UNITYSDK_OFFSET(0xBF08880)
#define OLLGLJCHNDI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBF089B0)
#define OLLGLJCHNDI_INVOKE_OFFSET UNITYSDK_OFFSET(0xBF08970)

inline static constexpr unsigned int OLLGLJCHNDI_TypeDefinitionIndex = 78034;

	class OLLGLJCHNDI : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OLLGLJCHNDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLLGLJCHNDI_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OLLGLJCHNDI_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OLLGLJCHNDI_ENDINVOKE_OFFSET))(this, a1);
		}

	};
