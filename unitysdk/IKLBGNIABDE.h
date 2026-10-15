#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKLBGNIABDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKLBGNIABDE_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1E6A3120)
#define IKLBGNIABDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6A3480)
#define IKLBGNIABDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A36A0)
#define IKLBGNIABDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6A30D0)
#define IKLBGNIABDE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6A30A0)
#define IKLBGNIABDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A3090)
#define IKLBGNIABDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6A3200)
#define IKLBGNIABDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6A3130)
#define IKLBGNIABDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6A3370)
#define IKLBGNIABDE_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1E6A3110)
#define IKLBGNIABDE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6A3050)
#define IKLBGNIABDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6A3540)
#define IKLBGNIABDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6A3510)
#define IKLBGNIABDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6A3080)
#define IKLBGNIABDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6A33A0)
#define IKLBGNIABDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6A3400)

inline static constexpr unsigned int IKLBGNIABDE_TypeDefinitionIndex = 30226;

	class IKLBGNIABDE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MDHELICKNPE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IKLBGNIABDE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IKLBGNIABDE*>**)UnitySDK::FromName("", "IKLBGNIABDE")->GetStaticField(0x55780);
		}

		// static const ::System::Object HLKDEGJOKIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBGNIABDE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKLBGNIABDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKLBGNIABDE*))((::PBYTE)hIl2Cpp + IKLBGNIABDE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKLBGNIABDE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IKLBGNIABDE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IKLBGNIABDE*>*(*)())((::PBYTE)hIl2Cpp + IKLBGNIABDE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBGNIABDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKLBGNIABDE* Clone()
		{
			return ((::IKLBGNIABDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBGNIABDE_CLONE_OFFSET))(this);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBGNIABDE_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKLBGNIABDE_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKLBGNIABDE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKLBGNIABDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKLBGNIABDE*))((::PBYTE)hIl2Cpp + IKLBGNIABDE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBGNIABDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBGNIABDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKLBGNIABDE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLBGNIABDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKLBGNIABDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKLBGNIABDE*))((::PBYTE)hIl2Cpp + IKLBGNIABDE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKLBGNIABDE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
