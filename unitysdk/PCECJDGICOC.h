#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INBMHMPKACI;
class PCECJDGICOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCECJDGICOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DED9130)
#define PCECJDGICOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED9430)
#define PCECJDGICOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DED8D10)
#define PCECJDGICOC_CMBJPMLOBOE_OFFSET UNITYSDK_OFFSET(0x1DED8D40)
#define PCECJDGICOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DED8C80)
#define PCECJDGICOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED8C40)
#define PCECJDGICOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DED8E90)
#define PCECJDGICOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DED8D50)
#define PCECJDGICOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DED8FB0)
#define PCECJDGICOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DED8C00)
#define PCECJDGICOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DED9270)
#define PCECJDGICOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DED91D0)
#define PCECJDGICOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DED8C30)
#define PCECJDGICOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DED9020)
#define PCECJDGICOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DED9080)

inline static constexpr unsigned int PCECJDGICOC_TypeDefinitionIndex = 30577;

	class PCECJDGICOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::INBMHMPKACI*>* ELFKGPIMMCO; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::INBMHMPKACI*>** StaticGet_JPGOOEBDHCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::INBMHMPKACI*>**)UnitySDK::FromName("", "PCECJDGICOC")->GetStaticField(0x2E540);
		}

		static ::Google::Protobuf::MessageParser_1<::PCECJDGICOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PCECJDGICOC*>**)UnitySDK::FromName("", "PCECJDGICOC")->GetStaticField(0x2E548);
		}

		// static const ::System::Object BIIMBGOFABJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCECJDGICOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCECJDGICOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCECJDGICOC*))((::PBYTE)hIl2Cpp + PCECJDGICOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCECJDGICOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PCECJDGICOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PCECJDGICOC*>*(*)())((::PBYTE)hIl2Cpp + PCECJDGICOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCECJDGICOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCECJDGICOC* Clone()
		{
			return ((::PCECJDGICOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCECJDGICOC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::INBMHMPKACI*>* CMBJPMLOBOE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::INBMHMPKACI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCECJDGICOC_CMBJPMLOBOE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCECJDGICOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCECJDGICOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCECJDGICOC*))((::PBYTE)hIl2Cpp + PCECJDGICOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCECJDGICOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCECJDGICOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCECJDGICOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCECJDGICOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCECJDGICOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCECJDGICOC*))((::PBYTE)hIl2Cpp + PCECJDGICOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCECJDGICOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
