#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define JDCAIBLOBKG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C6F4570)
#define JDCAIBLOBKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F44E0)
#define JDCAIBLOBKG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C6F4600)
#define JDCAIBLOBKG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C6F4550)

inline static constexpr unsigned int JDCAIBLOBKG_TypeDefinitionIndex = 36236;

	class JDCAIBLOBKG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JDCAIBLOBKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + JDCAIBLOBKG_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JDCAIBLOBKG_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JDCAIBLOBKG_ENDINVOKE_OFFSET))(this, a1);
		}

	};
