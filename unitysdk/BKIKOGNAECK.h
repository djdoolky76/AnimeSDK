#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKIKOGNAECK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKIKOGNAECK_AOJICLLONCJ_OFFSET UNITYSDK_OFFSET(0x1DF2B910)
#define BKIKOGNAECK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2BC80)
#define BKIKOGNAECK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2BF50)
#define BKIKOGNAECK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF2B880)
#define BKIKOGNAECK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2B850)
#define BKIKOGNAECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2B840)
#define BKIKOGNAECK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF2BA40)
#define BKIKOGNAECK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF2B930)
#define BKIKOGNAECK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF2BB10)
#define BKIKOGNAECK_IKDPGIGDDDC_OFFSET UNITYSDK_OFFSET(0x1DF2B8F0)
#define BKIKOGNAECK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF2B7D0)
#define BKIKOGNAECK_KLCGEBLIANF_OFFSET UNITYSDK_OFFSET(0x1DF2B900)
#define BKIKOGNAECK_MDDNNEKHMDM_OFFSET UNITYSDK_OFFSET(0x1DF2B920)
#define BKIKOGNAECK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2BDD0)
#define BKIKOGNAECK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2BD90)
#define BKIKOGNAECK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF2B830)
#define BKIKOGNAECK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2BB40)
#define BKIKOGNAECK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2BBA0)

inline static constexpr unsigned int BKIKOGNAECK_TypeDefinitionIndex = 29298;

	class BKIKOGNAECK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JMIPJOJOJKE; // 0x18
		::System::UInt32 BJCGANEHKEO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BKIKOGNAECK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BKIKOGNAECK*>**)UnitySDK::FromName("", "BKIKOGNAECK")->GetStaticField(0x5AAC0);
		}

		// static const ::System::Object AFKPGOJFAFJ; // 0x0
		// static const ::System::Object BMGBOOHHENL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIKOGNAECK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKIKOGNAECK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKIKOGNAECK*))((::PBYTE)hIl2Cpp + BKIKOGNAECK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKIKOGNAECK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BKIKOGNAECK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BKIKOGNAECK*>*(*)())((::PBYTE)hIl2Cpp + BKIKOGNAECK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIKOGNAECK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKIKOGNAECK* Clone()
		{
			return ((::BKIKOGNAECK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIKOGNAECK_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKDPGIGDDDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIKOGNAECK_IKDPGIGDDDC_OFFSET))(this);
		}

		::System::Void KLCGEBLIANF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKIKOGNAECK_KLCGEBLIANF_OFFSET))(this, a1);
		}

		::System::UInt32 AOJICLLONCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIKOGNAECK_AOJICLLONCJ_OFFSET))(this);
		}

		::System::Void MDDNNEKHMDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKIKOGNAECK_MDDNNEKHMDM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKIKOGNAECK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKIKOGNAECK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKIKOGNAECK*))((::PBYTE)hIl2Cpp + BKIKOGNAECK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIKOGNAECK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIKOGNAECK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKIKOGNAECK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIKOGNAECK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKIKOGNAECK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKIKOGNAECK*))((::PBYTE)hIl2Cpp + BKIKOGNAECK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKIKOGNAECK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
