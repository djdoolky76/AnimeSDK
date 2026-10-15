#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLHGFHMEFMB;
class EIDFCGLODFB;
class ILMFJKCGBCK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLHGFHMEFMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF61900)
#define BLHGFHMEFMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF61E10)
#define BLHGFHMEFMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF61420)
#define BLHGFHMEFMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF612F0)
#define BLHGFHMEFMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF612A0)
#define BLHGFHMEFMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF614D0)
#define BLHGFHMEFMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF614A0)
#define BLHGFHMEFMB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF61460)
#define BLHGFHMEFMB_FGFLENOAEMG_OFFSET UNITYSDK_OFFSET(0x1DF61490)
#define BLHGFHMEFMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF616B0)
#define BLHGFHMEFMB_IDJMCBCFMLH_OFFSET UNITYSDK_OFFSET(0x1DF61470)
#define BLHGFHMEFMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF61260)
#define BLHGFHMEFMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF61B90)
#define BLHGFHMEFMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF61A40)
#define BLHGFHMEFMB_NFKPBJEPJPI_OFFSET UNITYSDK_OFFSET(0x1DF61480)
#define BLHGFHMEFMB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF61450)
#define BLHGFHMEFMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF61290)
#define BLHGFHMEFMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF61730)
#define BLHGFHMEFMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF61790)

	class BLHGFHMEFMB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>* MHNJLPALPBC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::ILMFJKCGBCK* CDAMOJGCPGO; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_PPHAPIIDPBA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BLHGFHMEFMB")->GetStaticField(0x4CAA0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BLHGFHMEFMB")->GetStaticField(0x4CAA8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DCBGHOGCLMO; // 0x0
		// static const ::System::Object NNKOJKJMOIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLHGFHMEFMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLHGFHMEFMB*))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLHGFHMEFMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BLHGFHMEFMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLHGFHMEFMB* Clone()
		{
			return ((::BLHGFHMEFMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::ILMFJKCGBCK* IDJMCBCFMLH()
		{
			return ((::ILMFJKCGBCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_IDJMCBCFMLH_OFFSET))(this);
		}

		::System::Void NFKPBJEPJPI(::ILMFJKCGBCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILMFJKCGBCK*))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_NFKPBJEPJPI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>* FGFLENOAEMG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EIDFCGLODFB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_FGFLENOAEMG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLHGFHMEFMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLHGFHMEFMB*))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLHGFHMEFMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLHGFHMEFMB*))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLHGFHMEFMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
