#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNBBDMBNNDJ;
class JOLHIMGJGBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNBBDMBNNDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D8010)
#define GNBBDMBNNDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D8310)
#define GNBBDMBNNDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D7B90)
#define GNBBDMBNNDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D7AE0)
#define GNBBDMBNNDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D7A90)
#define GNBBDMBNNDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D7D70)
#define GNBBDMBNNDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D7BF0)
#define GNBBDMBNNDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D7E90)
#define GNBBDMBNNDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D7A20)
#define GNBBDMBNNDJ_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1E4D7BE0)
#define GNBBDMBNNDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D8150)
#define GNBBDMBNNDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D80B0)
#define GNBBDMBNNDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D7A80)
#define GNBBDMBNNDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D7F00)
#define GNBBDMBNNDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D7F60)

inline static constexpr unsigned int GNBBDMBNNDJ_TypeDefinitionIndex = 25169;

	class GNBBDMBNNDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JOLHIMGJGBO*>* MDELKGNPIOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GNBBDMBNNDJ")->GetStaticField(0x228C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GNBBDMBNNDJ")->GetStaticField(0x228C8);
		}

		// static const ::System::Object EFEMONKDOCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNBBDMBNNDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNBBDMBNNDJ*))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNBBDMBNNDJ* Clone()
		{
			return ((::GNBBDMBNNDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOLHIMGJGBO*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOLHIMGJGBO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNBBDMBNNDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNBBDMBNNDJ*))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNBBDMBNNDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNBBDMBNNDJ*))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNBBDMBNNDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
