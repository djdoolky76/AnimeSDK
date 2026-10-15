#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPCINMGGCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPCINMGGCNI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C93E0)
#define LPCINMGGCNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C9640)
#define LPCINMGGCNI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C8FE0)
#define LPCINMGGCNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C8F50)
#define LPCINMGGCNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C8F00)
#define LPCINMGGCNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C9110)
#define LPCINMGGCNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C9020)
#define LPCINMGGCNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C9200)
#define LPCINMGGCNI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C8EC0)
#define LPCINMGGCNI_KBPKJPDLGAI_OFFSET UNITYSDK_OFFSET(0x1E9C9010)
#define LPCINMGGCNI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C94A0)
#define LPCINMGGCNI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C9450)
#define LPCINMGGCNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C8EF0)
#define LPCINMGGCNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C9300)
#define LPCINMGGCNI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C9360)

inline static constexpr unsigned int LPCINMGGCNI_TypeDefinitionIndex = 27475;

	class LPCINMGGCNI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KLNMPPPLEJP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LPCINMGGCNI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LPCINMGGCNI*>**)UnitySDK::FromName("", "LPCINMGGCNI")->GetStaticField(0x40F00);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FJJMBDCJCHJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LPCINMGGCNI")->GetStaticField(0x40F08);
		}

		// static const ::System::Object PGEPCGMONBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCINMGGCNI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPCINMGGCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPCINMGGCNI*))((::PBYTE)hIl2Cpp + LPCINMGGCNI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPCINMGGCNI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LPCINMGGCNI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LPCINMGGCNI*>*(*)())((::PBYTE)hIl2Cpp + LPCINMGGCNI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCINMGGCNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPCINMGGCNI* Clone()
		{
			return ((::LPCINMGGCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCINMGGCNI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KBPKJPDLGAI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCINMGGCNI_KBPKJPDLGAI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPCINMGGCNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPCINMGGCNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPCINMGGCNI*))((::PBYTE)hIl2Cpp + LPCINMGGCNI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCINMGGCNI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCINMGGCNI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPCINMGGCNI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCINMGGCNI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPCINMGGCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPCINMGGCNI*))((::PBYTE)hIl2Cpp + LPCINMGGCNI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPCINMGGCNI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
