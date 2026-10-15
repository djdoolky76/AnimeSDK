#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDHPAHIFEPM;
class PLAGFACLPDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLAGFACLPDL_AIAKMLLNHIM_OFFSET UNITYSDK_OFFSET(0x1DF6EF60)
#define PLAGFACLPDL_BMOOOFIGOAA_OFFSET UNITYSDK_OFFSET(0x1DF6EF70)
#define PLAGFACLPDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF6F460)
#define PLAGFACLPDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6F880)
#define PLAGFACLPDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF6EE60)
#define PLAGFACLPDL_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1DF6EF90)
#define PLAGFACLPDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF6EDC0)
#define PLAGFACLPDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6EDB0)
#define PLAGFACLPDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF6F0E0)
#define PLAGFACLPDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF6EFB0)
#define PLAGFACLPDL_FJIFBIACNPL_OFFSET UNITYSDK_OFFSET(0x1DF6EF80)
#define PLAGFACLPDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF6F270)
#define PLAGFACLPDL_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1DF6EFA0)
#define PLAGFACLPDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF6ED40)
#define PLAGFACLPDL_LENJFOCOIBO_OFFSET UNITYSDK_OFFSET(0x1DF6EF50)
#define PLAGFACLPDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF6F6B0)
#define PLAGFACLPDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF6F5C0)
#define PLAGFACLPDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF6EDA0)
#define PLAGFACLPDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF6F2C0)
#define PLAGFACLPDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF6F320)

inline static constexpr unsigned int PLAGFACLPDL_TypeDefinitionIndex = 28714;

	class PLAGFACLPDL : public ::System::Object
	{
	public:
		::HDHPAHIFEPM* IKINNHFCFPJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAOCMEBMMNJ; // 0x20
		::System::UInt32 KJAENGKDFJD; // 0x24
		static ::Google::Protobuf::MessageParser_1<::PLAGFACLPDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLAGFACLPDL*>**)UnitySDK::FromName("", "PLAGFACLPDL")->GetStaticField(0x3BE50);
		}

		// static const ::System::Object CGLMBFKHCDC; // 0x0
		// static const ::System::Object LFGMICHAPCJ; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAGFACLPDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLAGFACLPDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGFACLPDL*))((::PBYTE)hIl2Cpp + PLAGFACLPDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLAGFACLPDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLAGFACLPDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLAGFACLPDL*>*(*)())((::PBYTE)hIl2Cpp + PLAGFACLPDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAGFACLPDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLAGFACLPDL* Clone()
		{
			return ((::PLAGFACLPDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAGFACLPDL_CLONE_OFFSET))(this);
		}

		::HDHPAHIFEPM* LENJFOCOIBO()
		{
			return ((::HDHPAHIFEPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAGFACLPDL_LENJFOCOIBO_OFFSET))(this);
		}

		::System::Void AIAKMLLNHIM(::HDHPAHIFEPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDHPAHIFEPM*))((::PBYTE)hIl2Cpp + PLAGFACLPDL_AIAKMLLNHIM_OFFSET))(this, a1);
		}

		::System::UInt32 BMOOOFIGOAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAGFACLPDL_BMOOOFIGOAA_OFFSET))(this);
		}

		::System::Void FJIFBIACNPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLAGFACLPDL_FJIFBIACNPL_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAGFACLPDL_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLAGFACLPDL_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLAGFACLPDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLAGFACLPDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLAGFACLPDL*))((::PBYTE)hIl2Cpp + PLAGFACLPDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAGFACLPDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAGFACLPDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLAGFACLPDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAGFACLPDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLAGFACLPDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGFACLPDL*))((::PBYTE)hIl2Cpp + PLAGFACLPDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLAGFACLPDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
