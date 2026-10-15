#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBBJNPGLLHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBBJNPGLLHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E061CB0)
#define CBBJNPGLLHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E061ED0)
#define CBBJNPGLLHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E061780)
#define CBBJNPGLLHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E061690)
#define CBBJNPGLLHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E061600)
#define CBBJNPGLLHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0618E0)
#define CBBJNPGLLHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0617D0)
#define CBBJNPGLLHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0619F0)
#define CBBJNPGLLHM_HCMFLNFBDHK_OFFSET UNITYSDK_OFFSET(0x1E0617B0)
#define CBBJNPGLLHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0615C0)
#define CBBJNPGLLHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E061DA0)
#define CBBJNPGLLHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E061D40)
#define CBBJNPGLLHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0615F0)
#define CBBJNPGLLHM_PHLLAAANDFD_OFFSET UNITYSDK_OFFSET(0x1E0617C0)
#define CBBJNPGLLHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E061BB0)
#define CBBJNPGLLHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E061C10)

	class CBBJNPGLLHM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NMFCCHGCHBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNEBJIMGNNE; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_NFAJBPBCLIC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CBBJNPGLLHM")->GetStaticField(0xADE0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EHDCAEMKCHK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CBBJNPGLLHM")->GetStaticField(0xADE8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CBBJNPGLLHM")->GetStaticField(0xADF0);
		}

		// static const ::System::Object FEFCGHKNOGH; // 0x0
		// static const ::System::Object KLFCLAICFGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBBJNPGLLHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBBJNPGLLHM*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBBJNPGLLHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CBBJNPGLLHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBBJNPGLLHM* Clone()
		{
			return ((::CBBJNPGLLHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HCMFLNFBDHK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_HCMFLNFBDHK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PHLLAAANDFD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_PHLLAAANDFD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBBJNPGLLHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBBJNPGLLHM*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBBJNPGLLHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBBJNPGLLHM*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBBJNPGLLHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
