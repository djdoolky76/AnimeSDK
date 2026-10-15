#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOJDKLCHCKG;
class LMLNNHKJEIP;
class PKBJOGHCFOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKBJOGHCFOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF86730)
#define PKBJOGHCFOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF86C00)
#define PKBJOGHCFOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF86250)
#define PKBJOGHCFOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF86130)
#define PKBJOGHCFOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF860E0)
#define PKBJOGHCFOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF86300)
#define PKBJOGHCFOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF862D0)
#define PKBJOGHCFOA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF862B0)
#define PKBJOGHCFOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF864E0)
#define PKBJOGHCFOA_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1DF862C0)
#define PKBJOGHCFOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF860A0)
#define PKBJOGHCFOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF869B0)
#define PKBJOGHCFOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF86880)
#define PKBJOGHCFOA_MLJCADDHPNK_OFFSET UNITYSDK_OFFSET(0x1DF86280)
#define PKBJOGHCFOA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF862A0)
#define PKBJOGHCFOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF860D0)
#define PKBJOGHCFOA_PJHFHFLGBGC_OFFSET UNITYSDK_OFFSET(0x1DF86290)
#define PKBJOGHCFOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF86570)
#define PKBJOGHCFOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF865D0)

	class PKBJOGHCFOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* BDGHBBABABH; // 0x18
		::FOJDKLCHCKG* KNNNFHBBKKF; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PKBJOGHCFOA")->GetStaticField(0x482E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PKBJOGHCFOA")->GetStaticField(0x482E8);
		}

		// static const ::System::Object LPDBLAAEICI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OIDEIBKKMCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKBJOGHCFOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBJOGHCFOA*))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKBJOGHCFOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PKBJOGHCFOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKBJOGHCFOA* Clone()
		{
			return ((::PKBJOGHCFOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_CLONE_OFFSET))(this);
		}

		::FOJDKLCHCKG* MLJCADDHPNK()
		{
			return ((::FOJDKLCHCKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_MLJCADDHPNK_OFFSET))(this);
		}

		::System::Void PJHFHFLGBGC(::FOJDKLCHCKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOJDKLCHCKG*))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_PJHFHFLGBGC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* GOAHOGGOLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_GOAHOGGOLOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKBJOGHCFOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKBJOGHCFOA*))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKBJOGHCFOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBJOGHCFOA*))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKBJOGHCFOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
