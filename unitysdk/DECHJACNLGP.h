#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DECHJACNLGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DECHJACNLGP_BLLCEDPJLLL_OFFSET UNITYSDK_OFFSET(0x1E190250)
#define DECHJACNLGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1905D0)
#define DECHJACNLGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1908A0)
#define DECHJACNLGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1901D0)
#define DECHJACNLGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1901A0)
#define DECHJACNLGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E190190)
#define DECHJACNLGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E190390)
#define DECHJACNLGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E190280)
#define DECHJACNLGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E190460)
#define DECHJACNLGP_HJLICKAFOOE_OFFSET UNITYSDK_OFFSET(0x1E190240)
#define DECHJACNLGP_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x1E190270)
#define DECHJACNLGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E190120)
#define DECHJACNLGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E190720)
#define DECHJACNLGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1906E0)
#define DECHJACNLGP_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x1E190260)
#define DECHJACNLGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E190180)
#define DECHJACNLGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E190490)
#define DECHJACNLGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1904F0)

inline static constexpr unsigned int DECHJACNLGP_TypeDefinitionIndex = 27282;

	class DECHJACNLGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEPOBIODAJH; // 0x18
		::System::UInt32 OGOHJFENJOA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DECHJACNLGP")->GetStaticField(0x30530);
		}

		// static const ::System::Object CLEGELBFILH; // 0x0
		// static const ::System::Object BPLJLIMECGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECHJACNLGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DECHJACNLGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DECHJACNLGP*))((::PBYTE)hIl2Cpp + DECHJACNLGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DECHJACNLGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DECHJACNLGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECHJACNLGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DECHJACNLGP* Clone()
		{
			return ((::DECHJACNLGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECHJACNLGP_CLONE_OFFSET))(this);
		}

		::System::UInt32 HJLICKAFOOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECHJACNLGP_HJLICKAFOOE_OFFSET))(this);
		}

		::System::Void BLLCEDPJLLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DECHJACNLGP_BLLCEDPJLLL_OFFSET))(this, a1);
		}

		::System::UInt32 OPDJCLIDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECHJACNLGP_OPDJCLIDOCA_OFFSET))(this);
		}

		::System::Void IANLAJHINMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DECHJACNLGP_IANLAJHINMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DECHJACNLGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DECHJACNLGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DECHJACNLGP*))((::PBYTE)hIl2Cpp + DECHJACNLGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECHJACNLGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECHJACNLGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DECHJACNLGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECHJACNLGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DECHJACNLGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DECHJACNLGP*))((::PBYTE)hIl2Cpp + DECHJACNLGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DECHJACNLGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
