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

#define DIMGBMHNGAH_AJOPEKGIJFO_OFFSET UNITYSDK_OFFSET(0x1F49D860)
#define DIMGBMHNGAH_BKMJJABNDMA_OFFSET UNITYSDK_OFFSET(0x1F49D870)
#define DIMGBMHNGAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F49DDC0)
#define DIMGBMHNGAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F49E170)
#define DIMGBMHNGAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F49D770)
#define DIMGBMHNGAH_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1F49D800)
#define DIMGBMHNGAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F49D6F0)
#define DIMGBMHNGAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49D6E0)
#define DIMGBMHNGAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F49D980)
#define DIMGBMHNGAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F49D880)
#define DIMGBMHNGAH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F49D830)
#define DIMGBMHNGAH_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1F49D810)
#define DIMGBMHNGAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F49DB10)
#define DIMGBMHNGAH_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1F49D850)
#define DIMGBMHNGAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F49D6A0)
#define DIMGBMHNGAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F49E080)
#define DIMGBMHNGAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F49DFD0)
#define DIMGBMHNGAH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F49D820)
#define DIMGBMHNGAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F49D6D0)
#define DIMGBMHNGAH_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1F49D840)
#define DIMGBMHNGAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F49DBB0)
#define DIMGBMHNGAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F49DC10)

inline static constexpr unsigned int DIMGBMHNGAH_TypeDefinitionIndex = 30937;

	class DIMGBMHNGAH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::LPPKGHJGOCC ADOPAOCMEOG; // 0x20
		::System::UInt32 LAPNIOGIGPL; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::DIMGBMHNGAH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DIMGBMHNGAH*>**)UnitySDK::FromName("", "DIMGBMHNGAH")->GetStaticField(0x32C50);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ODHBDFKGPJO; // 0x0
		// static const ::System::Object ELFGGGHJCFC; // 0x0
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

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMGBMHNGAH_FAEKBILGPCO_OFFSET))(this, a1);
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
