#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNLACIGLJJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNLACIGLJJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B68A0)
#define GNLACIGLJJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B6B00)
#define GNLACIGLJJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B64A0)
#define GNLACIGLJJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B6410)
#define GNLACIGLJJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B63C0)
#define GNLACIGLJJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4B65D0)
#define GNLACIGLJJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B64E0)
#define GNLACIGLJJN_FEPDNOFICHP_OFFSET UNITYSDK_OFFSET(0x1E4B64D0)
#define GNLACIGLJJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B66C0)
#define GNLACIGLJJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4B6380)
#define GNLACIGLJJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B6960)
#define GNLACIGLJJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B6910)
#define GNLACIGLJJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4B63B0)
#define GNLACIGLJJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B67C0)
#define GNLACIGLJJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B6820)

inline static constexpr unsigned int GNLACIGLJJN_TypeDefinitionIndex = 34521;

	class GNLACIGLJJN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKDCBDDCEGL; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JFJNPMNCEGF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GNLACIGLJJN")->GetStaticField(0x21360);
		}

		static ::Google::Protobuf::MessageParser_1<::GNLACIGLJJN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNLACIGLJJN*>**)UnitySDK::FromName("", "GNLACIGLJJN")->GetStaticField(0x21368);
		}

		// static const ::System::Object FDAFMPNPIMA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNLACIGLJJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNLACIGLJJN*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLACIGLJJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNLACIGLJJN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNLACIGLJJN*>*(*)())((::PBYTE)hIl2Cpp + GNLACIGLJJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNLACIGLJJN* Clone()
		{
			return ((::GNLACIGLJJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FEPDNOFICHP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_FEPDNOFICHP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNLACIGLJJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNLACIGLJJN*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLACIGLJJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNLACIGLJJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNLACIGLJJN*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNLACIGLJJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
