#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHHFAMDCDPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DHHFAMDCDPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1B5820)
#define DHHFAMDCDPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B5A40)
#define DHHFAMDCDPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1B5470)
#define DHHFAMDCDPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1B5440)
#define DHHFAMDCDPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B5430)
#define DHHFAMDCDPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1B55A0)
#define DHHFAMDCDPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1B54D0)
#define DHHFAMDCDPK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1B54C0)
#define DHHFAMDCDPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1B5710)
#define DHHFAMDCDPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1B53F0)
#define DHHFAMDCDPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1B58E0)
#define DHHFAMDCDPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1B58B0)
#define DHHFAMDCDPK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1B54B0)
#define DHHFAMDCDPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1B5420)
#define DHHFAMDCDPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1B5740)
#define DHHFAMDCDPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1B57A0)

inline static constexpr unsigned int DHHFAMDCDPK_TypeDefinitionIndex = 31820;

	class DHHFAMDCDPK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DHHFAMDCDPK")->GetStaticField(0x35160);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DHHFAMDCDPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHHFAMDCDPK*))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHHFAMDCDPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DHHFAMDCDPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DHHFAMDCDPK* Clone()
		{
			return ((::DHHFAMDCDPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DHHFAMDCDPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHHFAMDCDPK*))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DHHFAMDCDPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHHFAMDCDPK*))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DHHFAMDCDPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
