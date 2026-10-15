#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DNGMCNPJHBJ_MCMNFKBLEEH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1194EED0)
#define DNGMCNPJHBJ_MCMNFKBLEEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1194EDD0)
#define DNGMCNPJHBJ_MCMNFKBLEEH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1194EF10)
#define DNGMCNPJHBJ_MCMNFKBLEEH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1194EEC0)

inline static constexpr unsigned int DNGMCNPJHBJ_MCMNFKBLEEH_TypeDefinitionIndex = 65311;

	class DNGMCNPJHBJ_MCMNFKBLEEH : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DNGMCNPJHBJ_MCMNFKBLEEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke(::System::Collections::Generic::List_1<::FMKEJLGKEMH*>* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::FMKEJLGKEMH*>*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + DNGMCNPJHBJ_MCMNFKBLEEH_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::FMKEJLGKEMH*>* a1, ::DNGMCNPJHBJ* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::FMKEJLGKEMH*>*, ::DNGMCNPJHBJ*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DNGMCNPJHBJ_MCMNFKBLEEH_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DNGMCNPJHBJ_MCMNFKBLEEH_ENDINVOKE_OFFSET))(this, a1);
		}

	};
