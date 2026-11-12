#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFKBDMOJBCP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFKBDMOJBCP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0EDA80)
#define OFKBDMOJBCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0EDB20)
#define OFKBDMOJBCP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0ED770)
#define OFKBDMOJBCP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0ED740)
#define OFKBDMOJBCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0ED730)
#define OFKBDMOJBCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0ED880)
#define OFKBDMOJBCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0ED7B0)
#define OFKBDMOJBCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0ED9E0)
#define OFKBDMOJBCP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0ED6F0)
#define OFKBDMOJBCP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0EDAD0)
#define OFKBDMOJBCP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0EDAA0)
#define OFKBDMOJBCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0ED720)
#define OFKBDMOJBCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0EDA10)
#define OFKBDMOJBCP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0EDA70)

inline static constexpr unsigned int OFKBDMOJBCP_TypeDefinitionIndex = 32427;

	class OFKBDMOJBCP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OFKBDMOJBCP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFKBDMOJBCP*>**)UnitySDK::FromName("", "OFKBDMOJBCP")->GetStaticField(0x12B40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFKBDMOJBCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKBDMOJBCP*))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFKBDMOJBCP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFKBDMOJBCP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFKBDMOJBCP*>*(*)())((::PBYTE)hIl2Cpp + OFKBDMOJBCP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFKBDMOJBCP* Clone()
		{
			return ((::OFKBDMOJBCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFKBDMOJBCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFKBDMOJBCP*))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFKBDMOJBCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKBDMOJBCP*))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFKBDMOJBCP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
