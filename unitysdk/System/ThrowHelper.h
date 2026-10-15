#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ExceptionArgument.h"
#include "unitysdk/System/ExceptionResource.h"
#include "unitysdk/System/Object.h"
namespace System { class ArgumentException; }
namespace System { class ArgumentOutOfRangeException; }
namespace System { class Exception; }
namespace System { class InvalidOperationException; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { class KeyNotFoundException; }

#define SYSTEM_THROWHELPER_CREATEARGUMENTEXCEPTION_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C167940)
#define SYSTEM_THROWHELPER_CREATEARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C167640)
#define SYSTEM_THROWHELPER_CREATEARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C167B30)
#define SYSTEM_THROWHELPER_CREATEARRAYTYPEMISMATCHEXCEPTION_ARRAYTYPEMUSTBEEXACTMATCH_OFFSET UNITYSDK_OFFSET(0x1C167820)
#define SYSTEM_THROWHELPER_CREATEINDEXOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C167A70)
#define SYSTEM_THROWHELPER_GETADDINGDUPLICATEWITHKEYARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C168300)
#define SYSTEM_THROWHELPER_GETARGUMENTNAME_OFFSET UNITYSDK_OFFSET(0x1C168000)
#define SYSTEM_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1C168580)
#define SYSTEM_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C168160)
#define SYSTEM_THROWHELPER_GETINVALIDOPERATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C168500)
#define SYSTEM_THROWHELPER_GETKEYNOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C168400)
#define SYSTEM_THROWHELPER_GETRESOURCENAME_OFFSET UNITYSDK_OFFSET(0x1C167FB0)
#define SYSTEM_THROWHELPER_THROWADDINGDUPLICATEWITHKEYARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C1683C0)
#define SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_ARGUMENT_INVALIDARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1C1682B0)
#define SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C167900)
#define SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C167F50)
#define SYSTEM_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C167600)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1C167CD0)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x1C167CF0)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C167AF0)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGE_INDEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C168230)
#define SYSTEM_THROWHELPER_THROWARRAYTYPEMISMATCHEXCEPTION_ARRAYTYPEMUSTBEEXACTMATCH_OFFSET UNITYSDK_OFFSET(0x1C1677E0)
#define SYSTEM_THROWHELPER_THROWCOUNTARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_COUNT_OFFSET UNITYSDK_OFFSET(0x1C168750)
#define SYSTEM_THROWHELPER_THROWINDEXARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C168270)
#define SYSTEM_THROWHELPER_THROWINDEXOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C167A20)
#define SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_CONCURRENTOPERATIONSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C1684C0)
#define SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMFAILEDVERSION_OFFSET UNITYSDK_OFFSET(0x1C168110)
#define SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C168050)
#define SYSTEM_THROWHELPER_THROWKEYNOTFOUNDEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1C168480)
#define SYSTEM_THROWHELPER_THROWKEYNOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C167F00)
#define SYSTEM_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C1680B0)
#define SYSTEM_THROWHELPER_THROWSTARTINDEXARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_INDEX_OFFSET UNITYSDK_OFFSET(0x1C168710)
#define SYSTEM_THROWHELPER_THROWWRONGKEYTYPEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C167D60)
#define SYSTEM_THROWHELPER_THROWWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C167E30)

namespace System
{
	inline static constexpr unsigned int ThrowHelper_TypeDefinitionIndex = 124;

	class ThrowHelper : public ::System::Object
	{
	public:
		static ::System::Void ThrowArgumentNullException(::System::ExceptionArgument a1)
		{
			return ((::System::Void(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET))(a1);
		}

		static ::System::Exception* CreateArgumentNullException(::System::ExceptionArgument a1)
		{
			return ((::System::Exception*(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_CREATEARGUMENTNULLEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowArrayTypeMismatchException_ArrayTypeMustBeExactMatch(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARRAYTYPEMISMATCHEXCEPTION_ARRAYTYPEMUSTBEEXACTMATCH_OFFSET))(a1);
		}

		static ::System::Exception* CreateArrayTypeMismatchException_ArrayTypeMustBeExactMatch(::System::Type* a1)
		{
			return ((::System::Exception*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_CREATEARRAYTYPEMISMATCHEXCEPTION_ARRAYTYPEMUSTBEEXACTMATCH_OFFSET))(a1);
		}

		static ::System::Void ThrowArgumentException_InvalidTypeWithPointersNotSupported(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET))(a1);
		}

		static ::System::Exception* CreateArgumentException_InvalidTypeWithPointersNotSupported(::System::Type* a1)
		{
			return ((::System::Exception*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_CREATEARGUMENTEXCEPTION_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET))(a1);
		}

		static ::System::Void ThrowIndexOutOfRangeException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWINDEXOUTOFRANGEEXCEPTION_OFFSET))();
		}

		static ::System::Exception* CreateIndexOutOfRangeException()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_CREATEINDEXOUTOFRANGEEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentOutOfRangeException(::System::ExceptionArgument a1)
		{
			return ((::System::Void(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(a1);
		}

		static ::System::Exception* CreateArgumentOutOfRangeException(::System::ExceptionArgument a1)
		{
			return ((::System::Exception*(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_CREATEARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowArgumentOutOfRangeException_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET))();
		}

		static ::System::Void ThrowWrongKeyTypeArgumentException(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWWRONGKEYTYPEARGUMENTEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowWrongValueTypeArgumentException(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowKeyNotFoundException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWKEYNOTFOUNDEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentException(::System::ExceptionResource a1)
		{
			return ((::System::Void(*)(::System::ExceptionResource))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowArgumentOutOfRangeException_2(::System::ExceptionArgument a1, ::System::ExceptionResource a2)
		{
			return ((::System::Void(*)(::System::ExceptionArgument, ::System::ExceptionResource))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_2_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowInvalidOperationException(::System::ExceptionResource a1)
		{
			return ((::System::Void(*)(::System::ExceptionResource))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowNotSupportedException(::System::ExceptionResource a1)
		{
			return ((::System::Void(*)(::System::ExceptionResource))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_OFFSET))(a1);
		}

		static ::System::String* GetArgumentName(::System::ExceptionArgument a1)
		{
			return ((::System::String*(*)(::System::ExceptionArgument))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETARGUMENTNAME_OFFSET))(a1);
		}

		static ::System::String* GetResourceName(::System::ExceptionResource a1)
		{
			return ((::System::String*(*)(::System::ExceptionResource))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETRESOURCENAME_OFFSET))(a1);
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMFAILEDVERSION_OFFSET))();
		}

		static ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument a1, ::System::String* a2)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::System::ExceptionArgument, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowArgumentOutOfRange_IndexException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGE_INDEXEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWINDEXARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentException_Argument_InvalidArrayType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_ARGUMENT_INVALIDARRAYTYPE_OFFSET))();
		}

		static ::System::ArgumentException* GetAddingDuplicateWithKeyArgumentException(::System::Object* a1)
		{
			return ((::System::ArgumentException*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETADDINGDUPLICATEWITHKEYARGUMENTEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowAddingDuplicateWithKeyArgumentException(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWADDINGDUPLICATEWITHKEYARGUMENTEXCEPTION_OFFSET))(a1);
		}

		static ::System::Collections::Generic::KeyNotFoundException* GetKeyNotFoundException(::System::Object* a1)
		{
			return ((::System::Collections::Generic::KeyNotFoundException*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETKEYNOTFOUNDEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowKeyNotFoundException_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWKEYNOTFOUNDEXCEPTION_1_OFFSET))(a1);
		}

		static ::System::Void ThrowInvalidOperationException_ConcurrentOperationsNotSupported()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_CONCURRENTOPERATIONSNOTSUPPORTED_OFFSET))();
		}

		static ::System::InvalidOperationException* GetInvalidOperationException(::System::String* a1)
		{
			return ((::System::InvalidOperationException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETINVALIDOPERATIONEXCEPTION_OFFSET))(a1);
		}

		static ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException_1(::System::ExceptionArgument a1, ::System::ExceptionResource a2)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::System::ExceptionArgument, ::System::ExceptionResource))((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWSTARTINDEXARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_INDEX_OFFSET))();
		}

		static ::System::Void ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THROWHELPER_THROWCOUNTARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_COUNT_OFFSET))();
		}

	};
}
