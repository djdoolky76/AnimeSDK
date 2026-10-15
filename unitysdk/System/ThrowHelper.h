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

#define SYSTEM_THROWHELPER_CREATEARGUMENTEXCEPTION_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C139020)
#define SYSTEM_THROWHELPER_CREATEARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C138D20)
#define SYSTEM_THROWHELPER_CREATEARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139210)
#define SYSTEM_THROWHELPER_CREATEARRAYTYPEMISMATCHEXCEPTION_ARRAYTYPEMUSTBEEXACTMATCH_OFFSET UNITYSDK_OFFSET(0x1C138F00)
#define SYSTEM_THROWHELPER_CREATEINDEXOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139150)
#define SYSTEM_THROWHELPER_GETADDINGDUPLICATEWITHKEYARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C1399E0)
#define SYSTEM_THROWHELPER_GETARGUMENTNAME_OFFSET UNITYSDK_OFFSET(0x1C1396E0)
#define SYSTEM_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1C139C60)
#define SYSTEM_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139840)
#define SYSTEM_THROWHELPER_GETINVALIDOPERATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139BE0)
#define SYSTEM_THROWHELPER_GETKEYNOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139AE0)
#define SYSTEM_THROWHELPER_GETRESOURCENAME_OFFSET UNITYSDK_OFFSET(0x1C139690)
#define SYSTEM_THROWHELPER_THROWADDINGDUPLICATEWITHKEYARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139AA0)
#define SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_ARGUMENT_INVALIDARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1C139990)
#define SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C138FE0)
#define SYSTEM_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139630)
#define SYSTEM_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C138CE0)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1C1393B0)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x1C1393D0)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C1391D0)
#define SYSTEM_THROWHELPER_THROWARGUMENTOUTOFRANGE_INDEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139910)
#define SYSTEM_THROWHELPER_THROWARRAYTYPEMISMATCHEXCEPTION_ARRAYTYPEMUSTBEEXACTMATCH_OFFSET UNITYSDK_OFFSET(0x1C138EC0)
#define SYSTEM_THROWHELPER_THROWCOUNTARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_COUNT_OFFSET UNITYSDK_OFFSET(0x1C139E30)
#define SYSTEM_THROWHELPER_THROWINDEXARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139950)
#define SYSTEM_THROWHELPER_THROWINDEXOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139100)
#define SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_CONCURRENTOPERATIONSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1C139BA0)
#define SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMFAILEDVERSION_OFFSET UNITYSDK_OFFSET(0x1C1397F0)
#define SYSTEM_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139730)
#define SYSTEM_THROWHELPER_THROWKEYNOTFOUNDEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1C139B60)
#define SYSTEM_THROWHELPER_THROWKEYNOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C1395E0)
#define SYSTEM_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139790)
#define SYSTEM_THROWHELPER_THROWSTARTINDEXARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_INDEX_OFFSET UNITYSDK_OFFSET(0x1C139DF0)
#define SYSTEM_THROWHELPER_THROWWRONGKEYTYPEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139440)
#define SYSTEM_THROWHELPER_THROWWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C139510)

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
