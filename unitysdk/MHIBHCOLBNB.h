#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHIBHCOLBNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHIBHCOLBNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA05200)
#define MHIBHCOLBNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA05460)
#define MHIBHCOLBNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA04E00)
#define MHIBHCOLBNB_CNCCEOKNPHI_OFFSET UNITYSDK_OFFSET(0x1EA04E30)
#define MHIBHCOLBNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA04D70)
#define MHIBHCOLBNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA04D20)
#define MHIBHCOLBNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA04F30)
#define MHIBHCOLBNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA04E40)
#define MHIBHCOLBNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA05020)
#define MHIBHCOLBNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA04CE0)
#define MHIBHCOLBNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA052C0)
#define MHIBHCOLBNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA05270)
#define MHIBHCOLBNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA04D10)
#define MHIBHCOLBNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA05120)
#define MHIBHCOLBNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA05180)

inline static constexpr unsigned int MHIBHCOLBNB_TypeDefinitionIndex = 34252;

	class MHIBHCOLBNB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OOAABNPHAFG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MHIBHCOLBNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MHIBHCOLBNB*>**)UnitySDK::FromName("", "MHIBHCOLBNB")->GetStaticField(0x51DA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PBLLBGLHNKD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MHIBHCOLBNB")->GetStaticField(0x51DA8);
		}

		// static const ::System::Object MNLBOCODNIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHIBHCOLBNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHIBHCOLBNB*))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHIBHCOLBNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MHIBHCOLBNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MHIBHCOLBNB*>*(*)())((::PBYTE)hIl2Cpp + MHIBHCOLBNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHIBHCOLBNB* Clone()
		{
			return ((::MHIBHCOLBNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CNCCEOKNPHI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_CNCCEOKNPHI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHIBHCOLBNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHIBHCOLBNB*))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHIBHCOLBNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHIBHCOLBNB*))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHIBHCOLBNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
