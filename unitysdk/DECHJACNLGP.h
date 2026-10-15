#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DECHJACNLGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DECHJACNLGP_BLLCEDPJLLL_OFFSET UNITYSDK_OFFSET(0x1E162CF0)
#define DECHJACNLGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E163070)
#define DECHJACNLGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E163340)
#define DECHJACNLGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E162C70)
#define DECHJACNLGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E162C40)
#define DECHJACNLGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E162C30)
#define DECHJACNLGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E162E30)
#define DECHJACNLGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E162D20)
#define DECHJACNLGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E162F00)
#define DECHJACNLGP_HJLICKAFOOE_OFFSET UNITYSDK_OFFSET(0x1E162CE0)
#define DECHJACNLGP_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x1E162D10)
#define DECHJACNLGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E162BC0)
#define DECHJACNLGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1631C0)
#define DECHJACNLGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E163180)
#define DECHJACNLGP_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x1E162D00)
#define DECHJACNLGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E162C20)
#define DECHJACNLGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E162F30)
#define DECHJACNLGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E162F90)

inline static constexpr unsigned int DECHJACNLGP_TypeDefinitionIndex = 27282;

	class DECHJACNLGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEPOBIODAJH; // 0x18
		::System::UInt32 OGOHJFENJOA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DECHJACNLGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DECHJACNLGP*>**)UnitySDK::FromName("", "DECHJACNLGP")->GetStaticField(0x2BFB0);
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

		static ::Google::Protobuf::MessageParser_1<::DECHJACNLGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DECHJACNLGP*>*(*)())((::PBYTE)hIl2Cpp + DECHJACNLGP_JJGHOBBFNJD_OFFSET))();
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
