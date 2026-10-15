#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGBPIBNACKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGBPIBNACKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E737560)
#define JGBPIBNACKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7377F0)
#define JGBPIBNACKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E737180)
#define JGBPIBNACKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E737150)
#define JGBPIBNACKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E737140)
#define JGBPIBNACKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7372C0)
#define JGBPIBNACKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7371F0)
#define JGBPIBNACKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E737430)
#define JGBPIBNACKP_HOHPBLCHOIJ_OFFSET UNITYSDK_OFFSET(0x1E7371E0)
#define JGBPIBNACKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E737100)
#define JGBPIBNACKP_JOKAECACIII_OFFSET UNITYSDK_OFFSET(0x1E7371D0)
#define JGBPIBNACKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E737690)
#define JGBPIBNACKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E737650)
#define JGBPIBNACKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E737130)
#define JGBPIBNACKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E737470)
#define JGBPIBNACKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7374D0)

	class JGBPIBNACKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 FEIPIJJOCCL; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JGBPIBNACKP")->GetStaticField(0x606B0);
		}

		// static const ::System::Object NMPIBFFMFEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPIBNACKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGBPIBNACKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGBPIBNACKP*))((::PBYTE)hIl2Cpp + JGBPIBNACKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGBPIBNACKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JGBPIBNACKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPIBNACKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGBPIBNACKP* Clone()
		{
			return ((::JGBPIBNACKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPIBNACKP_CLONE_OFFSET))(this);
		}

		::System::UInt64 JOKAECACIII()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPIBNACKP_JOKAECACIII_OFFSET))(this);
		}

		::System::Void HOHPBLCHOIJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JGBPIBNACKP_HOHPBLCHOIJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGBPIBNACKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGBPIBNACKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGBPIBNACKP*))((::PBYTE)hIl2Cpp + JGBPIBNACKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPIBNACKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPIBNACKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGBPIBNACKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPIBNACKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGBPIBNACKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGBPIBNACKP*))((::PBYTE)hIl2Cpp + JGBPIBNACKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGBPIBNACKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
