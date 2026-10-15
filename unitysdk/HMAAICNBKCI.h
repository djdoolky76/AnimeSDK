#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMAAICNBKCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMAAICNBKCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C8B40)
#define HMAAICNBKCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8D90)
#define HMAAICNBKCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C87B0)
#define HMAAICNBKCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C8740)
#define HMAAICNBKCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8710)
#define HMAAICNBKCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C8930)
#define HMAAICNBKCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C8840)
#define HMAAICNBKCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C8A20)
#define HMAAICNBKCI_HBALKCHBGEL_OFFSET UNITYSDK_OFFSET(0x1E5C8830)
#define HMAAICNBKCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C86D0)
#define HMAAICNBKCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C8C00)
#define HMAAICNBKCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C8BB0)
#define HMAAICNBKCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8700)
#define HMAAICNBKCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C8A60)
#define HMAAICNBKCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C8AC0)

inline static constexpr unsigned int HMAAICNBKCI_TypeDefinitionIndex = 33014;

	class HMAAICNBKCI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>* EGHJPONMNMF; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HMAAICNBKCI")->GetStaticField(0x491A0);
		}

		static ::System::Object** StaticGet_BNNOMPJCLJB()
		{
			return (::System::Object**)UnitySDK::FromName("", "HMAAICNBKCI")->GetStaticField(0x491A8);
		}

		// static const ::System::Object BDNLOFFEBLF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAAICNBKCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMAAICNBKCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMAAICNBKCI*))((::PBYTE)hIl2Cpp + HMAAICNBKCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMAAICNBKCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HMAAICNBKCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAAICNBKCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMAAICNBKCI* Clone()
		{
			return ((::HMAAICNBKCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAAICNBKCI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>* HBALKCHBGEL()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAAICNBKCI_HBALKCHBGEL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMAAICNBKCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMAAICNBKCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMAAICNBKCI*))((::PBYTE)hIl2Cpp + HMAAICNBKCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAAICNBKCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAAICNBKCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMAAICNBKCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAAICNBKCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMAAICNBKCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMAAICNBKCI*))((::PBYTE)hIl2Cpp + HMAAICNBKCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMAAICNBKCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
