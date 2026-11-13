#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNFPCAPDENH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNFPCAPDENH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FEE1420)
#define NNFPCAPDENH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEE14C0)
#define NNFPCAPDENH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FEE10C0)
#define NNFPCAPDENH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FEE1090)
#define NNFPCAPDENH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEE1080)
#define NNFPCAPDENH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FEE1220)
#define NNFPCAPDENH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FEE1130)
#define NNFPCAPDENH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FEE1380)
#define NNFPCAPDENH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FEE1010)
#define NNFPCAPDENH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FEE1470)
#define NNFPCAPDENH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FEE1440)
#define NNFPCAPDENH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FEE1070)
#define NNFPCAPDENH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEE13B0)
#define NNFPCAPDENH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FEE1410)

inline static constexpr unsigned int NNFPCAPDENH_TypeDefinitionIndex = 30299;

	class NNFPCAPDENH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NNFPCAPDENH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NNFPCAPDENH*>**)UnitySDK::FromName("", "NNFPCAPDENH")->GetStaticField(0x51600);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFPCAPDENH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNFPCAPDENH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNFPCAPDENH*))((::PBYTE)hIl2Cpp + NNFPCAPDENH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNFPCAPDENH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NNFPCAPDENH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NNFPCAPDENH*>*(*)())((::PBYTE)hIl2Cpp + NNFPCAPDENH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFPCAPDENH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNFPCAPDENH* Clone()
		{
			return ((::NNFPCAPDENH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFPCAPDENH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNFPCAPDENH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNFPCAPDENH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNFPCAPDENH*))((::PBYTE)hIl2Cpp + NNFPCAPDENH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFPCAPDENH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFPCAPDENH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNFPCAPDENH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFPCAPDENH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNFPCAPDENH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNFPCAPDENH*))((::PBYTE)hIl2Cpp + NNFPCAPDENH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNFPCAPDENH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
