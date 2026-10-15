#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGOMIHEFHPA;
class HNODHEJGACP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNODHEJGACP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B48B0)
#define HNODHEJGACP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4B90)
#define HNODHEJGACP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B4490)
#define HNODHEJGACP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B4400)
#define HNODHEJGACP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B43C0)
#define HNODHEJGACP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B4610)
#define HNODHEJGACP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B44D0)
#define HNODHEJGACP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B4730)
#define HNODHEJGACP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B4380)
#define HNODHEJGACP_KBOFJGGFMBL_OFFSET UNITYSDK_OFFSET(0x1E5B44C0)
#define HNODHEJGACP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B49F0)
#define HNODHEJGACP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B4950)
#define HNODHEJGACP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B43B0)
#define HNODHEJGACP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B47A0)
#define HNODHEJGACP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B4800)

inline static constexpr unsigned int HNODHEJGACP_TypeDefinitionIndex = 29795;

	class HNODHEJGACP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BGOMIHEFHPA*>* DLCNLJCKGNF; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::BGOMIHEFHPA*>** StaticGet_KCKOHOAEMMH()
		{
			return (::Google::Protobuf::FieldCodec_1<::BGOMIHEFHPA*>**)UnitySDK::FromName("", "HNODHEJGACP")->GetStaticField(0x3BF00);
		}

		static ::Google::Protobuf::MessageParser_1<::HNODHEJGACP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HNODHEJGACP*>**)UnitySDK::FromName("", "HNODHEJGACP")->GetStaticField(0x3BF08);
		}

		// static const ::System::Object CMKNNEPPPAJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNODHEJGACP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNODHEJGACP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNODHEJGACP*))((::PBYTE)hIl2Cpp + HNODHEJGACP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNODHEJGACP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HNODHEJGACP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HNODHEJGACP*>*(*)())((::PBYTE)hIl2Cpp + HNODHEJGACP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNODHEJGACP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNODHEJGACP* Clone()
		{
			return ((::HNODHEJGACP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNODHEJGACP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BGOMIHEFHPA*>* KBOFJGGFMBL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BGOMIHEFHPA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNODHEJGACP_KBOFJGGFMBL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNODHEJGACP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNODHEJGACP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNODHEJGACP*))((::PBYTE)hIl2Cpp + HNODHEJGACP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNODHEJGACP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNODHEJGACP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNODHEJGACP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNODHEJGACP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNODHEJGACP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNODHEJGACP*))((::PBYTE)hIl2Cpp + HNODHEJGACP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNODHEJGACP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
