#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLBMKOILIDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLBMKOILIDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF42940)
#define LLBMKOILIDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF42BA0)
#define LLBMKOILIDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF42540)
#define LLBMKOILIDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF424B0)
#define LLBMKOILIDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF42460)
#define LLBMKOILIDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF42670)
#define LLBMKOILIDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF42580)
#define LLBMKOILIDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF42760)
#define LLBMKOILIDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF42420)
#define LLBMKOILIDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF42A00)
#define LLBMKOILIDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF429B0)
#define LLBMKOILIDN_NOKJDPPHCHJ_OFFSET UNITYSDK_OFFSET(0x1FF42570)
#define LLBMKOILIDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF42450)
#define LLBMKOILIDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF42860)
#define LLBMKOILIDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF428C0)

inline static constexpr unsigned int LLBMKOILIDN_TypeDefinitionIndex = 30487;

	class LLBMKOILIDN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MAKIAPNJHEG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BJBAGLMCGCL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LLBMKOILIDN")->GetStaticField(0x3FE40);
		}

		static ::Google::Protobuf::MessageParser_1<::LLBMKOILIDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLBMKOILIDN*>**)UnitySDK::FromName("", "LLBMKOILIDN")->GetStaticField(0x3FE48);
		}

		// static const ::System::Object FPKJEDHNPDN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBMKOILIDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLBMKOILIDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBMKOILIDN*))((::PBYTE)hIl2Cpp + LLBMKOILIDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLBMKOILIDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LLBMKOILIDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LLBMKOILIDN*>*(*)())((::PBYTE)hIl2Cpp + LLBMKOILIDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBMKOILIDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLBMKOILIDN* Clone()
		{
			return ((::LLBMKOILIDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBMKOILIDN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NOKJDPPHCHJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBMKOILIDN_NOKJDPPHCHJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLBMKOILIDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLBMKOILIDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLBMKOILIDN*))((::PBYTE)hIl2Cpp + LLBMKOILIDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBMKOILIDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBMKOILIDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLBMKOILIDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBMKOILIDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLBMKOILIDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBMKOILIDN*))((::PBYTE)hIl2Cpp + LLBMKOILIDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLBMKOILIDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
