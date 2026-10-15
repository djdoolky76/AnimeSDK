#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MNCLEOJGFEO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB9E87D0)
#define MNCLEOJGFEO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E8750)
#define MNCLEOJGFEO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB9E8850)
#define MNCLEOJGFEO_INVOKE_OFFSET UNITYSDK_OFFSET(0xB9E87C0)

	class MNCLEOJGFEO : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MNCLEOJGFEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MNCLEOJGFEO_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::Single a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MNCLEOJGFEO_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MNCLEOJGFEO_ENDINVOKE_OFFSET))(this, a1);
		}

	};
