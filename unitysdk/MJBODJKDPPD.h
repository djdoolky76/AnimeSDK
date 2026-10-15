#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJBODJKDPPD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJBODJKDPPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA45480)
#define MJBODJKDPPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA456A0)
#define MJBODJKDPPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA450D0)
#define MJBODJKDPPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA450A0)
#define MJBODJKDPPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA45090)
#define MJBODJKDPPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA45200)
#define MJBODJKDPPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA45130)
#define MJBODJKDPPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA45370)
#define MJBODJKDPPD_IAHPMMCNAHF_OFFSET UNITYSDK_OFFSET(0x1EA45110)
#define MJBODJKDPPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA45050)
#define MJBODJKDPPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA45540)
#define MJBODJKDPPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA45510)
#define MJBODJKDPPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA45080)
#define MJBODJKDPPD_PNOBGLEHPPO_OFFSET UNITYSDK_OFFSET(0x1EA45120)
#define MJBODJKDPPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA453A0)
#define MJBODJKDPPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA45400)

inline static constexpr unsigned int MJBODJKDPPD_TypeDefinitionIndex = 33810;

	class MJBODJKDPPD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DKMLFMFKHGM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MJBODJKDPPD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MJBODJKDPPD*>**)UnitySDK::FromName("", "MJBODJKDPPD")->GetStaticField(0x55480);
		}

		// static const ::System::Object PMMGMKNIEKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBODJKDPPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJBODJKDPPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJBODJKDPPD*))((::PBYTE)hIl2Cpp + MJBODJKDPPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJBODJKDPPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MJBODJKDPPD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MJBODJKDPPD*>*(*)())((::PBYTE)hIl2Cpp + MJBODJKDPPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBODJKDPPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJBODJKDPPD* Clone()
		{
			return ((::MJBODJKDPPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBODJKDPPD_CLONE_OFFSET))(this);
		}

		::System::UInt32 IAHPMMCNAHF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBODJKDPPD_IAHPMMCNAHF_OFFSET))(this);
		}

		::System::Void PNOBGLEHPPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJBODJKDPPD_PNOBGLEHPPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJBODJKDPPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJBODJKDPPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJBODJKDPPD*))((::PBYTE)hIl2Cpp + MJBODJKDPPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBODJKDPPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBODJKDPPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJBODJKDPPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBODJKDPPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJBODJKDPPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJBODJKDPPD*))((::PBYTE)hIl2Cpp + MJBODJKDPPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJBODJKDPPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
