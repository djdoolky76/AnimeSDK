#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOPODAHBPFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AOPODAHBPFH_AJOPEKGIJFO_OFFSET UNITYSDK_OFFSET(0x1E6714D0)
#define AOPODAHBPFH_BKMJJABNDMA_OFFSET UNITYSDK_OFFSET(0x1E6714E0)
#define AOPODAHBPFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E671860)
#define AOPODAHBPFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E671B30)
#define AOPODAHBPFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E671460)
#define AOPODAHBPFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E671430)
#define AOPODAHBPFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E671420)
#define AOPODAHBPFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E671620)
#define AOPODAHBPFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E671510)
#define AOPODAHBPFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6716F0)
#define AOPODAHBPFH_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1E671500)
#define AOPODAHBPFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6713B0)
#define AOPODAHBPFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6719B0)
#define AOPODAHBPFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E671970)
#define AOPODAHBPFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E671410)
#define AOPODAHBPFH_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1E6714F0)
#define AOPODAHBPFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E671720)
#define AOPODAHBPFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E671780)

inline static constexpr unsigned int AOPODAHBPFH_TypeDefinitionIndex = 31686;

	class AOPODAHBPFH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ADOPAOCMEOG; // 0x18
		::System::UInt32 LAPNIOGIGPL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AOPODAHBPFH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AOPODAHBPFH*>**)UnitySDK::FromName("", "AOPODAHBPFH")->GetStaticField(0x41AE0);
		}

		// static const ::System::Object ELFGGGHJCFC; // 0x0
		// static const ::System::Object ODHBDFKGPJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AOPODAHBPFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOPODAHBPFH*))((::PBYTE)hIl2Cpp + AOPODAHBPFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOPODAHBPFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AOPODAHBPFH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AOPODAHBPFH*>*(*)())((::PBYTE)hIl2Cpp + AOPODAHBPFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AOPODAHBPFH* Clone()
		{
			return ((::AOPODAHBPFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH_CLONE_OFFSET))(this);
		}

		::System::UInt32 AJOPEKGIJFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH_AJOPEKGIJFO_OFFSET))(this);
		}

		::System::Void BKMJJABNDMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOPODAHBPFH_BKMJJABNDMA_OFFSET))(this, a1);
		}

		::System::UInt32 PKFKJCPLLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH_PKFKJCPLLOM_OFFSET))(this);
		}

		::System::Void JJDKOEONGHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOPODAHBPFH_JJDKOEONGHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOPODAHBPFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AOPODAHBPFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOPODAHBPFH*))((::PBYTE)hIl2Cpp + AOPODAHBPFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AOPODAHBPFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AOPODAHBPFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOPODAHBPFH*))((::PBYTE)hIl2Cpp + AOPODAHBPFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AOPODAHBPFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
