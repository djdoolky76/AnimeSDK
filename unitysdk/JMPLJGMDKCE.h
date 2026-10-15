#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMPLJGMDKCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMPLJGMDKCE_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1E763960)
#define JMPLJGMDKCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E763CD0)
#define JMPLJGMDKCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E763EF0)
#define JMPLJGMDKCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E763920)
#define JMPLJGMDKCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7638F0)
#define JMPLJGMDKCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7638E0)
#define JMPLJGMDKCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E763A50)
#define JMPLJGMDKCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E763980)
#define JMPLJGMDKCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E763BC0)
#define JMPLJGMDKCE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7638A0)
#define JMPLJGMDKCE_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1E763970)
#define JMPLJGMDKCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E763D90)
#define JMPLJGMDKCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E763D60)
#define JMPLJGMDKCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7638D0)
#define JMPLJGMDKCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E763BF0)
#define JMPLJGMDKCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E763C50)

inline static constexpr unsigned int JMPLJGMDKCE_TypeDefinitionIndex = 34335;

	class JMPLJGMDKCE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FOBLPJCIGJE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JMPLJGMDKCE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JMPLJGMDKCE*>**)UnitySDK::FromName("", "JMPLJGMDKCE")->GetStaticField(0x65560);
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

		static ::Google::Protobuf::MessageParser_1<::JMPLJGMDKCE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JMPLJGMDKCE*>*(*)())((::PBYTE)hIl2Cpp + JMPLJGMDKCE_JJGHOBBFNJD_OFFSET))();
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
