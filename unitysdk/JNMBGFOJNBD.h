#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNMBGFOJNBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JNMBGFOJNBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E79A0C0)
#define JNMBGFOJNBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79A390)
#define JNMBGFOJNBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E799D10)
#define JNMBGFOJNBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E799CE0)
#define JNMBGFOJNBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E799CD0)
#define JNMBGFOJNBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E799E80)
#define JNMBGFOJNBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E799DA0)
#define JNMBGFOJNBD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E799D70)
#define JNMBGFOJNBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E799F50)
#define JNMBGFOJNBD_HPGLDOOFONJ_OFFSET UNITYSDK_OFFSET(0x1E799D80)
#define JNMBGFOJNBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E799C90)
#define JNMBGFOJNBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E79A210)
#define JNMBGFOJNBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E79A1D0)
#define JNMBGFOJNBD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E799D60)
#define JNMBGFOJNBD_PAJHAHFHLEI_OFFSET UNITYSDK_OFFSET(0x1E799D90)
#define JNMBGFOJNBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E799CC0)
#define JNMBGFOJNBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E799F80)
#define JNMBGFOJNBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E799FE0)

inline static constexpr unsigned int JNMBGFOJNBD_TypeDefinitionIndex = 29781;

	class JNMBGFOJNBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 IOJPFPKAAOP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JNMBGFOJNBD")->GetStaticField(0x6CA10);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBNBMOHHABN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JNMBGFOJNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNMBGFOJNBD*))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNMBGFOJNBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JNMBGFOJNBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JNMBGFOJNBD* Clone()
		{
			return ((::JNMBGFOJNBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 HPGLDOOFONJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_HPGLDOOFONJ_OFFSET))(this);
		}

		::System::Void PAJHAHFHLEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_PAJHAHFHLEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JNMBGFOJNBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JNMBGFOJNBD*))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JNMBGFOJNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNMBGFOJNBD*))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JNMBGFOJNBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
