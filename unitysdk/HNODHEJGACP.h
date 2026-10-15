#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGOMIHEFHPA;
class HNODHEJGACP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNODHEJGACP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5E1ED0)
#define HNODHEJGACP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E21B0)
#define HNODHEJGACP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5E1AB0)
#define HNODHEJGACP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E1A20)
#define HNODHEJGACP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E19E0)
#define HNODHEJGACP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5E1C30)
#define HNODHEJGACP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5E1AF0)
#define HNODHEJGACP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5E1D50)
#define HNODHEJGACP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5E19A0)
#define HNODHEJGACP_KBOFJGGFMBL_OFFSET UNITYSDK_OFFSET(0x1E5E1AE0)
#define HNODHEJGACP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5E2010)
#define HNODHEJGACP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5E1F70)
#define HNODHEJGACP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5E19D0)
#define HNODHEJGACP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5E1DC0)
#define HNODHEJGACP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5E1E20)

	class HNODHEJGACP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BGOMIHEFHPA*>* DLCNLJCKGNF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HNODHEJGACP")->GetStaticField(0x4C5A0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KCKOHOAEMMH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HNODHEJGACP")->GetStaticField(0x4C5A8);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HNODHEJGACP_JJGHOBBFNJD_OFFSET))();
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
