#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHHGBMIEBOE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHHGBMIEBOE_AGFLGDOCMCB_OFFSET UNITYSDK_OFFSET(0x1E35F380)
#define FHHGBMIEBOE_BMOOOFIGOAA_OFFSET UNITYSDK_OFFSET(0x1E35F3A0)
#define FHHGBMIEBOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E35F710)
#define FHHGBMIEBOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35F9E0)
#define FHHGBMIEBOE_CKBDGCNDCJJ_OFFSET UNITYSDK_OFFSET(0x1E35F390)
#define FHHGBMIEBOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E35F310)
#define FHHGBMIEBOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E35F2E0)
#define FHHGBMIEBOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35F2D0)
#define FHHGBMIEBOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E35F4D0)
#define FHHGBMIEBOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E35F3C0)
#define FHHGBMIEBOE_FJIFBIACNPL_OFFSET UNITYSDK_OFFSET(0x1E35F3B0)
#define FHHGBMIEBOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E35F5A0)
#define FHHGBMIEBOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E35F260)
#define FHHGBMIEBOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E35F860)
#define FHHGBMIEBOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E35F820)
#define FHHGBMIEBOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E35F2C0)
#define FHHGBMIEBOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E35F5D0)
#define FHHGBMIEBOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E35F630)

inline static constexpr unsigned int FHHGBMIEBOE_TypeDefinitionIndex = 28548;

	class FHHGBMIEBOE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAOCMEBMMNJ; // 0x18
		::System::UInt32 DIODHMIDKPL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FHHGBMIEBOE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHHGBMIEBOE*>**)UnitySDK::FromName("", "FHHGBMIEBOE")->GetStaticField(0x44E50);
		}

		// static const ::System::Object BHBEDNPIMEN; // 0x0
		// static const ::System::Object LFGMICHAPCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHHGBMIEBOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHHGBMIEBOE*))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHHGBMIEBOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHHGBMIEBOE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHHGBMIEBOE*>*(*)())((::PBYTE)hIl2Cpp + FHHGBMIEBOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHHGBMIEBOE* Clone()
		{
			return ((::FHHGBMIEBOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_CLONE_OFFSET))(this);
		}

		::System::UInt32 AGFLGDOCMCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_AGFLGDOCMCB_OFFSET))(this);
		}

		::System::Void CKBDGCNDCJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_CKBDGCNDCJJ_OFFSET))(this, a1);
		}

		::System::UInt32 BMOOOFIGOAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_BMOOOFIGOAA_OFFSET))(this);
		}

		::System::Void FJIFBIACNPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_FJIFBIACNPL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHHGBMIEBOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHHGBMIEBOE*))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHHGBMIEBOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHHGBMIEBOE*))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHHGBMIEBOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
