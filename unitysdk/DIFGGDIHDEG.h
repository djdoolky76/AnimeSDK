#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIFGGDIHDEG;
class OOLJJHMLHBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DIFGGDIHDEG_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1E1BCDB0)
#define DIFGGDIHDEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1BD3A0)
#define DIFGGDIHDEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BD860)
#define DIFGGDIHDEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1BCC30)
#define DIFGGDIHDEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1BCB90)
#define DIFGGDIHDEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BCB80)
#define DIFGGDIHDEG_EAAOEILGHED_OFFSET UNITYSDK_OFFSET(0x1E1BCD50)
#define DIFGGDIHDEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1BCF00)
#define DIFGGDIHDEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1BCDC0)
#define DIFGGDIHDEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1BD040)
#define DIFGGDIHDEG_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1E1BCDA0)
#define DIFGGDIHDEG_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1E1BCCF0)
#define DIFGGDIHDEG_ICLHEBBJGDP_OFFSET UNITYSDK_OFFSET(0x1E1BCD60)
#define DIFGGDIHDEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1BCB40)
#define DIFGGDIHDEG_KFFMBNFGJOB_OFFSET UNITYSDK_OFFSET(0x1E1BCD90)
#define DIFGGDIHDEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1BD730)
#define DIFGGDIHDEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1BD650)
#define DIFGGDIHDEG_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1E1BCCE0)
#define DIFGGDIHDEG_MOKNHDLNIHH_OFFSET UNITYSDK_OFFSET(0x1E1BCD70)
#define DIFGGDIHDEG_NAAFLDJFMIK_OFFSET UNITYSDK_OFFSET(0x1E1BCD40)
#define DIFGGDIHDEG_OLEJNDFFHPP_OFFSET UNITYSDK_OFFSET(0x1E1BCD80)
#define DIFGGDIHDEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1BCB70)
#define DIFGGDIHDEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1BD140)
#define DIFGGDIHDEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1BD1A0)

inline static constexpr unsigned int DIFGGDIHDEG_TypeDefinitionIndex = 33752;

	class DIFGGDIHDEG : public ::System::Object
	{
	public:
		::System::String* IOGCODPGEEA; // 0x10
		::OOLJJHMLHBH* KINOMHJKOHL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Int64 EHNODBLJJBI; // 0x28
		::System::UInt32 MDHELICKNPE; // 0x30
		::System::Byte _padding0[0x4];
		::System::Int64 HHCEMNIBHIE; // 0x38
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DIFGGDIHDEG")->GetStaticField(0x11970);
		}

		// static const ::System::Object OLMIFJKILJG; // 0x0
		// static const ::System::Object PPLLDEMOHJG; // 0x0
		// static const ::System::Object OLEBEAPKMFK; // 0x0
		// static const ::System::Object BDDGFOPHBML; // 0x0
		// static const ::System::Object HLKDEGJOKIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIFGGDIHDEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIFGGDIHDEG*))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIFGGDIHDEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DIFGGDIHDEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIFGGDIHDEG* Clone()
		{
			return ((::DIFGGDIHDEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_CLONE_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_HABCMACJEIN_OFFSET))(this, a1);
		}

		::System::Int64 NAAFLDJFMIK()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_NAAFLDJFMIK_OFFSET))(this);
		}

		::System::Void EAAOEILGHED(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_EAAOEILGHED_OFFSET))(this, a1);
		}

		::OOLJJHMLHBH* ICLHEBBJGDP()
		{
			return ((::OOLJJHMLHBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_ICLHEBBJGDP_OFFSET))(this);
		}

		::System::Void MOKNHDLNIHH(::OOLJJHMLHBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOLJJHMLHBH*))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_MOKNHDLNIHH_OFFSET))(this, a1);
		}

		::System::Int64 OLEJNDFFHPP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_OLEJNDFFHPP_OFFSET))(this);
		}

		::System::Void KFFMBNFGJOB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_KFFMBNFGJOB_OFFSET))(this, a1);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIFGGDIHDEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIFGGDIHDEG*))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIFGGDIHDEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIFGGDIHDEG*))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIFGGDIHDEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
