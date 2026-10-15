#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CENBJOMMJGD;
class HFIDFIANHAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFIDFIANHAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E53E420)
#define HFIDFIANHAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53E720)
#define HFIDFIANHAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E53E000)
#define HFIDFIANHAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E53DF50)
#define HFIDFIANHAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53DF00)
#define HFIDFIANHAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E53E180)
#define HFIDFIANHAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E53E040)
#define HFIDFIANHAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E53E2A0)
#define HFIDFIANHAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E53DEC0)
#define HFIDFIANHAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E53E560)
#define HFIDFIANHAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E53E4C0)
#define HFIDFIANHAN_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E53E030)
#define HFIDFIANHAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E53DEF0)
#define HFIDFIANHAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E53E310)
#define HFIDFIANHAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E53E370)

inline static constexpr unsigned int HFIDFIANHAN_TypeDefinitionIndex = 29661;

	class HFIDFIANHAN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CENBJOMMJGD*>* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HFIDFIANHAN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFIDFIANHAN*>**)UnitySDK::FromName("", "HFIDFIANHAN")->GetStaticField(0x2F6D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::CENBJOMMJGD*>** StaticGet_KHPCDHPFCHE()
		{
			return (::Google::Protobuf::FieldCodec_1<::CENBJOMMJGD*>**)UnitySDK::FromName("", "HFIDFIANHAN")->GetStaticField(0x2F6D8);
		}

		// static const ::System::Object DPPAFBAHEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDFIANHAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFIDFIANHAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFIDFIANHAN*))((::PBYTE)hIl2Cpp + HFIDFIANHAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFIDFIANHAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFIDFIANHAN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFIDFIANHAN*>*(*)())((::PBYTE)hIl2Cpp + HFIDFIANHAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDFIANHAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFIDFIANHAN* Clone()
		{
			return ((::HFIDFIANHAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDFIANHAN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CENBJOMMJGD*>* MKMAMKNLJGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CENBJOMMJGD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDFIANHAN_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFIDFIANHAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFIDFIANHAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFIDFIANHAN*))((::PBYTE)hIl2Cpp + HFIDFIANHAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDFIANHAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDFIANHAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFIDFIANHAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDFIANHAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFIDFIANHAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFIDFIANHAN*))((::PBYTE)hIl2Cpp + HFIDFIANHAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFIDFIANHAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
