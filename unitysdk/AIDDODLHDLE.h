#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIDDODLHDLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIDDODLHDLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20506A50)
#define AIDDODLHDLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x20506C70)
#define AIDDODLHDLE_CLONE_OFFSET UNITYSDK_OFFSET(0x205066A0)
#define AIDDODLHDLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20506670)
#define AIDDODLHDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x20506660)
#define AIDDODLHDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205067D0)
#define AIDDODLHDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x20506700)
#define AIDDODLHDLE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x205066F0)
#define AIDDODLHDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20506940)
#define AIDDODLHDLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20506620)
#define AIDDODLHDLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20506B10)
#define AIDDODLHDLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20506AE0)
#define AIDDODLHDLE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x205066E0)
#define AIDDODLHDLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20506650)
#define AIDDODLHDLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20506970)
#define AIDDODLHDLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x205069D0)

inline static constexpr unsigned int AIDDODLHDLE_TypeDefinitionIndex = 30423;

	class AIDDODLHDLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AIDDODLHDLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AIDDODLHDLE*>**)UnitySDK::FromName("", "AIDDODLHDLE")->GetStaticField(0x30F00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDDODLHDLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIDDODLHDLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIDDODLHDLE*))((::PBYTE)hIl2Cpp + AIDDODLHDLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIDDODLHDLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AIDDODLHDLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AIDDODLHDLE*>*(*)())((::PBYTE)hIl2Cpp + AIDDODLHDLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDDODLHDLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIDDODLHDLE* Clone()
		{
			return ((::AIDDODLHDLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDDODLHDLE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDDODLHDLE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIDDODLHDLE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIDDODLHDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIDDODLHDLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIDDODLHDLE*))((::PBYTE)hIl2Cpp + AIDDODLHDLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDDODLHDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDDODLHDLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIDDODLHDLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDDODLHDLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIDDODLHDLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIDDODLHDLE*))((::PBYTE)hIl2Cpp + AIDDODLHDLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIDDODLHDLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
