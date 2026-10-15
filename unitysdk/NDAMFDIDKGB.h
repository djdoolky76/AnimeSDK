#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDAMFDIDKGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NDAMFDIDKGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAB61B0)
#define NDAMFDIDKGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB63D0)
#define NDAMFDIDKGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAB5E00)
#define NDAMFDIDKGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAB5DD0)
#define NDAMFDIDKGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB5DC0)
#define NDAMFDIDKGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAB5F30)
#define NDAMFDIDKGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAB5E60)
#define NDAMFDIDKGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAB60A0)
#define NDAMFDIDKGB_HNBEEEALKNG_OFFSET UNITYSDK_OFFSET(0x1EAB5E50)
#define NDAMFDIDKGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAB5D80)
#define NDAMFDIDKGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAB6270)
#define NDAMFDIDKGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAB6240)
#define NDAMFDIDKGB_NFIDBDMCPFI_OFFSET UNITYSDK_OFFSET(0x1EAB5E40)
#define NDAMFDIDKGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAB5DB0)
#define NDAMFDIDKGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAB60D0)
#define NDAMFDIDKGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAB6130)

inline static constexpr unsigned int NDAMFDIDKGB_TypeDefinitionIndex = 29613;

	class NDAMFDIDKGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 INGNOGNLFBC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NDAMFDIDKGB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NDAMFDIDKGB*>**)UnitySDK::FromName("", "NDAMFDIDKGB")->GetStaticField(0x5F560);
		}

		// static const ::System::Object AGLBKMEBBPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDAMFDIDKGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDAMFDIDKGB*))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDAMFDIDKGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NDAMFDIDKGB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NDAMFDIDKGB*>*(*)())((::PBYTE)hIl2Cpp + NDAMFDIDKGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDAMFDIDKGB* Clone()
		{
			return ((::NDAMFDIDKGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_CLONE_OFFSET))(this);
		}

		::System::UInt32 NFIDBDMCPFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_NFIDBDMCPFI_OFFSET))(this);
		}

		::System::Void HNBEEEALKNG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_HNBEEEALKNG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDAMFDIDKGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDAMFDIDKGB*))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDAMFDIDKGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDAMFDIDKGB*))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDAMFDIDKGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
