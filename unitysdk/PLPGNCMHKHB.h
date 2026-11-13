#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLPGNCMHKHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLPGNCMHKHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201F3700)
#define PLPGNCMHKHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x201F3920)
#define PLPGNCMHKHB_CLONE_OFFSET UNITYSDK_OFFSET(0x201F3350)
#define PLPGNCMHKHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201F3320)
#define PLPGNCMHKHB_CTOR_OFFSET UNITYSDK_OFFSET(0x201F3310)
#define PLPGNCMHKHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201F3480)
#define PLPGNCMHKHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x201F33B0)
#define PLPGNCMHKHB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x201F33A0)
#define PLPGNCMHKHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201F35F0)
#define PLPGNCMHKHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201F32D0)
#define PLPGNCMHKHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201F37C0)
#define PLPGNCMHKHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201F3790)
#define PLPGNCMHKHB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x201F3390)
#define PLPGNCMHKHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201F3300)
#define PLPGNCMHKHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201F3620)
#define PLPGNCMHKHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x201F3680)

inline static constexpr unsigned int PLPGNCMHKHB_TypeDefinitionIndex = 34934;

	class PLPGNCMHKHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PLPGNCMHKHB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLPGNCMHKHB*>**)UnitySDK::FromName("", "PLPGNCMHKHB")->GetStaticField(0x48230);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLPGNCMHKHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLPGNCMHKHB*))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLPGNCMHKHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLPGNCMHKHB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLPGNCMHKHB*>*(*)())((::PBYTE)hIl2Cpp + PLPGNCMHKHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLPGNCMHKHB* Clone()
		{
			return ((::PLPGNCMHKHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLPGNCMHKHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLPGNCMHKHB*))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLPGNCMHKHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLPGNCMHKHB*))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLPGNCMHKHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
