#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJEECBNBGMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJEECBNBGMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C6830)
#define DJEECBNBGMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C6A50)
#define DJEECBNBGMN_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1E1C64D0)
#define DJEECBNBGMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C6480)
#define DJEECBNBGMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1C6450)
#define DJEECBNBGMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C6440)
#define DJEECBNBGMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1C65B0)
#define DJEECBNBGMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1C64E0)
#define DJEECBNBGMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C6720)
#define DJEECBNBGMN_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1E1C64C0)
#define DJEECBNBGMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1C6400)
#define DJEECBNBGMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C68F0)
#define DJEECBNBGMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C68C0)
#define DJEECBNBGMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1C6430)
#define DJEECBNBGMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C6750)
#define DJEECBNBGMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C67B0)

inline static constexpr unsigned int DJEECBNBGMN_TypeDefinitionIndex = 33423;

	class DJEECBNBGMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGCMNCBOEJG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DJEECBNBGMN")->GetStaticField(0x371C0);
		}

		// static const ::System::Object HDGKLMKGNND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEECBNBGMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJEECBNBGMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJEECBNBGMN*))((::PBYTE)hIl2Cpp + DJEECBNBGMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJEECBNBGMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DJEECBNBGMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEECBNBGMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJEECBNBGMN* Clone()
		{
			return ((::DJEECBNBGMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEECBNBGMN_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEECBNBGMN_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJEECBNBGMN_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJEECBNBGMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJEECBNBGMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJEECBNBGMN*))((::PBYTE)hIl2Cpp + DJEECBNBGMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEECBNBGMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEECBNBGMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJEECBNBGMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEECBNBGMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJEECBNBGMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJEECBNBGMN*))((::PBYTE)hIl2Cpp + DJEECBNBGMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJEECBNBGMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
