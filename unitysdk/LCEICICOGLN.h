#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCEICICOGLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCEICICOGLN_AIFJLACFEFH_OFFSET UNITYSDK_OFFSET(0x1E8EB170)
#define LCEICICOGLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8EB4E0)
#define LCEICICOGLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EB700)
#define LCEICICOGLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8EB130)
#define LCEICICOGLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8EB100)
#define LCEICICOGLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EB0F0)
#define LCEICICOGLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8EB260)
#define LCEICICOGLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8EB190)
#define LCEICICOGLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8EB3D0)
#define LCEICICOGLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8EB0B0)
#define LCEICICOGLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8EB5A0)
#define LCEICICOGLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8EB570)
#define LCEICICOGLN_MJCPNPLGDJH_OFFSET UNITYSDK_OFFSET(0x1E8EB180)
#define LCEICICOGLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8EB0E0)
#define LCEICICOGLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8EB400)
#define LCEICICOGLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8EB460)

inline static constexpr unsigned int LCEICICOGLN_TypeDefinitionIndex = 33856;

	class LCEICICOGLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BGICDAMKGHK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LCEICICOGLN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LCEICICOGLN*>**)UnitySDK::FromName("", "LCEICICOGLN")->GetStaticField(0x32670);
		}

		// static const ::System::Object OADBPFJOOLH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEICICOGLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCEICICOGLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCEICICOGLN*))((::PBYTE)hIl2Cpp + LCEICICOGLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCEICICOGLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LCEICICOGLN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LCEICICOGLN*>*(*)())((::PBYTE)hIl2Cpp + LCEICICOGLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEICICOGLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCEICICOGLN* Clone()
		{
			return ((::LCEICICOGLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEICICOGLN_CLONE_OFFSET))(this);
		}

		::System::UInt32 AIFJLACFEFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEICICOGLN_AIFJLACFEFH_OFFSET))(this);
		}

		::System::Void MJCPNPLGDJH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCEICICOGLN_MJCPNPLGDJH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCEICICOGLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCEICICOGLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCEICICOGLN*))((::PBYTE)hIl2Cpp + LCEICICOGLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEICICOGLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEICICOGLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCEICICOGLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEICICOGLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCEICICOGLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCEICICOGLN*))((::PBYTE)hIl2Cpp + LCEICICOGLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCEICICOGLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
