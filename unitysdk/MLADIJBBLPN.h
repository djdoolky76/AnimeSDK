#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLADIJBBLPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLADIJBBLPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDB0FB0)
#define MLADIJBBLPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDB11D0)
#define MLADIJBBLPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDB0C00)
#define MLADIJBBLPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDB0BD0)
#define MLADIJBBLPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDB0BC0)
#define MLADIJBBLPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDB0D30)
#define MLADIJBBLPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDB0C60)
#define MLADIJBBLPN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FDB0C50)
#define MLADIJBBLPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDB0EA0)
#define MLADIJBBLPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDB0B80)
#define MLADIJBBLPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDB1070)
#define MLADIJBBLPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDB1040)
#define MLADIJBBLPN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FDB0C40)
#define MLADIJBBLPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDB0BB0)
#define MLADIJBBLPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDB0ED0)
#define MLADIJBBLPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDB0F30)

inline static constexpr unsigned int MLADIJBBLPN_TypeDefinitionIndex = 35890;

	class MLADIJBBLPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MLADIJBBLPN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MLADIJBBLPN*>**)UnitySDK::FromName("", "MLADIJBBLPN")->GetStaticField(0x5C550);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLADIJBBLPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLADIJBBLPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLADIJBBLPN*))((::PBYTE)hIl2Cpp + MLADIJBBLPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLADIJBBLPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MLADIJBBLPN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MLADIJBBLPN*>*(*)())((::PBYTE)hIl2Cpp + MLADIJBBLPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLADIJBBLPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLADIJBBLPN* Clone()
		{
			return ((::MLADIJBBLPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLADIJBBLPN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLADIJBBLPN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLADIJBBLPN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLADIJBBLPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLADIJBBLPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLADIJBBLPN*))((::PBYTE)hIl2Cpp + MLADIJBBLPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLADIJBBLPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLADIJBBLPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLADIJBBLPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLADIJBBLPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLADIJBBLPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLADIJBBLPN*))((::PBYTE)hIl2Cpp + MLADIJBBLPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLADIJBBLPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
