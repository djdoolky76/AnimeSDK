#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCNKHPBPOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFCNKHPBPOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E461C30)
#define GFCNKHPBPOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E461CD0)
#define GFCNKHPBPOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E461920)
#define GFCNKHPBPOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4618F0)
#define GFCNKHPBPOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4618E0)
#define GFCNKHPBPOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E461A30)
#define GFCNKHPBPOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E461960)
#define GFCNKHPBPOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E461B90)
#define GFCNKHPBPOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4618A0)
#define GFCNKHPBPOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E461C80)
#define GFCNKHPBPOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E461C50)
#define GFCNKHPBPOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4618D0)
#define GFCNKHPBPOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E461BC0)
#define GFCNKHPBPOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E461C20)

inline static constexpr unsigned int GFCNKHPBPOC_TypeDefinitionIndex = 28951;

	class GFCNKHPBPOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFCNKHPBPOC")->GetStaticField(0x12FD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFCNKHPBPOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFCNKHPBPOC*))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCNKHPBPOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFCNKHPBPOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFCNKHPBPOC* Clone()
		{
			return ((::GFCNKHPBPOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFCNKHPBPOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFCNKHPBPOC*))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFCNKHPBPOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFCNKHPBPOC*))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFCNKHPBPOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
