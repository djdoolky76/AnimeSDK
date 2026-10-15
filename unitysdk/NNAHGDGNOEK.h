#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNAHGDGNOEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNAHGDGNOEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB50AE0)
#define NNAHGDGNOEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB50D40)
#define NNAHGDGNOEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB506E0)
#define NNAHGDGNOEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB50650)
#define NNAHGDGNOEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB50600)
#define NNAHGDGNOEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB50810)
#define NNAHGDGNOEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB50720)
#define NNAHGDGNOEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB50900)
#define NNAHGDGNOEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB505C0)
#define NNAHGDGNOEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB50BA0)
#define NNAHGDGNOEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB50B50)
#define NNAHGDGNOEK_OBBJCJCLBDF_OFFSET UNITYSDK_OFFSET(0x1EB50710)
#define NNAHGDGNOEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB505F0)
#define NNAHGDGNOEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB50A00)
#define NNAHGDGNOEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB50A60)

inline static constexpr unsigned int NNAHGDGNOEK_TypeDefinitionIndex = 34927;

	class NNAHGDGNOEK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NPKDCDOLFGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NNAHGDGNOEK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NNAHGDGNOEK*>**)UnitySDK::FromName("", "NNAHGDGNOEK")->GetStaticField(0x1BA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EPBCHHIHPID()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NNAHGDGNOEK")->GetStaticField(0x1BA8);
		}

		// static const ::System::Object EIPPAOMOJAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNAHGDGNOEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNAHGDGNOEK*))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNAHGDGNOEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NNAHGDGNOEK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NNAHGDGNOEK*>*(*)())((::PBYTE)hIl2Cpp + NNAHGDGNOEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNAHGDGNOEK* Clone()
		{
			return ((::NNAHGDGNOEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OBBJCJCLBDF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_OBBJCJCLBDF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNAHGDGNOEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNAHGDGNOEK*))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNAHGDGNOEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNAHGDGNOEK*))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNAHGDGNOEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
