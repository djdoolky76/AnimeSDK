#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/System/MulticastDelegate.h"
class DILNLDDKOCN;
class MKJBLEPELNC;
class PKHKEEKIODC;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KNNDMDMHDHO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB589A60)
#define KNNDMDMHDHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB589950)
#define KNNDMDMHDHO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB589AF0)
#define KNNDMDMHDHO_INVOKE_OFFSET UNITYSDK_OFFSET(0xB589A40)

inline static constexpr unsigned int KNNDMDMHDHO_TypeDefinitionIndex = 67114;

	class KNNDMDMHDHO : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KNNDMDMHDHO_CTOR_OFFSET))(this, a1, a2);
		}

		::DILNLDDKOCN* Invoke(::MKJBLEPELNC* a1, ::NHHMEPILLHL a2, ::PKHKEEKIODC* a3)
		{
			return ((::DILNLDDKOCN*(*)(::PVOID, ::MKJBLEPELNC*, ::NHHMEPILLHL, ::PKHKEEKIODC*))((::PBYTE)hIl2Cpp + KNNDMDMHDHO_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::MKJBLEPELNC* a1, ::NHHMEPILLHL a2, ::PKHKEEKIODC* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MKJBLEPELNC*, ::NHHMEPILLHL, ::PKHKEEKIODC*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KNNDMDMHDHO_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::DILNLDDKOCN* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::DILNLDDKOCN*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KNNDMDMHDHO_ENDINVOKE_OFFSET))(this, a1);
		}

	};
