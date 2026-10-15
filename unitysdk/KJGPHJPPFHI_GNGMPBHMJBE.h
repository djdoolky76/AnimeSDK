#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class DDLHODCINBI;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KJGPHJPPFHI_GNGMPBHMJBE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB44C850)
#define KJGPHJPPFHI_GNGMPBHMJBE_CTOR_OFFSET UNITYSDK_OFFSET(0xB44C7E0)
#define KJGPHJPPFHI_GNGMPBHMJBE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB44C880)
#define KJGPHJPPFHI_GNGMPBHMJBE_INVOKE_OFFSET UNITYSDK_OFFSET(0xB44A9D0)

inline static constexpr unsigned int KJGPHJPPFHI_GNGMPBHMJBE_TypeDefinitionIndex = 64018;

	class KJGPHJPPFHI_GNGMPBHMJBE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_GNGMPBHMJBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::DDLHODCINBI* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::DDLHODCINBI*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_GNGMPBHMJBE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::DDLHODCINBI* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::DDLHODCINBI*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_GNGMPBHMJBE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KJGPHJPPFHI_GNGMPBHMJBE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
