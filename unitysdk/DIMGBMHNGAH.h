#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPPKGHJGOCC.h"
#include "unitysdk/System/Object.h"
class DIMGBMHNGAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define DIMGBMHNGAH_AJOPEKGIJFO_OFFSET UNITYSDK_OFFSET(0x1E1947A0)
#define DIMGBMHNGAH_BKMJJABNDMA_OFFSET UNITYSDK_OFFSET(0x1E1947B0)
#define DIMGBMHNGAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E194CC0)
#define DIMGBMHNGAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E195060)
#define DIMGBMHNGAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E194700)
#define DIMGBMHNGAH_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E1947E0)
#define DIMGBMHNGAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E194690)
#define DIMGBMHNGAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E194680)
#define DIMGBMHNGAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E194870)
#define DIMGBMHNGAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E194800)
#define DIMGBMHNGAH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1947D0)
#define DIMGBMHNGAH_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E1947F0)
#define DIMGBMHNGAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E194A10)
#define DIMGBMHNGAH_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1E194790)
#define DIMGBMHNGAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E194640)
#define DIMGBMHNGAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E194F70)
#define DIMGBMHNGAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E194EC0)
#define DIMGBMHNGAH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1947C0)
#define DIMGBMHNGAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E194670)
#define DIMGBMHNGAH_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1E194780)
#define DIMGBMHNGAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E194AB0)
#define DIMGBMHNGAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E194B10)

inline static constexpr unsigned int DIMGBMHNGAH_TypeDefinitionIndex = 30039;

	class DIMGBMHNGAH : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LAPNIOGIGPL; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::LPPKGHJGOCC ADOPAOCMEOG; // 0x28
		static ::Google::Protobuf::MessageParser_1<::DIMGBMHNGAH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DIMGBMHNGAH*>**)UnitySDK::FromName("", "DIMGBMHNGAH")->GetStaticField(0x31B20);
		}

		// static const ::System::Object ODHBDFKGPJO; // 0x0
		// static const ::System::Object ELFGGGHJCFC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIMGBMHNGAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIMGBMHNGAH*))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIMGBMHNGAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DIMGBMHNGAH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DIMGBMHNGAH*>*(*)())((::PBYTE)hIl2Cpp + DIMGBMHNGAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIMGBMHNGAH* Clone()
		{
			return ((::DIMGBMHNGAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_CLONE_OFFSET))(this);
		}

		::System::UInt32 PKFKJCPLLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_PKFKJCPLLOM_OFFSET))(this);
		}

		::System::Void JJDKOEONGHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_JJDKOEONGHO_OFFSET))(this, a1);
		}

		::LPPKGHJGOCC AJOPEKGIJFO()
		{
			return ((::LPPKGHJGOCC(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_AJOPEKGIJFO_OFFSET))(this);
		}

		::System::Void BKMJJABNDMA(::LPPKGHJGOCC a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPPKGHJGOCC))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_BKMJJABNDMA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIMGBMHNGAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIMGBMHNGAH*))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIMGBMHNGAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIMGBMHNGAH*))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
