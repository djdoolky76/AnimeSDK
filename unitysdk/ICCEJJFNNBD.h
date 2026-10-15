#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCEJJFNNBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICCEJJFNNBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E61F9B0)
#define ICCEJJFNNBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61FBD0)
#define ICCEJJFNNBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E61F600)
#define ICCEJJFNNBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E61F5D0)
#define ICCEJJFNNBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61F5C0)
#define ICCEJJFNNBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E61F730)
#define ICCEJJFNNBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E61F660)
#define ICCEJJFNNBD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E61F650)
#define ICCEJJFNNBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E61F8A0)
#define ICCEJJFNNBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E61F580)
#define ICCEJJFNNBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E61FA70)
#define ICCEJJFNNBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E61FA40)
#define ICCEJJFNNBD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E61F640)
#define ICCEJJFNNBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E61F5B0)
#define ICCEJJFNNBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E61F8D0)
#define ICCEJJFNNBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E61F930)

inline static constexpr unsigned int ICCEJJFNNBD_TypeDefinitionIndex = 30285;

	class ICCEJJFNNBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ICCEJJFNNBD")->GetStaticField(0x42940);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICCEJJFNNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICCEJJFNNBD*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICCEJJFNNBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ICCEJJFNNBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICCEJJFNNBD* Clone()
		{
			return ((::ICCEJJFNNBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICCEJJFNNBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICCEJJFNNBD*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICCEJJFNNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICCEJJFNNBD*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICCEJJFNNBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
