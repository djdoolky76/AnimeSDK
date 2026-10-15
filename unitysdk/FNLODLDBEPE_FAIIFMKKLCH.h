#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class FCOEMCEDLNL;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class Type; }

#define FNLODLDBEPE_FAIIFMKKLCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15885AC0)
#define FNLODLDBEPE_FAIIFMKKLCH_CTOR_OFFSET UNITYSDK_OFFSET(0x158859D0)
#define FNLODLDBEPE_FAIIFMKKLCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15885B00)
#define FNLODLDBEPE_FAIIFMKKLCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1587FC20)

inline static constexpr unsigned int FNLODLDBEPE_FAIIFMKKLCH_TypeDefinitionIndex = 67915;

	class FNLODLDBEPE_FAIIFMKKLCH : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FNLODLDBEPE_FAIIFMKKLCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::System::Type* a1, ::FCOEMCEDLNL* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FNLODLDBEPE_FAIIFMKKLCH_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Type* a1, ::FCOEMCEDLNL* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Type*, ::FCOEMCEDLNL*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FNLODLDBEPE_FAIIFMKKLCH_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FNLODLDBEPE_FAIIFMKKLCH_ENDINVOKE_OFFSET))(this, a1);
		}

	};
