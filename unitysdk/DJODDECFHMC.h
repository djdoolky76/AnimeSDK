#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJODDECFHMC;
class HMAAICNBKCI;
class LEJFIEPMMGG;
class OMJGKNJKHCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJODDECFHMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1A54F0)
#define DJODDECFHMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A59E0)
#define DJODDECFHMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1A4FB0)
#define DJODDECFHMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1A4E60)
#define DJODDECFHMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4E00)
#define DJODDECFHMC_EAPIKAKIFGN_OFFSET UNITYSDK_OFFSET(0x1E1A4FE0)
#define DJODDECFHMC_EBLGGODDKAD_OFFSET UNITYSDK_OFFSET(0x1E1A4FF0)
#define DJODDECFHMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1A5050)
#define DJODDECFHMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1A5020)
#define DJODDECFHMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1A5250)
#define DJODDECFHMC_HJKKCCNMLJF_OFFSET UNITYSDK_OFFSET(0x1E1A5010)
#define DJODDECFHMC_IBLNOBGIGJE_OFFSET UNITYSDK_OFFSET(0x1E1A5000)
#define DJODDECFHMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1A4DC0)
#define DJODDECFHMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1A5790)
#define DJODDECFHMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1A5600)
#define DJODDECFHMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4DF0)
#define DJODDECFHMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1A5320)
#define DJODDECFHMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1A5380)

inline static constexpr unsigned int DJODDECFHMC_TypeDefinitionIndex = 33028;

	class DJODDECFHMC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LEJFIEPMMGG*>* BPHOPJNPLKH; // 0x10
		::HMAAICNBKCI* IPKDJAPPOGG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::OMJGKNJKHCH*>* NICPOOMLFMK; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::OMJGKNJKHCH*>** StaticGet_POPGJBDHPIH()
		{
			return (::Google::Protobuf::FieldCodec_1<::OMJGKNJKHCH*>**)UnitySDK::FromName("", "DJODDECFHMC")->GetStaticField(0x33760);
		}

		static ::Google::Protobuf::MessageParser_1<::DJODDECFHMC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DJODDECFHMC*>**)UnitySDK::FromName("", "DJODDECFHMC")->GetStaticField(0x33768);
		}

		static ::Google::Protobuf::FieldCodec_1<::LEJFIEPMMGG*>** StaticGet_DHKLCJBCBKG()
		{
			return (::Google::Protobuf::FieldCodec_1<::LEJFIEPMMGG*>**)UnitySDK::FromName("", "DJODDECFHMC")->GetStaticField(0x33770);
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

		static ::Google::Protobuf::MessageParser_1<::DJODDECFHMC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DJODDECFHMC*>*(*)())((::PBYTE)hIl2Cpp + DJODDECFHMC_JJGHOBBFNJD_OFFSET))();
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
