#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEODHDFIFEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AEODHDFIFEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3C8C50)
#define AEODHDFIFEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3C8E70)
#define AEODHDFIFEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3C88A0)
#define AEODHDFIFEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3C8870)
#define AEODHDFIFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C8860)
#define AEODHDFIFEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3C89D0)
#define AEODHDFIFEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3C8900)
#define AEODHDFIFEB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F3C88F0)
#define AEODHDFIFEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3C8B40)
#define AEODHDFIFEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3C8820)
#define AEODHDFIFEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3C8D10)
#define AEODHDFIFEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3C8CE0)
#define AEODHDFIFEB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F3C88E0)
#define AEODHDFIFEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3C8850)
#define AEODHDFIFEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3C8B70)
#define AEODHDFIFEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3C8BD0)

inline static constexpr unsigned int AEODHDFIFEB_TypeDefinitionIndex = 30608;

	class AEODHDFIFEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AEODHDFIFEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AEODHDFIFEB*>**)UnitySDK::FromName("", "AEODHDFIFEB")->GetStaticField(0x397C0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEODHDFIFEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AEODHDFIFEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEODHDFIFEB*))((::PBYTE)hIl2Cpp + AEODHDFIFEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEODHDFIFEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AEODHDFIFEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AEODHDFIFEB*>*(*)())((::PBYTE)hIl2Cpp + AEODHDFIFEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEODHDFIFEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AEODHDFIFEB* Clone()
		{
			return ((::AEODHDFIFEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEODHDFIFEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEODHDFIFEB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEODHDFIFEB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AEODHDFIFEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AEODHDFIFEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AEODHDFIFEB*))((::PBYTE)hIl2Cpp + AEODHDFIFEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEODHDFIFEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEODHDFIFEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AEODHDFIFEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEODHDFIFEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AEODHDFIFEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AEODHDFIFEB*))((::PBYTE)hIl2Cpp + AEODHDFIFEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AEODHDFIFEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
