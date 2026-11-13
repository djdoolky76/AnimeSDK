#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPKIINILKA;
class HHAGOFKBFAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKPKIINILKA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2059D300)
#define CKPKIINILKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x2059D610)
#define CKPKIINILKA_CIOGAGDPMJN_OFFSET UNITYSDK_OFFSET(0x2059CE70)
#define CKPKIINILKA_CLONE_OFFSET UNITYSDK_OFFSET(0x2059CDE0)
#define CKPKIINILKA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2059CD90)
#define CKPKIINILKA_CTOR_OFFSET UNITYSDK_OFFSET(0x2059CD80)
#define CKPKIINILKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2059D000)
#define CKPKIINILKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2059CE80)
#define CKPKIINILKA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x2059CE50)
#define CKPKIINILKA_FENEPOCNAPP_OFFSET UNITYSDK_OFFSET(0x2059CE60)
#define CKPKIINILKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2059D180)
#define CKPKIINILKA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2059CD40)
#define CKPKIINILKA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2059D460)
#define CKPKIINILKA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2059D3D0)
#define CKPKIINILKA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x2059CE40)
#define CKPKIINILKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2059CD70)
#define CKPKIINILKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2059D1C0)
#define CKPKIINILKA_WRITETO_OFFSET UNITYSDK_OFFSET(0x2059D220)

inline static constexpr unsigned int CKPKIINILKA_TypeDefinitionIndex = 33869;

	class CKPKIINILKA : public ::System::Object
	{
	public:
		::HHAGOFKBFAP* ODAIMKHGFAB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CKPKIINILKA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKPKIINILKA*>**)UnitySDK::FromName("", "CKPKIINILKA")->GetStaticField(0x12EF0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LNNFMNLEBGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKPKIINILKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPKIINILKA*))((::PBYTE)hIl2Cpp + CKPKIINILKA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPKIINILKA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKPKIINILKA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKPKIINILKA*>*(*)())((::PBYTE)hIl2Cpp + CKPKIINILKA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKPKIINILKA* Clone()
		{
			return ((::CKPKIINILKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKPKIINILKA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::HHAGOFKBFAP* FENEPOCNAPP()
		{
			return ((::HHAGOFKBFAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_FENEPOCNAPP_OFFSET))(this);
		}

		::System::Void CIOGAGDPMJN(::HHAGOFKBFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHAGOFKBFAP*))((::PBYTE)hIl2Cpp + CKPKIINILKA_CIOGAGDPMJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKPKIINILKA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKPKIINILKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKPKIINILKA*))((::PBYTE)hIl2Cpp + CKPKIINILKA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKPKIINILKA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKPKIINILKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPKIINILKA*))((::PBYTE)hIl2Cpp + CKPKIINILKA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKPKIINILKA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
