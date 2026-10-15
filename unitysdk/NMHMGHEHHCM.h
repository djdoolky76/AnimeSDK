#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMHMGHEHHCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMHMGHEHHCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB49DB0)
#define NMHMGHEHHCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4A010)
#define NMHMGHEHHCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB499C0)
#define NMHMGHEHHCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB49980)
#define NMHMGHEHHCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB49970)
#define NMHMGHEHHCM_ELLFJCIIGHD_OFFSET UNITYSDK_OFFSET(0x1EB49A30)
#define NMHMGHEHHCM_EOHDCEKJMGN_OFFSET UNITYSDK_OFFSET(0x1EB49A10)
#define NMHMGHEHHCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB49B30)
#define NMHMGHEHHCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB49A50)
#define NMHMGHEHHCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB49C10)
#define NMHMGHEHHCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB49930)
#define NMHMGHEHHCM_JKPCKIFONCA_OFFSET UNITYSDK_OFFSET(0x1EB49A20)
#define NMHMGHEHHCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB49E90)
#define NMHMGHEHHCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB49E50)
#define NMHMGHEHHCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB49960)
#define NMHMGHEHHCM_PLLEFMIACDN_OFFSET UNITYSDK_OFFSET(0x1EB49A40)
#define NMHMGHEHHCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB49C40)
#define NMHMGHEHHCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB49CA0)

inline static constexpr unsigned int NMHMGHEHHCM_TypeDefinitionIndex = 33193;

	class NMHMGHEHHCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OOBAKFDHDOA; // 0x18
		::System::Boolean MPAOPHOAMBP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NMHMGHEHHCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NMHMGHEHHCM*>**)UnitySDK::FromName("", "NMHMGHEHHCM")->GetStaticField(0x55D60);
		}

		// static const ::System::Object AMMGPIGICPJ; // 0x0
		// static const ::System::Object CJKDONOBMHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMHMGHEHHCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMHMGHEHHCM*))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMHMGHEHHCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NMHMGHEHHCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NMHMGHEHHCM*>*(*)())((::PBYTE)hIl2Cpp + NMHMGHEHHCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMHMGHEHHCM* Clone()
		{
			return ((::NMHMGHEHHCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_CLONE_OFFSET))(this);
		}

		::System::Boolean EOHDCEKJMGN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_EOHDCEKJMGN_OFFSET))(this);
		}

		::System::Void JKPCKIFONCA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_JKPCKIFONCA_OFFSET))(this, a1);
		}

		::System::UInt32 ELLFJCIIGHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_ELLFJCIIGHD_OFFSET))(this);
		}

		::System::Void PLLEFMIACDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_PLLEFMIACDN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMHMGHEHHCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMHMGHEHHCM*))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMHMGHEHHCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMHMGHEHHCM*))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMHMGHEHHCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
