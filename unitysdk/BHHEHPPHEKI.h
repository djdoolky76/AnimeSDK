#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHHEHPPHEKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHHEHPPHEKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F004420)
#define BHHEHPPHEKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0044C0)
#define BHHEHPPHEKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0040C0)
#define BHHEHPPHEKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F004090)
#define BHHEHPPHEKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F004080)
#define BHHEHPPHEKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F004220)
#define BHHEHPPHEKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F004130)
#define BHHEHPPHEKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F004380)
#define BHHEHPPHEKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F004010)
#define BHHEHPPHEKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F004470)
#define BHHEHPPHEKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F004440)
#define BHHEHPPHEKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F004070)
#define BHHEHPPHEKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0043B0)
#define BHHEHPPHEKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F004410)

inline static constexpr unsigned int BHHEHPPHEKI_TypeDefinitionIndex = 29219;

	class BHHEHPPHEKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BHHEHPPHEKI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BHHEHPPHEKI*>**)UnitySDK::FromName("", "BHHEHPPHEKI")->GetStaticField(0x47FC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHHEHPPHEKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHHEHPPHEKI*))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHHEHPPHEKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BHHEHPPHEKI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BHHEHPPHEKI*>*(*)())((::PBYTE)hIl2Cpp + BHHEHPPHEKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHHEHPPHEKI* Clone()
		{
			return ((::BHHEHPPHEKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHHEHPPHEKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHHEHPPHEKI*))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHHEHPPHEKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHHEHPPHEKI*))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHHEHPPHEKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
