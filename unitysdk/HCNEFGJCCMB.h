#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCNEFGJCCMB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCNEFGJCCMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5444F0)
#define HCNEFGJCCMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E544710)
#define HCNEFGJCCMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E544140)
#define HCNEFGJCCMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E544110)
#define HCNEFGJCCMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E544100)
#define HCNEFGJCCMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E544270)
#define HCNEFGJCCMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5441A0)
#define HCNEFGJCCMB_FMALEGHFILJ_OFFSET UNITYSDK_OFFSET(0x1E544190)
#define HCNEFGJCCMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5443E0)
#define HCNEFGJCCMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5440C0)
#define HCNEFGJCCMB_JKMEJKJPCPE_OFFSET UNITYSDK_OFFSET(0x1E544180)
#define HCNEFGJCCMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5445B0)
#define HCNEFGJCCMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E544580)
#define HCNEFGJCCMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5440F0)
#define HCNEFGJCCMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E544410)
#define HCNEFGJCCMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E544470)

inline static constexpr unsigned int HCNEFGJCCMB_TypeDefinitionIndex = 33030;

	class HCNEFGJCCMB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBAKEPKCDLI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HCNEFGJCCMB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HCNEFGJCCMB*>**)UnitySDK::FromName("", "HCNEFGJCCMB")->GetStaticField(0x30B40);
		}

		// static const ::System::Object OBOHDDNCGGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCNEFGJCCMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCNEFGJCCMB*))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCNEFGJCCMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HCNEFGJCCMB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HCNEFGJCCMB*>*(*)())((::PBYTE)hIl2Cpp + HCNEFGJCCMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCNEFGJCCMB* Clone()
		{
			return ((::HCNEFGJCCMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_CLONE_OFFSET))(this);
		}

		::System::UInt32 JKMEJKJPCPE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_JKMEJKJPCPE_OFFSET))(this);
		}

		::System::Void FMALEGHFILJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_FMALEGHFILJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCNEFGJCCMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCNEFGJCCMB*))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCNEFGJCCMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCNEFGJCCMB*))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCNEFGJCCMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
