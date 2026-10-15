#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEOBLDJAOPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HEOBLDJAOPE_AJDAINGCOFG_OFFSET UNITYSDK_OFFSET(0x1E55D8E0)
#define HEOBLDJAOPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E55DC30)
#define HEOBLDJAOPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55DF00)
#define HEOBLDJAOPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E55D880)
#define HEOBLDJAOPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E55D850)
#define HEOBLDJAOPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55D840)
#define HEOBLDJAOPE_DAOGHCGLNJP_OFFSET UNITYSDK_OFFSET(0x1E55D900)
#define HEOBLDJAOPE_EEDGPGOCEEC_OFFSET UNITYSDK_OFFSET(0x1E55D8D0)
#define HEOBLDJAOPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E55D9F0)
#define HEOBLDJAOPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E55D910)
#define HEOBLDJAOPE_FCOMDMHJFNP_OFFSET UNITYSDK_OFFSET(0x1E55D8F0)
#define HEOBLDJAOPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E55DAC0)
#define HEOBLDJAOPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E55D800)
#define HEOBLDJAOPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E55DD80)
#define HEOBLDJAOPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E55DD40)
#define HEOBLDJAOPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E55D830)
#define HEOBLDJAOPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E55DAF0)
#define HEOBLDJAOPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E55DB50)

inline static constexpr unsigned int HEOBLDJAOPE_TypeDefinitionIndex = 33256;

	class HEOBLDJAOPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IGIDCGFPCEJ; // 0x18
		::System::UInt32 KFFHCBIANHA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HEOBLDJAOPE")->GetStaticField(0x33530);
		}

		// static const ::System::Object CNFKMGEHCPF; // 0x0
		// static const ::System::Object KBFLODIOALB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HEOBLDJAOPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEOBLDJAOPE*))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEOBLDJAOPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HEOBLDJAOPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HEOBLDJAOPE* Clone()
		{
			return ((::HEOBLDJAOPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_CLONE_OFFSET))(this);
		}

		::System::UInt32 EEDGPGOCEEC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_EEDGPGOCEEC_OFFSET))(this);
		}

		::System::Void AJDAINGCOFG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_AJDAINGCOFG_OFFSET))(this, a1);
		}

		::System::UInt32 FCOMDMHJFNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_FCOMDMHJFNP_OFFSET))(this);
		}

		::System::Void DAOGHCGLNJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_DAOGHCGLNJP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HEOBLDJAOPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEOBLDJAOPE*))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HEOBLDJAOPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEOBLDJAOPE*))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HEOBLDJAOPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
