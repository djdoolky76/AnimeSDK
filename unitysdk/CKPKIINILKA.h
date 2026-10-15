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

#define CKPKIINILKA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C30B0)
#define CKPKIINILKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C33C0)
#define CKPKIINILKA_CIOGAGDPMJN_OFFSET UNITYSDK_OFFSET(0x1E0C2BF0)
#define CKPKIINILKA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C2B70)
#define CKPKIINILKA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C2B10)
#define CKPKIINILKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C2B00)
#define CKPKIINILKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C2DA0)
#define CKPKIINILKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C2C20)
#define CKPKIINILKA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0C2C10)
#define CKPKIINILKA_FENEPOCNAPP_OFFSET UNITYSDK_OFFSET(0x1E0C2BE0)
#define CKPKIINILKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C2F20)
#define CKPKIINILKA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C2AC0)
#define CKPKIINILKA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0C3210)
#define CKPKIINILKA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0C3180)
#define CKPKIINILKA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0C2C00)
#define CKPKIINILKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C2AF0)
#define CKPKIINILKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C2F70)
#define CKPKIINILKA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C2FD0)

inline static constexpr unsigned int CKPKIINILKA_TypeDefinitionIndex = 32954;

	class CKPKIINILKA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HHAGOFKBFAP* ODAIMKHGFAB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CKPKIINILKA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKPKIINILKA*>**)UnitySDK::FromName("", "CKPKIINILKA")->GetStaticField(0x19C40);
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
