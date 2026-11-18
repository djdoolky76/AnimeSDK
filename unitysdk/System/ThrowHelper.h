#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ExceptionArgument.h"
#include "unitysdk/System/ExceptionResource.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_THROWHELPER_CREATEARGUMENTEXCEPTION_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1E69E1B0)
#define SYSTEM_THROWHELPER_CREATEARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E69DED0)
#define SYSTEM_THROWHELPER_CREATEARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E69E450)
#define SYSTEM_THROWHELPER_CREATEARRAYTYPEMISMATCHEXCEPTION_ARRAYTYPEMUSTBEEXACTMATCH_OFFSET UNITYSDK_OFFSET(0x1E69E070)
#define SYSTEM_THROWHELPER_CREATEINDEXOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E69E300)
#define SYSTEM_THROWHELPER_CREATEINVALIDOPERATIONEXCEPTION_OUTSTANDINGREFERENCES_OFFSET UNITYSDK_OFFSET(0x1E69E530)
#define SYSTEM_THROWHELPER_GETARGUMENTNAME_OFFSET UNITYSDK_OFFSET(0x1E69E8E0)
#define SYSTEM_THROWHELPER_GETRESOURCENAME_OFFSET UNITYSDK_OFFSET(0x1E69E890)
#define SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1E69E170)
#define SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E69E830)
#define SYSTEM_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E69DE90)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1E69E5F0)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x1E69E610)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E69E410)
#define SYSTEM_THROWHELPER_THROWARRAYTYPEMISMATCHEXCEPTION_ARRAYTYPEMUSTBEEXACTMATCH_OFFSET UNITYSDK_OFFSET(0x1E69E030)
#define SYSTEM_THROWHELPER_THROWINDEXOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E69E2B0)
#define SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E69E930)
#define SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_OUTSTANDINGREFERENCES_OFFSET UNITYSDK_OFFSET(0x1E69E4E0)
#define SYSTEM_THROWHELPER_THROWKEYNOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E69E7E0)
#define SYSTEM_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E69E990)
#define SYSTEM_THROWHELPER_THROWWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E69E710)

namespace System
{
	inline static constexpr unsigned int ThrowHelper_TypeDefinitionIndex = 114;

	class ThrowHelper : public ::System::Object
	{
	public:
		static ::System::Void ThrowArgumentNullException(::System::ExceptionArgument argument)
		{
			return ((::System::Void(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET))(argument);
		}

		static ::System::Exception* CreateArgumentNullException(::System::ExceptionArgument argument)
		{
			return ((::System::Exception*(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_CREATEARGUMENTNULLEXCEPTION_OFFSET))(argument);
		}

		static ::System::Void ThrowArrayTypeMismatchException_ArrayTypeMustBeExactMatch(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARRAYTYPEMISMATCHEXCEPTION_ARRAYTYPEMUSTBEEXACTMATCH_OFFSET))(type);
		}

		static ::System::Exception* CreateArrayTypeMismatchException_ArrayTypeMustBeExactMatch(::System::Type* type)
		{
			return ((::System::Exception*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_CREATEARRAYTYPEMISMATCHEXCEPTION_ARRAYTYPEMUSTBEEXACTMATCH_OFFSET))(type);
		}

		static ::System::Void ThrowArgumentException_InvalidTypeWithPointersNotSupported(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET))(type);
		}

		static ::System::Exception* CreateArgumentException_InvalidTypeWithPointersNotSupported(::System::Type* type)
		{
			return ((::System::Exception*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_CREATEARGUMENTEXCEPTION_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET))(type);
		}

		static ::System::Void ThrowIndexOutOfRangeException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWINDEXOUTOFRANGEEXCEPTION_OFFSET))();
		}

		static ::System::Exception* CreateIndexOutOfRangeException()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_CREATEINDEXOUTOFRANGEEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentOutOfRangeException(::System::ExceptionArgument argument)
		{
			return ((::System::Void(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(argument);
		}

		static ::System::Exception* CreateArgumentOutOfRangeException(::System::ExceptionArgument argument)
		{
			return ((::System::Exception*(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_CREATEARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(argument);
		}

		static ::System::Void ThrowInvalidOperationException_OutstandingReferences()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_OUTSTANDINGREFERENCES_OFFSET))();
		}

		static ::System::Exception* CreateInvalidOperationException_OutstandingReferences()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_CREATEINVALIDOPERATIONEXCEPTION_OUTSTANDINGREFERENCES_OFFSET))();
		}

		static ::System::Void ThrowArgumentOutOfRangeException_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET))();
		}

		static ::System::Void ThrowWrongValueTypeArgumentException(::System::Object* value, ::System::Type* targetType)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET))(value, targetType);
		}

		static ::System::Void ThrowKeyNotFoundException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWKEYNOTFOUNDEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentException(::System::ExceptionResource resource)
		{
			return ((::System::Void(*)(::System::ExceptionResource))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET))(resource);
		}

		static ::System::Void ThrowArgumentOutOfRangeException_2(::System::ExceptionArgument argument, ::System::ExceptionResource resource)
		{
			return ((::System::Void(*)(::System::ExceptionArgument, ::System::ExceptionResource))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_2_OFFSET))(argument, resource);
		}

		static ::System::Void ThrowInvalidOperationException(::System::ExceptionResource resource)
		{
			return ((::System::Void(*)(::System::ExceptionResource))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_OFFSET))(resource);
		}

		static ::System::Void ThrowNotSupportedException(::System::ExceptionResource resource)
		{
			return ((::System::Void(*)(::System::ExceptionResource))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_OFFSET))(resource);
		}

		static ::System::String* GetArgumentName(::System::ExceptionArgument argument)
		{
			return ((::System::String*(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETARGUMENTNAME_OFFSET))(argument);
		}

		static ::System::String* GetResourceName(::System::ExceptionResource resource)
		{
			return ((::System::String*(*)(::System::ExceptionResource))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETRESOURCENAME_OFFSET))(resource);
		}
	};
}
