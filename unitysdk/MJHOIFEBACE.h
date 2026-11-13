#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKDJIOPKBGE;
class MJHOIFEBACE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJHOIFEBACE_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x205C1A90)
#define MJHOIFEBACE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205C1E80)
#define MJHOIFEBACE_CCTOR_OFFSET UNITYSDK_OFFSET(0x205C2160)
#define MJHOIFEBACE_CLONE_OFFSET UNITYSDK_OFFSET(0x205C1A60)
#define MJHOIFEBACE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205C19D0)
#define MJHOIFEBACE_CTOR_OFFSET UNITYSDK_OFFSET(0x205C1990)
#define MJHOIFEBACE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205C1BE0)
#define MJHOIFEBACE_EQUALS_OFFSET UNITYSDK_OFFSET(0x205C1AA0)
#define MJHOIFEBACE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205C1D00)
#define MJHOIFEBACE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205C1950)
#define MJHOIFEBACE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205C1FC0)
#define MJHOIFEBACE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205C1F20)
#define MJHOIFEBACE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205C1980)
#define MJHOIFEBACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205C1D70)
#define MJHOIFEBACE_WRITETO_OFFSET UNITYSDK_OFFSET(0x205C1DD0)

inline static constexpr unsigned int MJHOIFEBACE_TypeDefinitionIndex = 31680;

	class MJHOIFEBACE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AKDJIOPKBGE*>* BPJNCMFCKBJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MJHOIFEBACE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MJHOIFEBACE*>**)UnitySDK::FromName("", "MJHOIFEBACE")->GetStaticField(0x4CC60);
		}

		static ::Google::Protobuf::FieldCodec_1<::AKDJIOPKBGE*>** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::AKDJIOPKBGE*>**)UnitySDK::FromName("", "MJHOIFEBACE")->GetStaticField(0x4CC68);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHOIFEBACE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJHOIFEBACE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJHOIFEBACE*))((::PBYTE)hIl2Cpp + MJHOIFEBACE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJHOIFEBACE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MJHOIFEBACE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MJHOIFEBACE*>*(*)())((::PBYTE)hIl2Cpp + MJHOIFEBACE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHOIFEBACE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJHOIFEBACE* Clone()
		{
			return ((::MJHOIFEBACE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHOIFEBACE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AKDJIOPKBGE*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AKDJIOPKBGE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHOIFEBACE_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJHOIFEBACE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJHOIFEBACE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJHOIFEBACE*))((::PBYTE)hIl2Cpp + MJHOIFEBACE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHOIFEBACE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHOIFEBACE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJHOIFEBACE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHOIFEBACE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJHOIFEBACE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJHOIFEBACE*))((::PBYTE)hIl2Cpp + MJHOIFEBACE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJHOIFEBACE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
