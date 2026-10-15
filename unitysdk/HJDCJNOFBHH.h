#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJDCJNOFBHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJDCJNOFBHH_ABLLACJACMC_OFFSET UNITYSDK_OFFSET(0x1E5A55E0)
#define HJDCJNOFBHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5A5940)
#define HJDCJNOFBHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A5B60)
#define HJDCJNOFBHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5A5590)
#define HJDCJNOFBHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A5560)
#define HJDCJNOFBHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A5550)
#define HJDCJNOFBHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5A56C0)
#define HJDCJNOFBHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5A55F0)
#define HJDCJNOFBHH_FEMNPLHAHKC_OFFSET UNITYSDK_OFFSET(0x1E5A55D0)
#define HJDCJNOFBHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5A5830)
#define HJDCJNOFBHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5A5510)
#define HJDCJNOFBHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5A5A00)
#define HJDCJNOFBHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5A59D0)
#define HJDCJNOFBHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5A5540)
#define HJDCJNOFBHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5A5860)
#define HJDCJNOFBHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5A58C0)

inline static constexpr unsigned int HJDCJNOFBHH_TypeDefinitionIndex = 33436;

	class HJDCJNOFBHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MFHBBHFIIBO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HJDCJNOFBHH")->GetStaticField(0x3F570);
		}

		// static const ::System::Object ABELECPLDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJDCJNOFBHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJDCJNOFBHH*))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDCJNOFBHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HJDCJNOFBHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJDCJNOFBHH* Clone()
		{
			return ((::HJDCJNOFBHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEMNPLHAHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_FEMNPLHAHKC_OFFSET))(this);
		}

		::System::Void ABLLACJACMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_ABLLACJACMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJDCJNOFBHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJDCJNOFBHH*))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJDCJNOFBHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJDCJNOFBHH*))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJDCJNOFBHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
