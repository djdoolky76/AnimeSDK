#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDGNEKJDCMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDGNEKJDCMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F9491D0)
#define IDGNEKJDCMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F949490)
#define IDGNEKJDCMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F948D50)
#define IDGNEKJDCMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F948CC0)
#define IDGNEKJDCMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F948C70)
#define IDGNEKJDCMJ_EFLLKGBEKLI_OFFSET UNITYSDK_OFFSET(0x1F948DA0)
#define IDGNEKJDCMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F948ED0)
#define IDGNEKJDCMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F948DB0)
#define IDGNEKJDCMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F948FC0)
#define IDGNEKJDCMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F948C00)
#define IDGNEKJDCMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9492C0)
#define IDGNEKJDCMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F949270)
#define IDGNEKJDCMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F948C60)
#define IDGNEKJDCMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9490C0)
#define IDGNEKJDCMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F949120)

inline static constexpr unsigned int IDGNEKJDCMJ_TypeDefinitionIndex = 29995;

	class IDGNEKJDCMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JNDPGLKJMAD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IDGNEKJDCMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDGNEKJDCMJ*>**)UnitySDK::FromName("", "IDGNEKJDCMJ")->GetStaticField(0x4D350);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DPIKJCKAIHH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IDGNEKJDCMJ")->GetStaticField(0x4D358);
		}

		// static const ::System::Object GIGGAOCFFFB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDGNEKJDCMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDGNEKJDCMJ*))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDGNEKJDCMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDGNEKJDCMJ*>*(*)())((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDGNEKJDCMJ* Clone()
		{
			return ((::IDGNEKJDCMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EFLLKGBEKLI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_EFLLKGBEKLI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDGNEKJDCMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDGNEKJDCMJ*))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDGNEKJDCMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDGNEKJDCMJ*))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
