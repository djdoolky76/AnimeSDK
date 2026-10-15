#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPKIINILKA;
class HHAGOFKBFAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKPKIINILKA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0F0600)
#define CKPKIINILKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F0910)
#define CKPKIINILKA_CIOGAGDPMJN_OFFSET UNITYSDK_OFFSET(0x1E0F0140)
#define CKPKIINILKA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0F00C0)
#define CKPKIINILKA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0F0060)
#define CKPKIINILKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F0050)
#define CKPKIINILKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0F02F0)
#define CKPKIINILKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0F0170)
#define CKPKIINILKA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0F0160)
#define CKPKIINILKA_FENEPOCNAPP_OFFSET UNITYSDK_OFFSET(0x1E0F0130)
#define CKPKIINILKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0F0470)
#define CKPKIINILKA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0F0010)
#define CKPKIINILKA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0F0760)
#define CKPKIINILKA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0F06D0)
#define CKPKIINILKA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0F0150)
#define CKPKIINILKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0F0040)
#define CKPKIINILKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0F04C0)
#define CKPKIINILKA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0F0520)

inline static constexpr unsigned int CKPKIINILKA_TypeDefinitionIndex = 32954;

	class CKPKIINILKA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HHAGOFKBFAP* ODAIMKHGFAB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CKPKIINILKA")->GetStaticField(0x1BCC0);
		}

		// static const ::System::Object LNNFMNLEBGM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CKPKIINILKA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKPKIINILKA* Clone()
		{
			return ((::CKPKIINILKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_CLONE_OFFSET))(this);
		}

		::HHAGOFKBFAP* FENEPOCNAPP()
		{
			return ((::HHAGOFKBFAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_FENEPOCNAPP_OFFSET))(this);
		}

		::System::Void CIOGAGDPMJN(::HHAGOFKBFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHAGOFKBFAP*))((::PBYTE)hIl2Cpp + CKPKIINILKA_CIOGAGDPMJN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKPKIINILKA_FAEKBILGPCO_OFFSET))(this, a1);
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
