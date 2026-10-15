#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBHJJCBDJHA;
class HFCMKGNCMCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFCMKGNCMCA_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1E5647B0)
#define HFCMKGNCMCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E564BA0)
#define HFCMKGNCMCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E564EA0)
#define HFCMKGNCMCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E564780)
#define HFCMKGNCMCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5646D0)
#define HFCMKGNCMCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E564680)
#define HFCMKGNCMCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E564900)
#define HFCMKGNCMCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5647C0)
#define HFCMKGNCMCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E564A20)
#define HFCMKGNCMCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E564640)
#define HFCMKGNCMCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E564CE0)
#define HFCMKGNCMCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E564C40)
#define HFCMKGNCMCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E564670)
#define HFCMKGNCMCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E564A90)
#define HFCMKGNCMCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E564AF0)

	class HFCMKGNCMCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CBHJJCBDJHA*>* BPJNCMFCKBJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HFCMKGNCMCA")->GetStaticField(0x33CE0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HFCMKGNCMCA")->GetStaticField(0x33CE8);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFCMKGNCMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCMKGNCMCA*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFCMKGNCMCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HFCMKGNCMCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFCMKGNCMCA* Clone()
		{
			return ((::HFCMKGNCMCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CBHJJCBDJHA*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CBHJJCBDJHA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFCMKGNCMCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFCMKGNCMCA*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFCMKGNCMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCMKGNCMCA*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFCMKGNCMCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
