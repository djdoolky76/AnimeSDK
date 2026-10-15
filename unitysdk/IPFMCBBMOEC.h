#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPFMCBBMOEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPFMCBBMOEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6DEB30)
#define IPFMCBBMOEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DEBD0)
#define IPFMCBBMOEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6DE820)
#define IPFMCBBMOEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6DE7F0)
#define IPFMCBBMOEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DE7E0)
#define IPFMCBBMOEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6DE930)
#define IPFMCBBMOEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6DE860)
#define IPFMCBBMOEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6DEA90)
#define IPFMCBBMOEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6DE7A0)
#define IPFMCBBMOEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6DEB80)
#define IPFMCBBMOEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6DEB50)
#define IPFMCBBMOEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6DE7D0)
#define IPFMCBBMOEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6DEAC0)
#define IPFMCBBMOEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6DEB20)

inline static constexpr unsigned int IPFMCBBMOEC_TypeDefinitionIndex = 26293;

	class IPFMCBBMOEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IPFMCBBMOEC")->GetStaticField(0x5AB10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPFMCBBMOEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPFMCBBMOEC*))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPFMCBBMOEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IPFMCBBMOEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPFMCBBMOEC* Clone()
		{
			return ((::IPFMCBBMOEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPFMCBBMOEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPFMCBBMOEC*))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPFMCBBMOEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPFMCBBMOEC*))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPFMCBBMOEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
