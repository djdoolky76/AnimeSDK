#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLNABFMHFFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLNABFMHFFH_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E0CF890)
#define CLNABFMHFFH_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E0CF8A0)
#define CLNABFMHFFH_BHCKDIDGBCP_OFFSET UNITYSDK_OFFSET(0x1E0CF8B0)
#define CLNABFMHFFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0CFC60)
#define CLNABFMHFFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CFEC0)
#define CLNABFMHFFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0CF810)
#define CLNABFMHFFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0CF7D0)
#define CLNABFMHFFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CF7C0)
#define CLNABFMHFFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0CF9E0)
#define CLNABFMHFFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0CF8D0)
#define CLNABFMHFFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0CFAC0)
#define CLNABFMHFFH_GGLAFNNHBOE_OFFSET UNITYSDK_OFFSET(0x1E0CF8C0)
#define CLNABFMHFFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0CF750)
#define CLNABFMHFFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0CFD40)
#define CLNABFMHFFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0CFD00)
#define CLNABFMHFFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0CF7B0)
#define CLNABFMHFFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0CFAF0)
#define CLNABFMHFFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0CFB50)

inline static constexpr unsigned int CLNABFMHFFH_TypeDefinitionIndex = 28267;

	class CLNABFMHFFH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::Boolean BPBMDAPEHJO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CLNABFMHFFH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLNABFMHFFH*>**)UnitySDK::FromName("", "CLNABFMHFFH")->GetStaticField(0x1B9B0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object BNCFMIJNBBM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNABFMHFFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLNABFMHFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLNABFMHFFH*))((::PBYTE)hIl2Cpp + CLNABFMHFFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLNABFMHFFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLNABFMHFFH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLNABFMHFFH*>*(*)())((::PBYTE)hIl2Cpp + CLNABFMHFFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNABFMHFFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLNABFMHFFH* Clone()
		{
			return ((::CLNABFMHFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNABFMHFFH_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNABFMHFFH_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLNABFMHFFH_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean BHCKDIDGBCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNABFMHFFH_BHCKDIDGBCP_OFFSET))(this);
		}

		::System::Void GGLAFNNHBOE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLNABFMHFFH_GGLAFNNHBOE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLNABFMHFFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLNABFMHFFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLNABFMHFFH*))((::PBYTE)hIl2Cpp + CLNABFMHFFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNABFMHFFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNABFMHFFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLNABFMHFFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNABFMHFFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLNABFMHFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLNABFMHFFH*))((::PBYTE)hIl2Cpp + CLNABFMHFFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLNABFMHFFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
