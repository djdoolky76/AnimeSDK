#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMEHKMDADJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KMEHKMDADJO_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1FDC4F40)
#define KMEHKMDADJO_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1FDC4F50)
#define KMEHKMDADJO_BJPIMFNJHAG_OFFSET UNITYSDK_OFFSET(0x1FDC4F20)
#define KMEHKMDADJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDC5280)
#define KMEHKMDADJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC5550)
#define KMEHKMDADJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDC4ED0)
#define KMEHKMDADJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDC4EA0)
#define KMEHKMDADJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC4E90)
#define KMEHKMDADJO_DNNKNKPGCPB_OFFSET UNITYSDK_OFFSET(0x1FDC4F30)
#define KMEHKMDADJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDC5040)
#define KMEHKMDADJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDC4F60)
#define KMEHKMDADJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDC5110)
#define KMEHKMDADJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDC4E50)
#define KMEHKMDADJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDC53D0)
#define KMEHKMDADJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDC5390)
#define KMEHKMDADJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDC4E80)
#define KMEHKMDADJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDC5140)
#define KMEHKMDADJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDC51A0)

inline static constexpr unsigned int KMEHKMDADJO_TypeDefinitionIndex = 26919;

	class KMEHKMDADJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGPNLMIIJCO; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KMEHKMDADJO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KMEHKMDADJO*>**)UnitySDK::FromName("", "KMEHKMDADJO")->GetStaticField(0x1D080);
		}

		// static const ::System::Object HCCMOEAHHJE; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHKMDADJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KMEHKMDADJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMEHKMDADJO*))((::PBYTE)hIl2Cpp + KMEHKMDADJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMEHKMDADJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KMEHKMDADJO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KMEHKMDADJO*>*(*)())((::PBYTE)hIl2Cpp + KMEHKMDADJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHKMDADJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KMEHKMDADJO* Clone()
		{
			return ((::KMEHKMDADJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHKMDADJO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BJPIMFNJHAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHKMDADJO_BJPIMFNJHAG_OFFSET))(this);
		}

		::System::Void DNNKNKPGCPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMEHKMDADJO_DNNKNKPGCPB_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHKMDADJO_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMEHKMDADJO_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMEHKMDADJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KMEHKMDADJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMEHKMDADJO*))((::PBYTE)hIl2Cpp + KMEHKMDADJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHKMDADJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHKMDADJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KMEHKMDADJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEHKMDADJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KMEHKMDADJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMEHKMDADJO*))((::PBYTE)hIl2Cpp + KMEHKMDADJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KMEHKMDADJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
