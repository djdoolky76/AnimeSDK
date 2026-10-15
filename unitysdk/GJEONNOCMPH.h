#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJEONNOCMPH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GJEONNOCMPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E47A000)
#define GJEONNOCMPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47A0A0)
#define GJEONNOCMPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E479CF0)
#define GJEONNOCMPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E479CC0)
#define GJEONNOCMPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E479CB0)
#define GJEONNOCMPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E479E00)
#define GJEONNOCMPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E479D30)
#define GJEONNOCMPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E479F60)
#define GJEONNOCMPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E479C70)
#define GJEONNOCMPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E47A050)
#define GJEONNOCMPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E47A020)
#define GJEONNOCMPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E479CA0)
#define GJEONNOCMPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E479F90)
#define GJEONNOCMPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E479FF0)

inline static constexpr unsigned int GJEONNOCMPH_TypeDefinitionIndex = 33998;

	class GJEONNOCMPH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GJEONNOCMPH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GJEONNOCMPH*>**)UnitySDK::FromName("", "GJEONNOCMPH")->GetStaticField(0x19E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GJEONNOCMPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJEONNOCMPH*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJEONNOCMPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GJEONNOCMPH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GJEONNOCMPH*>*(*)())((::PBYTE)hIl2Cpp + GJEONNOCMPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GJEONNOCMPH* Clone()
		{
			return ((::GJEONNOCMPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GJEONNOCMPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJEONNOCMPH*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEONNOCMPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GJEONNOCMPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJEONNOCMPH*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GJEONNOCMPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
