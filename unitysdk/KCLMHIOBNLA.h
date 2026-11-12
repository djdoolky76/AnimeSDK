#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCLMHIOBNLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCLMHIOBNLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB0FAD0)
#define KCLMHIOBNLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB0FD90)
#define KCLMHIOBNLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB0F650)
#define KCLMHIOBNLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB0F5C0)
#define KCLMHIOBNLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB0F570)
#define KCLMHIOBNLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB0F7D0)
#define KCLMHIOBNLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB0F6B0)
#define KCLMHIOBNLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB0F8C0)
#define KCLMHIOBNLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB0F500)
#define KCLMHIOBNLA_MBIPHENOPKN_OFFSET UNITYSDK_OFFSET(0x1FB0F6A0)
#define KCLMHIOBNLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB0FBC0)
#define KCLMHIOBNLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB0FB70)
#define KCLMHIOBNLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB0F560)
#define KCLMHIOBNLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB0F9C0)
#define KCLMHIOBNLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB0FA20)

inline static constexpr unsigned int KCLMHIOBNLA_TypeDefinitionIndex = 29963;

	class KCLMHIOBNLA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HLBGALBJJLF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BADELBENDHJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KCLMHIOBNLA")->GetStaticField(0x50210);
		}

		static ::Google::Protobuf::MessageParser_1<::KCLMHIOBNLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCLMHIOBNLA*>**)UnitySDK::FromName("", "KCLMHIOBNLA")->GetStaticField(0x50218);
		}

		// static const ::System::Object PFDHCKKFPOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCLMHIOBNLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCLMHIOBNLA*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCLMHIOBNLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCLMHIOBNLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCLMHIOBNLA*>*(*)())((::PBYTE)hIl2Cpp + KCLMHIOBNLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCLMHIOBNLA* Clone()
		{
			return ((::KCLMHIOBNLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MBIPHENOPKN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_MBIPHENOPKN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCLMHIOBNLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCLMHIOBNLA*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCLMHIOBNLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCLMHIOBNLA*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
