#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LGJMFGGOEHD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB693190)
#define LGJMFGGOEHD_CTOR_OFFSET UNITYSDK_OFFSET(0xB693110)
#define LGJMFGGOEHD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB693200)
#define LGJMFGGOEHD_INVOKE_OFFSET UNITYSDK_OFFSET(0xB693180)

inline static constexpr unsigned int LGJMFGGOEHD_TypeDefinitionIndex = 75723;

	class LGJMFGGOEHD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LGJMFGGOEHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LGJMFGGOEHD_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LGJMFGGOEHD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LGJMFGGOEHD_ENDINVOKE_OFFSET))(this, a1);
		}

	};
