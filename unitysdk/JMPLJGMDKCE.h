#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMPLJGMDKCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMPLJGMDKCE_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1E790F80)
#define JMPLJGMDKCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7912F0)
#define JMPLJGMDKCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E791510)
#define JMPLJGMDKCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E790F40)
#define JMPLJGMDKCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E790F10)
#define JMPLJGMDKCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E790F00)
#define JMPLJGMDKCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E791070)
#define JMPLJGMDKCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E790FA0)
#define JMPLJGMDKCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7911E0)
#define JMPLJGMDKCE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E790EC0)
#define JMPLJGMDKCE_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1E790F90)
#define JMPLJGMDKCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7913B0)
#define JMPLJGMDKCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E791380)
#define JMPLJGMDKCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E790EF0)
#define JMPLJGMDKCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E791210)
#define JMPLJGMDKCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E791270)

	class JMPLJGMDKCE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FOBLPJCIGJE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JMPLJGMDKCE")->GetStaticField(0x6C430);
		}

		// static const ::System::Object NOBLDDEFEKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMPLJGMDKCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMPLJGMDKCE*))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPLJGMDKCE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JMPLJGMDKCE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMPLJGMDKCE* Clone()
		{
			return ((::JMPLJGMDKCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_CLONE_OFFSET))(this);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMPLJGMDKCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMPLJGMDKCE*))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMPLJGMDKCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMPLJGMDKCE*))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMPLJGMDKCE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
