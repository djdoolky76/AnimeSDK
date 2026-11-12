#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCCAABPFBLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCCAABPFBLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0ACCA0)
#define OCCAABPFBLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0ACFF0)
#define OCCAABPFBLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0AC810)
#define OCCAABPFBLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0AC780)
#define OCCAABPFBLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0AC730)
#define OCCAABPFBLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0AC970)
#define OCCAABPFBLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0AC870)
#define OCCAABPFBLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0ACA60)
#define OCCAABPFBLF_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1F0AC850)
#define OCCAABPFBLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0AC6F0)
#define OCCAABPFBLF_LDNBGKBFJGK_OFFSET UNITYSDK_OFFSET(0x1F0AC860)
#define OCCAABPFBLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0ACDD0)
#define OCCAABPFBLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0ACD80)
#define OCCAABPFBLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0AC720)
#define OCCAABPFBLF_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1F0AC840)
#define OCCAABPFBLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0ACB60)
#define OCCAABPFBLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0ACBC0)

inline static constexpr unsigned int OCCAABPFBLF_TypeDefinitionIndex = 26622;

	class OCCAABPFBLF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OEHIIGKKAFD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CMCCOIIMHMC; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EHGGHPPMPNP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OCCAABPFBLF")->GetStaticField(0xC150);
		}

		static ::Google::Protobuf::MessageParser_1<::OCCAABPFBLF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OCCAABPFBLF*>**)UnitySDK::FromName("", "OCCAABPFBLF")->GetStaticField(0xC158);
		}

		// static const ::System::Object NLAPNDADCIN; // 0x0
		// static const ::System::Object JBFEFJHDLIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCAABPFBLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCCAABPFBLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCCAABPFBLF*))((::PBYTE)hIl2Cpp + OCCAABPFBLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCCAABPFBLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OCCAABPFBLF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OCCAABPFBLF*>*(*)())((::PBYTE)hIl2Cpp + OCCAABPFBLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCAABPFBLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCCAABPFBLF* Clone()
		{
			return ((::OCCAABPFBLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCAABPFBLF_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCAABPFBLF_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCCAABPFBLF_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LDNBGKBFJGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCAABPFBLF_LDNBGKBFJGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCCAABPFBLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCCAABPFBLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCCAABPFBLF*))((::PBYTE)hIl2Cpp + OCCAABPFBLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCAABPFBLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCAABPFBLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCCAABPFBLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCAABPFBLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCCAABPFBLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCCAABPFBLF*))((::PBYTE)hIl2Cpp + OCCAABPFBLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCCAABPFBLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
