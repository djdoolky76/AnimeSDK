#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class DINGDGLKHIP;
class JEIKFFFGONB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEIKFFFGONB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA2CBA0)
#define JEIKFFFGONB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA2CF80)
#define JEIKFFFGONB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA2C530)
#define JEIKFFFGONB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA2C470)
#define JEIKFFFGONB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA2C430)
#define JEIKFFFGONB_DOKNAGBFBEC_OFFSET UNITYSDK_OFFSET(0x1FA2C570)
#define JEIKFFFGONB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA2C780)
#define JEIKFFFGONB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA2C590)
#define JEIKFFFGONB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA2C950)
#define JEIKFFFGONB_GJOFDMODOHJ_OFFSET UNITYSDK_OFFSET(0x1FA2C580)
#define JEIKFFFGONB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA2C3F0)
#define JEIKFFFGONB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA2CD80)
#define JEIKFFFGONB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA2CC80)
#define JEIKFFFGONB_OEMOCCOFEOK_OFFSET UNITYSDK_OFFSET(0x1FA2C560)
#define JEIKFFFGONB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA2C420)
#define JEIKFFFGONB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA2CA20)
#define JEIKFFFGONB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA2CA80)

inline static constexpr unsigned int JEIKFFFGONB_TypeDefinitionIndex = 34138;

	class JEIKFFFGONB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DINGDGLKHIP*>* FDFPABEIHFA; // 0x10
		::CAGKEDMHEOI* PHBFHCCKHIC; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JEIKFFFGONB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEIKFFFGONB*>**)UnitySDK::FromName("", "JEIKFFFGONB")->GetStaticField(0x62120);
		}

		static ::Google::Protobuf::FieldCodec_1<::DINGDGLKHIP*>** StaticGet_OKMDKJJBBMI()
		{
			return (::Google::Protobuf::FieldCodec_1<::DINGDGLKHIP*>**)UnitySDK::FromName("", "JEIKFFFGONB")->GetStaticField(0x62128);
		}

		// static const ::System::Object DPKDDEBJCNH; // 0x0
		// static const ::System::Object EOPEFMJDFKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIKFFFGONB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEIKFFFGONB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEIKFFFGONB*))((::PBYTE)hIl2Cpp + JEIKFFFGONB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEIKFFFGONB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEIKFFFGONB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEIKFFFGONB*>*(*)())((::PBYTE)hIl2Cpp + JEIKFFFGONB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIKFFFGONB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEIKFFFGONB* Clone()
		{
			return ((::JEIKFFFGONB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIKFFFGONB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DINGDGLKHIP*>* OEMOCCOFEOK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DINGDGLKHIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIKFFFGONB_OEMOCCOFEOK_OFFSET))(this);
		}

		::CAGKEDMHEOI* DOKNAGBFBEC()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIKFFFGONB_DOKNAGBFBEC_OFFSET))(this);
		}

		::System::Void GJOFDMODOHJ(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + JEIKFFFGONB_GJOFDMODOHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEIKFFFGONB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEIKFFFGONB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEIKFFFGONB*))((::PBYTE)hIl2Cpp + JEIKFFFGONB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIKFFFGONB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIKFFFGONB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEIKFFFGONB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIKFFFGONB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEIKFFFGONB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEIKFFFGONB*))((::PBYTE)hIl2Cpp + JEIKFFFGONB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEIKFFFGONB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
