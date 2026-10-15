#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GILMFECEBFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GILMFECEBFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A0060)
#define GILMFECEBFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A0330)
#define GILMFECEBFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E49FC60)
#define GILMFECEBFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E49FC30)
#define GILMFECEBFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49FC20)
#define GILMFECEBFE_EBEAJNAIJOD_OFFSET UNITYSDK_OFFSET(0x1E49FCE0)
#define GILMFECEBFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E49FE20)
#define GILMFECEBFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E49FD10)
#define GILMFECEBFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E49FEF0)
#define GILMFECEBFE_IDJDHEIBMEI_OFFSET UNITYSDK_OFFSET(0x1E49FCD0)
#define GILMFECEBFE_IKDPGIGDDDC_OFFSET UNITYSDK_OFFSET(0x1E49FCF0)
#define GILMFECEBFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E49FBB0)
#define GILMFECEBFE_KLCGEBLIANF_OFFSET UNITYSDK_OFFSET(0x1E49FD00)
#define GILMFECEBFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A01B0)
#define GILMFECEBFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A0170)
#define GILMFECEBFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E49FC10)
#define GILMFECEBFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E49FF20)
#define GILMFECEBFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E49FF80)

inline static constexpr unsigned int GILMFECEBFE_TypeDefinitionIndex = 29290;

	class GILMFECEBFE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GJCFKIADAJP; // 0x18
		::System::UInt32 BJCGANEHKEO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GILMFECEBFE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GILMFECEBFE*>**)UnitySDK::FromName("", "GILMFECEBFE")->GetStaticField(0x1A680);
		}

		// static const ::System::Object JAOFNMCFJKA; // 0x0
		// static const ::System::Object AFKPGOJFAFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILMFECEBFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GILMFECEBFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GILMFECEBFE*))((::PBYTE)hIl2Cpp + GILMFECEBFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GILMFECEBFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GILMFECEBFE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GILMFECEBFE*>*(*)())((::PBYTE)hIl2Cpp + GILMFECEBFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILMFECEBFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GILMFECEBFE* Clone()
		{
			return ((::GILMFECEBFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILMFECEBFE_CLONE_OFFSET))(this);
		}

		::System::UInt32 IDJDHEIBMEI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GILMFECEBFE_IDJDHEIBMEI_OFFSET))(this);
		}

		::System::Void EBEAJNAIJOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GILMFECEBFE_EBEAJNAIJOD_OFFSET))(this, a1);
		}

		::System::UInt32 IKDPGIGDDDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GILMFECEBFE_IKDPGIGDDDC_OFFSET))(this);
		}

		::System::Void KLCGEBLIANF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GILMFECEBFE_KLCGEBLIANF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GILMFECEBFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GILMFECEBFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GILMFECEBFE*))((::PBYTE)hIl2Cpp + GILMFECEBFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GILMFECEBFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILMFECEBFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GILMFECEBFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GILMFECEBFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GILMFECEBFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GILMFECEBFE*))((::PBYTE)hIl2Cpp + GILMFECEBFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GILMFECEBFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
