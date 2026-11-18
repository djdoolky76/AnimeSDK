#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_CLASSCONSTRUCTORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E29E880)
#define UNREALTYPES_CLASSCONSTRUCTORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E29E8F0)
#define UNREALTYPES_CLASSCONSTRUCTORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E29E590)
#define UNREALTYPES_CLASSCONSTRUCTORDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E580)

namespace UnrealTypes
{
	inline static constexpr unsigned int ClassConstructorDelegate_TypeDefinitionIndex = 27731;

	class ClassConstructorDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASSCONSTRUCTORDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::UnrealTypes::Object* Invoke(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::UnrealTypes::Object*(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASSCONSTRUCTORDELEGATE_INVOKE_OFFSET))(this, initializer);
		}

		::System::IAsyncResult* BeginInvoke(::UnrealTypes::FObjectInitializer& initializer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnrealTypes::FObjectInitializer&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASSCONSTRUCTORDELEGATE_BEGININVOKE_OFFSET))(this, initializer, callback, object);
		}

		::UnrealTypes::Object* EndInvoke(::UnrealTypes::FObjectInitializer& initializer, ::System::IAsyncResult* result)
		{
			return ((::UnrealTypes::Object*(*)(::PVOID, ::UnrealTypes::FObjectInitializer&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASSCONSTRUCTORDELEGATE_ENDINVOKE_OFFSET))(this, initializer, result);
		}
	};
}
