#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKFCCNOIDNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKFCCNOIDNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA299E0)
#define MKFCCNOIDNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA29D00)
#define MKFCCNOIDNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA29620)
#define MKFCCNOIDNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA295E0)
#define MKFCCNOIDNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA295D0)
#define MKFCCNOIDNB_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1EA29680)
#define MKFCCNOIDNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA29790)
#define MKFCCNOIDNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA296B0)
#define MKFCCNOIDNB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA296A0)
#define MKFCCNOIDNB_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1EA29670)
#define MKFCCNOIDNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA29860)
#define MKFCCNOIDNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA29590)
#define MKFCCNOIDNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA29B80)
#define MKFCCNOIDNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA29B40)
#define MKFCCNOIDNB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA29690)
#define MKFCCNOIDNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA295C0)
#define MKFCCNOIDNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA298A0)
#define MKFCCNOIDNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA29900)

inline static constexpr unsigned int MKFCCNOIDNB_TypeDefinitionIndex = 26997;

	class MKFCCNOIDNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 MFHNPAODGGN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MKFCCNOIDNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKFCCNOIDNB*>**)UnitySDK::FromName("", "MKFCCNOIDNB")->GetStaticField(0x54D80);
		}

		// static const ::System::Object FIEMKPOELCD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKFCCNOIDNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKFCCNOIDNB*))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKFCCNOIDNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKFCCNOIDNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKFCCNOIDNB*>*(*)())((::PBYTE)hIl2Cpp + MKFCCNOIDNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKFCCNOIDNB* Clone()
		{
			return ((::MKFCCNOIDNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_CLONE_OFFSET))(this);
		}

		::System::UInt64 FFFDGCMLLAI()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKFCCNOIDNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKFCCNOIDNB*))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKFCCNOIDNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKFCCNOIDNB*))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKFCCNOIDNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
