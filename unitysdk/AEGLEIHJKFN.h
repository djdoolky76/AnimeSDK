#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEGLEIHJKFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AEGLEIHJKFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDBF470)
#define AEGLEIHJKFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBF510)
#define AEGLEIHJKFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDBF160)
#define AEGLEIHJKFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDBF130)
#define AEGLEIHJKFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBF120)
#define AEGLEIHJKFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDBF270)
#define AEGLEIHJKFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDBF1A0)
#define AEGLEIHJKFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDBF3D0)
#define AEGLEIHJKFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDBF0E0)
#define AEGLEIHJKFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDBF4C0)
#define AEGLEIHJKFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDBF490)
#define AEGLEIHJKFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDBF110)
#define AEGLEIHJKFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDBF400)
#define AEGLEIHJKFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDBF460)

inline static constexpr unsigned int AEGLEIHJKFN_TypeDefinitionIndex = 28479;

	class AEGLEIHJKFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AEGLEIHJKFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AEGLEIHJKFN*>**)UnitySDK::FromName("", "AEGLEIHJKFN")->GetStaticField(0x33F50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEGLEIHJKFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEGLEIHJKFN*))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEGLEIHJKFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AEGLEIHJKFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AEGLEIHJKFN*>*(*)())((::PBYTE)hIl2Cpp + AEGLEIHJKFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEGLEIHJKFN* Clone()
		{
			return ((::AEGLEIHJKFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEGLEIHJKFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEGLEIHJKFN*))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEGLEIHJKFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEGLEIHJKFN*))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEGLEIHJKFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
