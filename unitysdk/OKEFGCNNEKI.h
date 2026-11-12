#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDMEFGANLKI;
class OKEFGCNNEKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKEFGCNNEKI_ANPHJAOBOFG_OFFSET UNITYSDK_OFFSET(0x1F13BB70)
#define OKEFGCNNEKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F13C130)
#define OKEFGCNNEKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F13C460)
#define OKEFGCNNEKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F13BB20)
#define OKEFGCNNEKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F13BA50)
#define OKEFGCNNEKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13BA00)
#define OKEFGCNNEKI_EPKDGJOMEFL_OFFSET UNITYSDK_OFFSET(0x1F13BB60)
#define OKEFGCNNEKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F13BD20)
#define OKEFGCNNEKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F13BB80)
#define OKEFGCNNEKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F13BEC0)
#define OKEFGCNNEKI_HBGGIJICLGF_OFFSET UNITYSDK_OFFSET(0x1F13BB50)
#define OKEFGCNNEKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F13B9C0)
#define OKEFGCNNEKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F13C290)
#define OKEFGCNNEKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F13C1D0)
#define OKEFGCNNEKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F13B9F0)
#define OKEFGCNNEKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F13BFF0)
#define OKEFGCNNEKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F13C050)

inline static constexpr unsigned int OKEFGCNNEKI_TypeDefinitionIndex = 36049;

	class OKEFGCNNEKI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MOCFIAEMBFL; // 0x10
		::KDMEFGANLKI* GEHFEKFEIGM; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OKEFGCNNEKI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKEFGCNNEKI*>**)UnitySDK::FromName("", "OKEFGCNNEKI")->GetStaticField(0x1C990);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HPMBHPJILKK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OKEFGCNNEKI")->GetStaticField(0x1C998);
		}

		// static const ::System::Object DDMCEKKKDHB; // 0x0
		// static const ::System::Object IFLCPHEJEFL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKEFGCNNEKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKEFGCNNEKI*))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKEFGCNNEKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKEFGCNNEKI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKEFGCNNEKI*>*(*)())((::PBYTE)hIl2Cpp + OKEFGCNNEKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKEFGCNNEKI* Clone()
		{
			return ((::OKEFGCNNEKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HBGGIJICLGF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_HBGGIJICLGF_OFFSET))(this);
		}

		::KDMEFGANLKI* EPKDGJOMEFL()
		{
			return ((::KDMEFGANLKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_EPKDGJOMEFL_OFFSET))(this);
		}

		::System::Void ANPHJAOBOFG(::KDMEFGANLKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_ANPHJAOBOFG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKEFGCNNEKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKEFGCNNEKI*))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKEFGCNNEKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKEFGCNNEKI*))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKEFGCNNEKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
