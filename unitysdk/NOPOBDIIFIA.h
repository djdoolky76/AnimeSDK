#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOPOBDIIFIA;
class OMCGJJCJIKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOPOBDIIFIA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB757C0)
#define NOPOBDIIFIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB75B30)
#define NOPOBDIIFIA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB75310)
#define NOPOBDIIFIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB75280)
#define NOPOBDIIFIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB75240)
#define NOPOBDIIFIA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB754C0)
#define NOPOBDIIFIA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB75370)
#define NOPOBDIIFIA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FB75350)
#define NOPOBDIIFIA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB755F0)
#define NOPOBDIIFIA_IJGHPHNPJHK_OFFSET UNITYSDK_OFFSET(0x1FB75360)
#define NOPOBDIIFIA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB75200)
#define NOPOBDIIFIA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB75970)
#define NOPOBDIIFIA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB758D0)
#define NOPOBDIIFIA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FB75340)
#define NOPOBDIIFIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB75230)
#define NOPOBDIIFIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB75660)
#define NOPOBDIIFIA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB756C0)

inline static constexpr unsigned int NOPOBDIIFIA_TypeDefinitionIndex = 35075;

	class NOPOBDIIFIA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OMCGJJCJIKB*>* LAKFONDJFHF; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::OMCGJJCJIKB*>** StaticGet_CJGDEICFFIK()
		{
			return (::Google::Protobuf::FieldCodec_1<::OMCGJJCJIKB*>**)UnitySDK::FromName("", "NOPOBDIIFIA")->GetStaticField(0x53F80);
		}

		static ::Google::Protobuf::MessageParser_1<::NOPOBDIIFIA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NOPOBDIIFIA*>**)UnitySDK::FromName("", "NOPOBDIIFIA")->GetStaticField(0x53F88);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JKHLMGEHBBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOPOBDIIFIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOPOBDIIFIA*))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOPOBDIIFIA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NOPOBDIIFIA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NOPOBDIIFIA*>*(*)())((::PBYTE)hIl2Cpp + NOPOBDIIFIA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOPOBDIIFIA* Clone()
		{
			return ((::NOPOBDIIFIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OMCGJJCJIKB*>* IJGHPHNPJHK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OMCGJJCJIKB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_IJGHPHNPJHK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOPOBDIIFIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOPOBDIIFIA*))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOPOBDIIFIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOPOBDIIFIA*))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOPOBDIIFIA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
