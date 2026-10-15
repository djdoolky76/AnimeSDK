#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKLKCKNBHCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKLKCKNBHCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E741F50)
#define JKLKCKNBHCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E741FF0)
#define JKLKCKNBHCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E741BF0)
#define JKLKCKNBHCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E741BC0)
#define JKLKCKNBHCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E741BB0)
#define JKLKCKNBHCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E741D50)
#define JKLKCKNBHCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E741C60)
#define JKLKCKNBHCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E741EB0)
#define JKLKCKNBHCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E741B40)
#define JKLKCKNBHCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E741FA0)
#define JKLKCKNBHCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E741F70)
#define JKLKCKNBHCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E741BA0)
#define JKLKCKNBHCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E741EE0)
#define JKLKCKNBHCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E741F40)

inline static constexpr unsigned int JKLKCKNBHCI_TypeDefinitionIndex = 27184;

	class JKLKCKNBHCI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JKLKCKNBHCI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JKLKCKNBHCI*>**)UnitySDK::FromName("", "JKLKCKNBHCI")->GetStaticField(0x63910);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKLKCKNBHCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKLKCKNBHCI*))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKLKCKNBHCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JKLKCKNBHCI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JKLKCKNBHCI*>*(*)())((::PBYTE)hIl2Cpp + JKLKCKNBHCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKLKCKNBHCI* Clone()
		{
			return ((::JKLKCKNBHCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKLKCKNBHCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKLKCKNBHCI*))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKLKCKNBHCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKLKCKNBHCI*))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKLKCKNBHCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
