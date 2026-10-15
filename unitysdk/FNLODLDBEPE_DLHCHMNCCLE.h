#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class FCOEMCEDLNL;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }

#define FNLODLDBEPE_DLHCHMNCCLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15879BF0)
#define FNLODLDBEPE_DLHCHMNCCLE_CTOR_OFFSET UNITYSDK_OFFSET(0x15879B00)
#define FNLODLDBEPE_DLHCHMNCCLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15879C30)
#define FNLODLDBEPE_DLHCHMNCCLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x158742B0)

inline static constexpr unsigned int FNLODLDBEPE_DLHCHMNCCLE_TypeDefinitionIndex = 67914;

	class FNLODLDBEPE_DLHCHMNCCLE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FNLODLDBEPE_DLHCHMNCCLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Type* a1, ::System::Object* a2, ::FCOEMCEDLNL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FNLODLDBEPE_DLHCHMNCCLE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Type* a1, ::System::Object* a2, ::FCOEMCEDLNL* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::System::Object*, ::FCOEMCEDLNL*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FNLODLDBEPE_DLHCHMNCCLE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FNLODLDBEPE_DLHCHMNCCLE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
