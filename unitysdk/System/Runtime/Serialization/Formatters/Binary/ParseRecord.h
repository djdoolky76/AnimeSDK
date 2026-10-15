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

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2F6B70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2ED280)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_INIT_OFFSET UNITYSDK_OFFSET(0x1C2ED350)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ParseRecord_TypeDefinitionIndex = 1192;

	class ParseRecord : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* PRrectangularMap; // 0x10
		::System::String* PRvalue; // 0x18
		::System::String* PRarrayElementTypeString; // 0x20
		::Il2CppArray<::System::Object*>* PRobjectA; // 0x28
		::System::Object* PRnewObj; // 0x30
		::System::Type* PRarrayElementType; // 0x38
		::System::String* PRname; // 0x40
		::System::String* PRkeyDt; // 0x48
		::Il2CppArray<::System::Int32>* PRindexMap; // 0x50
		::Il2CppArray<::System::Int32>* PRlengthA; // 0x58
		::Il2CppArray<::System::Object*>* PRmemberData; // 0x60
		::System::Object* PRvarValue; // 0x68
		::System::Runtime::Serialization::SerializationInfo* PRsi; // 0x70
		::Il2CppArray<::System::Int32>* PRpositionA; // 0x78
		::Il2CppArray<::System::Int32>* PRlowerBoundA; // 0x80
		::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* PRprimitiveArray; // 0x88
		::System::Type* PRdtType; // 0x90
		::Il2CppArray<::System::Int32>* PRupperBoundA; // 0x98
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* PRobjectInfo; // 0xA0
		::System::Int64 PRobjectId; // 0xA8
		::System::Int32 PRmemberIndex; // 0xB0
		::System::Boolean PRisLowerBound; // 0xB4
		::System::Boolean PRisRegistered; // 0xB5
		::System::Byte _padding0[0x2];
		::System::Int64 PRheaderId; // 0xB8
		::System::Int64 PRidRef; // 0xC0
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE PRmemberTypeEnum; // 0xC8
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE PRobjectPositionEnum; // 0xCC
		::System::Int32 PRlinearlength; // 0xD0
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRarrayElementTypeCode; // 0xD4
		::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE PRarrayTypeEnum; // 0xD8
		::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE PRparseTypeEnum; // 0xDC
		::System::Int32 PRrank; // 0xE0
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRdtTypeCode; // 0xE4
		::System::Int64 PRtopId; // 0xE8
		::System::Boolean PRisValueTypeFixup; // 0xF0
		::System::Boolean PRisEnum; // 0xF1
		::System::Boolean PRisArrayVariant; // 0xF2
		::System::Byte _padding1[0x1];
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE PRobjectTypeEnum; // 0xF4
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE PRmemberValueEnum; // 0xF8
		::System::Int32 PRnullCount; // 0xFC
		static ::System::Int32* StaticGet_parseRecordIdCount()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "ParseRecord")->GetStaticField(0x6F10);
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
