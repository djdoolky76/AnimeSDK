#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLNGEPOOMJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLNGEPOOMJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA2CCE0)
#define NLNGEPOOMJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA2CF00)
#define NLNGEPOOMJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA2C930)
#define NLNGEPOOMJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA2C900)
#define NLNGEPOOMJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA2C8F0)
#define NLNGEPOOMJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA2CA60)
#define NLNGEPOOMJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA2C990)
#define NLNGEPOOMJJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FA2C980)
#define NLNGEPOOMJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA2CBD0)
#define NLNGEPOOMJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA2C8B0)
#define NLNGEPOOMJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA2CDA0)
#define NLNGEPOOMJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA2CD70)
#define NLNGEPOOMJJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FA2C970)
#define NLNGEPOOMJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA2C8E0)
#define NLNGEPOOMJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA2CC00)
#define NLNGEPOOMJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA2CC60)

inline static constexpr unsigned int NLNGEPOOMJJ_TypeDefinitionIndex = 30580;

	class NLNGEPOOMJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NLNGEPOOMJJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NLNGEPOOMJJ*>**)UnitySDK::FromName("", "NLNGEPOOMJJ")->GetStaticField(0x68F50);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLNGEPOOMJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLNGEPOOMJJ*))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NLNGEPOOMJJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NLNGEPOOMJJ*>*(*)())((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLNGEPOOMJJ* Clone()
		{
			return ((::NLNGEPOOMJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLNGEPOOMJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLNGEPOOMJJ*))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLNGEPOOMJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLNGEPOOMJJ*))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
