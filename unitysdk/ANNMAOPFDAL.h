#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANNMAOPFDAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANNMAOPFDAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E664F70)
#define ANNMAOPFDAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E665010)
#define ANNMAOPFDAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E664C60)
#define ANNMAOPFDAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E664C30)
#define ANNMAOPFDAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E664C20)
#define ANNMAOPFDAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E664D70)
#define ANNMAOPFDAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E664CA0)
#define ANNMAOPFDAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E664ED0)
#define ANNMAOPFDAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E664BE0)
#define ANNMAOPFDAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E664FC0)
#define ANNMAOPFDAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E664F90)
#define ANNMAOPFDAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E664C10)
#define ANNMAOPFDAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E664F00)
#define ANNMAOPFDAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E664F60)

	class ANNMAOPFDAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ANNMAOPFDAL")->GetStaticField(0x3FBC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANNMAOPFDAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANNMAOPFDAL*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANNMAOPFDAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ANNMAOPFDAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANNMAOPFDAL* Clone()
		{
			return ((::ANNMAOPFDAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANNMAOPFDAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANNMAOPFDAL*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANNMAOPFDAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANNMAOPFDAL*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
