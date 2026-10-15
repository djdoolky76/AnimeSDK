#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEGELOIBGME;
class NEMIDPFEJFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HEGELOIBGME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E559610)
#define HEGELOIBGME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E559920)
#define HEGELOIBGME_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5590C0)
#define HEGELOIBGME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E559040)
#define HEGELOIBGME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E559030)
#define HEGELOIBGME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E559310)
#define HEGELOIBGME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E559190)
#define HEGELOIBGME_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E559160)
#define HEGELOIBGME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E559490)
#define HEGELOIBGME_IOBIJNKBMIN_OFFSET UNITYSDK_OFFSET(0x1E559180)
#define HEGELOIBGME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E558FF0)
#define HEGELOIBGME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E559770)
#define HEGELOIBGME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5596E0)
#define HEGELOIBGME_NJIDMPKENKB_OFFSET UNITYSDK_OFFSET(0x1E559170)
#define HEGELOIBGME_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E559150)
#define HEGELOIBGME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E559020)
#define HEGELOIBGME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5594D0)
#define HEGELOIBGME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E559530)

inline static constexpr unsigned int HEGELOIBGME_TypeDefinitionIndex = 31075;

	class HEGELOIBGME : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NEMIDPFEJFL* LLHLKDFMFMN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HEGELOIBGME")->GetStaticField(0x330F0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HEGELOIBGME_JJGHOBBFNJD_OFFSET))();
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
