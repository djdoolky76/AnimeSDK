#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICABANFEIHJ;
class LGFLGGDMAGD;
class MOOGIHHBHFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICABANFEIHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F938720)
#define ICABANFEIHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F938B20)
#define ICABANFEIHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F938320)
#define ICABANFEIHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F938220)
#define ICABANFEIHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9381B0)
#define ICABANFEIHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9383F0)
#define ICABANFEIHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F938390)
#define ICABANFEIHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F938540)
#define ICABANFEIHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F938140)
#define ICABANFEIHJ_JPHOFBDMKLA_OFFSET UNITYSDK_OFFSET(0x1F938370)
#define ICABANFEIHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9388F0)
#define ICABANFEIHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F938800)
#define ICABANFEIHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9381A0)
#define ICABANFEIHJ_PGAJMPBILNH_OFFSET UNITYSDK_OFFSET(0x1F938380)
#define ICABANFEIHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9385D0)
#define ICABANFEIHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F938630)

inline static constexpr unsigned int ICABANFEIHJ_TypeDefinitionIndex = 28605;

	class ICABANFEIHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LGFLGGDMAGD*>* HHCIMMGEEED; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::MOOGIHHBHFG*>* JBBPEIICNOE; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::LGFLGGDMAGD*>** StaticGet_AOGCGGOGPJL()
		{
			return (::Google::Protobuf::FieldCodec_1<::LGFLGGDMAGD*>**)UnitySDK::FromName("", "ICABANFEIHJ")->GetStaticField(0x4A0D0);
		}

		static ::Google::Protobuf::MessageParser_1<::ICABANFEIHJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ICABANFEIHJ*>**)UnitySDK::FromName("", "ICABANFEIHJ")->GetStaticField(0x4A0D8);
		}

		static ::Google::Protobuf::FieldCodec_1<::MOOGIHHBHFG*>** StaticGet_DOJJNGCKKGJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::MOOGIHHBHFG*>**)UnitySDK::FromName("", "ICABANFEIHJ")->GetStaticField(0x4A0E0);
		}

		// static const ::System::Object NCDPLCAGKBB; // 0x0
		// static const ::System::Object IPOBCAICGGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICABANFEIHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICABANFEIHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICABANFEIHJ*))((::PBYTE)hIl2Cpp + ICABANFEIHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICABANFEIHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ICABANFEIHJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ICABANFEIHJ*>*(*)())((::PBYTE)hIl2Cpp + ICABANFEIHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICABANFEIHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICABANFEIHJ* Clone()
		{
			return ((::ICABANFEIHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICABANFEIHJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MOOGIHHBHFG*>* JPHOFBDMKLA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MOOGIHHBHFG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICABANFEIHJ_JPHOFBDMKLA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LGFLGGDMAGD*>* PGAJMPBILNH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LGFLGGDMAGD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICABANFEIHJ_PGAJMPBILNH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICABANFEIHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICABANFEIHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICABANFEIHJ*))((::PBYTE)hIl2Cpp + ICABANFEIHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICABANFEIHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICABANFEIHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICABANFEIHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICABANFEIHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICABANFEIHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICABANFEIHJ*))((::PBYTE)hIl2Cpp + ICABANFEIHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICABANFEIHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
