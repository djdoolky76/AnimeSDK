#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJODDECFHMC;
class HMAAICNBKCI;
class LEJFIEPMMGG;
class OMJGKNJKHCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJODDECFHMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1D2AC0)
#define DJODDECFHMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D2FB0)
#define DJODDECFHMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1D2580)
#define DJODDECFHMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1D2430)
#define DJODDECFHMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D23D0)
#define DJODDECFHMC_EAPIKAKIFGN_OFFSET UNITYSDK_OFFSET(0x1E1D25B0)
#define DJODDECFHMC_EBLGGODDKAD_OFFSET UNITYSDK_OFFSET(0x1E1D25C0)
#define DJODDECFHMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1D2620)
#define DJODDECFHMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1D25F0)
#define DJODDECFHMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1D2820)
#define DJODDECFHMC_HJKKCCNMLJF_OFFSET UNITYSDK_OFFSET(0x1E1D25E0)
#define DJODDECFHMC_IBLNOBGIGJE_OFFSET UNITYSDK_OFFSET(0x1E1D25D0)
#define DJODDECFHMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1D2390)
#define DJODDECFHMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1D2D60)
#define DJODDECFHMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1D2BD0)
#define DJODDECFHMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1D23C0)
#define DJODDECFHMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1D28F0)
#define DJODDECFHMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1D2950)

	class DJODDECFHMC : public ::System::Object
	{
	public:
		::HMAAICNBKCI* IPKDJAPPOGG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::OMJGKNJKHCH*>* NICPOOMLFMK; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::LEJFIEPMMGG*>* BPHOPJNPLKH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DJODDECFHMC")->GetStaticField(0x39EA0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DHKLCJBCBKG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DJODDECFHMC")->GetStaticField(0x39EA8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_POPGJBDHPIH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DJODDECFHMC")->GetStaticField(0x39EB0);
		}

		// static const ::System::Object PAGFCHEGMFN; // 0x0
		// static const ::System::Object IMPGOAJADJI; // 0x0
		// static const ::System::Object DFHNEIGALME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJODDECFHMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJODDECFHMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJODDECFHMC*))((::PBYTE)hIl2Cpp + DJODDECFHMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJODDECFHMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DJODDECFHMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJODDECFHMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJODDECFHMC* Clone()
		{
			return ((::DJODDECFHMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJODDECFHMC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LEJFIEPMMGG*>* EAPIKAKIFGN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LEJFIEPMMGG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJODDECFHMC_EAPIKAKIFGN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OMJGKNJKHCH*>* EBLGGODDKAD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OMJGKNJKHCH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJODDECFHMC_EBLGGODDKAD_OFFSET))(this);
		}

		::HMAAICNBKCI* IBLNOBGIGJE()
		{
			return ((::HMAAICNBKCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJODDECFHMC_IBLNOBGIGJE_OFFSET))(this);
		}

		::System::Void HJKKCCNMLJF(::HMAAICNBKCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMAAICNBKCI*))((::PBYTE)hIl2Cpp + DJODDECFHMC_HJKKCCNMLJF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJODDECFHMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJODDECFHMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJODDECFHMC*))((::PBYTE)hIl2Cpp + DJODDECFHMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJODDECFHMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJODDECFHMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJODDECFHMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJODDECFHMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJODDECFHMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJODDECFHMC*))((::PBYTE)hIl2Cpp + DJODDECFHMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJODDECFHMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
