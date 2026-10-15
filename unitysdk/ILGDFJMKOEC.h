#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKNBLADLAAE;
class ILGDFJMKOEC;
class NEMIDPFEJFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILGDFJMKOEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6ACCA0)
#define ILGDFJMKOEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AD150)
#define ILGDFJMKOEC_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1E6AC7A0)
#define ILGDFJMKOEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6AC750)
#define ILGDFJMKOEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6AC630)
#define ILGDFJMKOEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AC5E0)
#define ILGDFJMKOEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6AC840)
#define ILGDFJMKOEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6AC810)
#define ILGDFJMKOEC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6AC7C0)
#define ILGDFJMKOEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6AC9A0)
#define ILGDFJMKOEC_IOBIJNKBMIN_OFFSET UNITYSDK_OFFSET(0x1E6AC7E0)
#define ILGDFJMKOEC_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E6AC7F0)
#define ILGDFJMKOEC_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1E6AC790)
#define ILGDFJMKOEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6AC5A0)
#define ILGDFJMKOEC_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E6AC800)
#define ILGDFJMKOEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6AD000)
#define ILGDFJMKOEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6ACEF0)
#define ILGDFJMKOEC_NJIDMPKENKB_OFFSET UNITYSDK_OFFSET(0x1E6AC7D0)
#define ILGDFJMKOEC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6AC7B0)
#define ILGDFJMKOEC_OBMBAIAKHNG_OFFSET UNITYSDK_OFFSET(0x1E6AC780)
#define ILGDFJMKOEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6AC5D0)
#define ILGDFJMKOEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6ACA20)
#define ILGDFJMKOEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6ACA80)

	class ILGDFJMKOEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NEMIDPFEJFL* LLHLKDFMFMN; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::HKNBLADLAAE*>* PLMILDJLPGG; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 OGCMNCBOEJG; // 0x2C
		::System::UInt32 KBBFPCGLDCN; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ILGDFJMKOEC")->GetStaticField(0x562D0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MPAILFLAEKB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ILGDFJMKOEC")->GetStaticField(0x562D8);
		}

		// static const ::System::Object FLBMAIOECAP; // 0x0
		// static const ::System::Object HDGKLMKGNND; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PDPIOIFCHBK; // 0x0
		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILGDFJMKOEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILGDFJMKOEC*))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILGDFJMKOEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ILGDFJMKOEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILGDFJMKOEC* Clone()
		{
			return ((::ILGDFJMKOEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HKNBLADLAAE*>* OBMBAIAKHNG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HKNBLADLAAE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_OBMBAIAKHNG_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NEMIDPFEJFL* NJIDMPKENKB()
		{
			return ((::NEMIDPFEJFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_NJIDMPKENKB_OFFSET))(this);
		}

		::System::Void IOBIJNKBMIN(::NEMIDPFEJFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEMIDPFEJFL*))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_IOBIJNKBMIN_OFFSET))(this, a1);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILGDFJMKOEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILGDFJMKOEC*))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILGDFJMKOEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILGDFJMKOEC*))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILGDFJMKOEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
