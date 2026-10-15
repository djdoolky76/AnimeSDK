#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHAINOHGKCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHAINOHGKCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE5CF60)
#define OHAINOHGKCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE5D180)
#define OHAINOHGKCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE5CB50)
#define OHAINOHGKCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE5CB20)
#define OHAINOHGKCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5CB10)
#define OHAINOHGKCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE5CCE0)
#define OHAINOHGKCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE5CBE0)
#define OHAINOHGKCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE5CE50)
#define OHAINOHGKCM_HNBEEEALKNG_OFFSET UNITYSDK_OFFSET(0x1DE5CBD0)
#define OHAINOHGKCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE5CAA0)
#define OHAINOHGKCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE5D020)
#define OHAINOHGKCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE5CFF0)
#define OHAINOHGKCM_NFIDBDMCPFI_OFFSET UNITYSDK_OFFSET(0x1DE5CBC0)
#define OHAINOHGKCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE5CB00)
#define OHAINOHGKCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE5CE80)
#define OHAINOHGKCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE5CEE0)

inline static constexpr unsigned int OHAINOHGKCM_TypeDefinitionIndex = 29513;

	class OHAINOHGKCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 INGNOGNLFBC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OHAINOHGKCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHAINOHGKCM*>**)UnitySDK::FromName("", "OHAINOHGKCM")->GetStaticField(0x1A280);
		}

		// static const ::System::Object AGLBKMEBBPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAINOHGKCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHAINOHGKCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHAINOHGKCM*))((::PBYTE)hIl2Cpp + OHAINOHGKCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHAINOHGKCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHAINOHGKCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHAINOHGKCM*>*(*)())((::PBYTE)hIl2Cpp + OHAINOHGKCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAINOHGKCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHAINOHGKCM* Clone()
		{
			return ((::OHAINOHGKCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAINOHGKCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 NFIDBDMCPFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAINOHGKCM_NFIDBDMCPFI_OFFSET))(this);
		}

		::System::Void HNBEEEALKNG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHAINOHGKCM_HNBEEEALKNG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHAINOHGKCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHAINOHGKCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHAINOHGKCM*))((::PBYTE)hIl2Cpp + OHAINOHGKCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAINOHGKCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAINOHGKCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHAINOHGKCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAINOHGKCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHAINOHGKCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHAINOHGKCM*))((::PBYTE)hIl2Cpp + OHAINOHGKCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHAINOHGKCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
