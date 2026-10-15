#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEGELOIBGME;
class NEMIDPFEJFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HEGELOIBGME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E52C030)
#define HEGELOIBGME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52C340)
#define HEGELOIBGME_CLONE_OFFSET UNITYSDK_OFFSET(0x1E52BAE0)
#define HEGELOIBGME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E52BA60)
#define HEGELOIBGME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52BA50)
#define HEGELOIBGME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E52BD30)
#define HEGELOIBGME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E52BBB0)
#define HEGELOIBGME_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E52BB80)
#define HEGELOIBGME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E52BEB0)
#define HEGELOIBGME_IOBIJNKBMIN_OFFSET UNITYSDK_OFFSET(0x1E52BBA0)
#define HEGELOIBGME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E52BA10)
#define HEGELOIBGME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E52C190)
#define HEGELOIBGME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E52C100)
#define HEGELOIBGME_NJIDMPKENKB_OFFSET UNITYSDK_OFFSET(0x1E52BB90)
#define HEGELOIBGME_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E52BB70)
#define HEGELOIBGME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E52BA40)
#define HEGELOIBGME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E52BEF0)
#define HEGELOIBGME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E52BF50)

inline static constexpr unsigned int HEGELOIBGME_TypeDefinitionIndex = 31075;

	class HEGELOIBGME : public ::System::Object
	{
	public:
		::NEMIDPFEJFL* LLHLKDFMFMN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HEGELOIBGME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HEGELOIBGME*>**)UnitySDK::FromName("", "HEGELOIBGME")->GetStaticField(0x2CEA0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PDPIOIFCHBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGELOIBGME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HEGELOIBGME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEGELOIBGME*))((::PBYTE)hIl2Cpp + HEGELOIBGME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEGELOIBGME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HEGELOIBGME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HEGELOIBGME*>*(*)())((::PBYTE)hIl2Cpp + HEGELOIBGME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGELOIBGME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HEGELOIBGME* Clone()
		{
			return ((::HEGELOIBGME*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGELOIBGME_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGELOIBGME_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEGELOIBGME_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NEMIDPFEJFL* NJIDMPKENKB()
		{
			return ((::NEMIDPFEJFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGELOIBGME_NJIDMPKENKB_OFFSET))(this);
		}

		::System::Void IOBIJNKBMIN(::NEMIDPFEJFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMIDPFEJFL*))((::PBYTE)hIl2Cpp + HEGELOIBGME_IOBIJNKBMIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEGELOIBGME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HEGELOIBGME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEGELOIBGME*))((::PBYTE)hIl2Cpp + HEGELOIBGME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGELOIBGME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGELOIBGME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HEGELOIBGME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGELOIBGME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HEGELOIBGME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEGELOIBGME*))((::PBYTE)hIl2Cpp + HEGELOIBGME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HEGELOIBGME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
