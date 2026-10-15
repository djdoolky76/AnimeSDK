#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalArrayTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalMemberTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalMemberValueE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalObjectPositionE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalObjectTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalParseTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class PrimitiveArray; }
namespace System::Runtime::Serialization::Formatters::Binary { class ReadObjectInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C325160)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C31B890)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_INIT_OFFSET UNITYSDK_OFFSET(0x1C31B950)

namespace System::Runtime::Serialization::Formatters::Binary
{
	class ParseRecord : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* PRrectangularMap; // 0x10
		::System::Type* PRarrayElementType; // 0x18
		::Il2CppArray<::System::Int32>* PRindexMap; // 0x20
		::System::String* PRvalue; // 0x28
		::System::Object* PRvarValue; // 0x30
		::System::String* PRname; // 0x38
		::Il2CppArray<::System::Int32>* PRlowerBoundA; // 0x40
		::System::String* PRarrayElementTypeString; // 0x48
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* PRobjectInfo; // 0x50
		::System::Object* PRnewObj; // 0x58
		::System::String* PRkeyDt; // 0x60
		::Il2CppArray<::System::Object*>* PRobjectA; // 0x68
		::System::Runtime::Serialization::SerializationInfo* PRsi; // 0x70
		::Il2CppArray<::System::Object*>* PRmemberData; // 0x78
		::Il2CppArray<::System::Int32>* PRlengthA; // 0x80
		::System::Type* PRdtType; // 0x88
		::Il2CppArray<::System::Int32>* PRupperBoundA; // 0x90
		::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* PRprimitiveArray; // 0x98
		::Il2CppArray<::System::Int32>* PRpositionA; // 0xA0
		::System::Int64 PRheaderId; // 0xA8
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE PRmemberTypeEnum; // 0xB0
		::System::Int32 PRlinearlength; // 0xB4
		::System::Boolean PRisValueTypeFixup; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE PRobjectTypeEnum; // 0xBC
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRdtTypeCode; // 0xC0
		::System::Int32 PRrank; // 0xC4
		::System::Int64 PRtopId; // 0xC8
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE PRmemberValueEnum; // 0xD0
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRarrayElementTypeCode; // 0xD4
		::System::Int32 PRnullCount; // 0xD8
		::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE PRparseTypeEnum; // 0xDC
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE PRobjectPositionEnum; // 0xE0
		::System::Int32 PRmemberIndex; // 0xE4
		::System::Boolean PRisRegistered; // 0xE8
		::System::Boolean PRisEnum; // 0xE9
		::System::Boolean PRisArrayVariant; // 0xEA
		::System::Boolean PRisLowerBound; // 0xEB
		::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE PRarrayTypeEnum; // 0xEC
		::System::Int64 PRidRef; // 0xF0
		::System::Int64 PRobjectId; // 0xF8
		static ::System::Int32* StaticGet_parseRecordIdCount()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "ParseRecord")->GetStaticField(0x5F40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_INIT_OFFSET))(this);
		}

	};
}
