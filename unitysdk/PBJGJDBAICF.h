#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBJGJDBAICF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBJGJDBAICF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF80E0)
#define PBJGJDBAICF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF83B0)
#define PBJGJDBAICF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF7CE0)
#define PBJGJDBAICF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF7CB0)
#define PBJGJDBAICF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF7CA0)
#define PBJGJDBAICF_DJBPCBPLJBK_OFFSET UNITYSDK_OFFSET(0x1DEF7D50)
#define PBJGJDBAICF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF7EA0)
#define PBJGJDBAICF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF7D90)
#define PBJGJDBAICF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF7F70)
#define PBJGJDBAICF_GJINBGPBEKO_OFFSET UNITYSDK_OFFSET(0x1DEF7D80)
#define PBJGJDBAICF_INGHOCFKLMM_OFFSET UNITYSDK_OFFSET(0x1DEF7D70)
#define PBJGJDBAICF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEF7C30)
#define PBJGJDBAICF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF8230)
#define PBJGJDBAICF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF81F0)
#define PBJGJDBAICF_NIEBPCAOAHG_OFFSET UNITYSDK_OFFSET(0x1DEF7D60)
#define PBJGJDBAICF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF7C90)
#define PBJGJDBAICF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF7FA0)
#define PBJGJDBAICF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF8000)

inline static constexpr unsigned int PBJGJDBAICF_TypeDefinitionIndex = 26791;

	class PBJGJDBAICF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IDDJKMCKIHO; // 0x18
		::System::UInt32 JKEOJBIKIKE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PBJGJDBAICF")->GetStaticField(0x33740);
		}

		// static const ::System::Object MKMJJEKAGGC; // 0x0
		// static const ::System::Object DCIKMJIGMCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJGJDBAICF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBJGJDBAICF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBJGJDBAICF*))((::PBYTE)hIl2Cpp + PBJGJDBAICF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBJGJDBAICF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PBJGJDBAICF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJGJDBAICF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBJGJDBAICF* Clone()
		{
			return ((::PBJGJDBAICF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJGJDBAICF_CLONE_OFFSET))(this);
		}

		::System::UInt32 DJBPCBPLJBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJGJDBAICF_DJBPCBPLJBK_OFFSET))(this);
		}

		::System::Void NIEBPCAOAHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBJGJDBAICF_NIEBPCAOAHG_OFFSET))(this, a1);
		}

		::System::UInt32 INGHOCFKLMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJGJDBAICF_INGHOCFKLMM_OFFSET))(this);
		}

		::System::Void GJINBGPBEKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBJGJDBAICF_GJINBGPBEKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBJGJDBAICF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBJGJDBAICF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBJGJDBAICF*))((::PBYTE)hIl2Cpp + PBJGJDBAICF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJGJDBAICF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJGJDBAICF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBJGJDBAICF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJGJDBAICF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBJGJDBAICF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBJGJDBAICF*))((::PBYTE)hIl2Cpp + PBJGJDBAICF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBJGJDBAICF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
