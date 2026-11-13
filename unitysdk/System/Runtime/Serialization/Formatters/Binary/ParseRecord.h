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

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A74A220)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A740950)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_INIT_OFFSET UNITYSDK_OFFSET(0x1A740A10)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ParseRecord_TypeDefinitionIndex = 1192;

	class ParseRecord : public ::System::Object
	{
	public:
		::System::Type* PRdtType; // 0x10
		::Il2CppArray<::System::Int32>* PRindexMap; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* PRprimitiveArray; // 0x20
		::Il2CppArray<::System::Int32>* PRlengthA; // 0x28
		::System::String* PRarrayElementTypeString; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* PRobjectInfo; // 0x38
		::System::Object* PRvarValue; // 0x40
		::System::String* PRkeyDt; // 0x48
		::System::String* PRname; // 0x50
		::Il2CppArray<::System::Object*>* PRmemberData; // 0x58
		::Il2CppArray<::System::Int32>* PRlowerBoundA; // 0x60
		::Il2CppArray<::System::Object*>* PRobjectA; // 0x68
		::System::Object* PRnewObj; // 0x70
		::System::Runtime::Serialization::SerializationInfo* PRsi; // 0x78
		::Il2CppArray<::System::Int32>* PRpositionA; // 0x80
		::System::Type* PRarrayElementType; // 0x88
		::Il2CppArray<::System::Int32>* PRupperBoundA; // 0x90
		::System::String* PRvalue; // 0x98
		::Il2CppArray<::System::Int32>* PRrectangularMap; // 0xA0
		::System::Int64 PRobjectId; // 0xA8
		::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE PRparseTypeEnum; // 0xB0
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE PRmemberValueEnum; // 0xB4
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRarrayElementTypeCode; // 0xB8
		::System::Int32 PRnullCount; // 0xBC
		::System::Int64 PRidRef; // 0xC0
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE PRmemberTypeEnum; // 0xC8
		::System::Boolean PRisEnum; // 0xCC
		::System::Byte _padding0[0x3];
		::System::Int64 PRtopId; // 0xD0
		::System::Int32 PRlinearlength; // 0xD8
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE PRobjectPositionEnum; // 0xDC
		::System::Int32 PRmemberIndex; // 0xE0
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE PRobjectTypeEnum; // 0xE4
		::System::Int32 PRrank; // 0xE8
		::System::Boolean PRisRegistered; // 0xEC
		::System::Boolean PRisLowerBound; // 0xED
		::System::Boolean PRisArrayVariant; // 0xEE
		::System::Boolean PRisValueTypeFixup; // 0xEF
		::System::Int64 PRheaderId; // 0xF0
		::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE PRarrayTypeEnum; // 0xF8
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRdtTypeCode; // 0xFC
		static ::System::Int32* StaticGet_parseRecordIdCount()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "ParseRecord")->GetStaticField(0x5BC0);
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
