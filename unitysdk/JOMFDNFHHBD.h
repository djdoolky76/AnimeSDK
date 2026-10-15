#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMFDNFHHBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOMFDNFHHBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7AAE50)
#define JOMFDNFHHBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AB0F0)
#define JOMFDNFHHBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7AA960)
#define JOMFDNFHHBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7AA870)
#define JOMFDNFHHBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AA7E0)
#define JOMFDNFHHBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7AAA00)
#define JOMFDNFHHBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7AA9D0)
#define JOMFDNFHHBD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7AA9A0)
#define JOMFDNFHHBD_GBGCLLGFBJH_OFFSET UNITYSDK_OFFSET(0x1E7AA9B0)
#define JOMFDNFHHBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7AAB20)
#define JOMFDNFHHBD_IHCODKJBJKF_OFFSET UNITYSDK_OFFSET(0x1E7AA9C0)
#define JOMFDNFHHBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7AA7A0)
#define JOMFDNFHHBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7AAFD0)
#define JOMFDNFHHBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7AAF60)
#define JOMFDNFHHBD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7AA990)
#define JOMFDNFHHBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7AA7D0)
#define JOMFDNFHHBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7AACF0)
#define JOMFDNFHHBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7AAD50)

	class JOMFDNFHHBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DFEJKCAOFAK; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KBLOODMFGLP; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_LHKFIPDOCGC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JOMFDNFHHBD")->GetStaticField(0x6D3E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AGGLBPILBLH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JOMFDNFHHBD")->GetStaticField(0x6D3E8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JOMFDNFHHBD")->GetStaticField(0x6D3F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LDEFCLLIGPH; // 0x0
		// static const ::System::Object JGDHPIFOFBP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOMFDNFHHBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOMFDNFHHBD*))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMFDNFHHBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JOMFDNFHHBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOMFDNFHHBD* Clone()
		{
			return ((::JOMFDNFHHBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GBGCLLGFBJH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_GBGCLLGFBJH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHCODKJBJKF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_IHCODKJBJKF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOMFDNFHHBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOMFDNFHHBD*))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOMFDNFHHBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOMFDNFHHBD*))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOMFDNFHHBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
