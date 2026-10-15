#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class OIKDEOMMOAM;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define JFAJIIHCBHN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x166437B0)
#define JFAJIIHCBHN_CTOR_OFFSET UNITYSDK_OFFSET(0x166436B0)
#define JFAJIIHCBHN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x166437E0)
#define JFAJIIHCBHN_INVOKE_OFFSET UNITYSDK_OFFSET(0x166437A0)

inline static constexpr unsigned int JFAJIIHCBHN_TypeDefinitionIndex = 54014;

	class JFAJIIHCBHN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JFAJIIHCBHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + JFAJIIHCBHN_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::OIKDEOMMOAM* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::OIKDEOMMOAM*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JFAJIIHCBHN_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JFAJIIHCBHN_ENDINVOKE_OFFSET))(this, a1);
		}

	};
