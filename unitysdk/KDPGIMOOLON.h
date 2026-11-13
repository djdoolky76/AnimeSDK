#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDPGIMOOLON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDPGIMOOLON_BBKJJFNIDCB_OFFSET UNITYSDK_OFFSET(0x1F99A560)
#define KDPGIMOOLON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F99ABD0)
#define KDPGIMOOLON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F99AFC0)
#define KDPGIMOOLON_CEDGILKMKAJ_OFFSET UNITYSDK_OFFSET(0x1F99A580)
#define KDPGIMOOLON_CLONE_OFFSET UNITYSDK_OFFSET(0x1F99A4F0)
#define KDPGIMOOLON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F99A380)
#define KDPGIMOOLON_CTOR_OFFSET UNITYSDK_OFFSET(0x1F99A2A0)
#define KDPGIMOOLON_ECKHFFNPDKF_OFFSET UNITYSDK_OFFSET(0x1F99A5A0)
#define KDPGIMOOLON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F99A610)
#define KDPGIMOOLON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F99A5B0)
#define KDPGIMOOLON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F99A6D0)
#define KDPGIMOOLON_GPEBPBGPHIA_OFFSET UNITYSDK_OFFSET(0x1F99A540)
#define KDPGIMOOLON_IDAMGMKBLJM_OFFSET UNITYSDK_OFFSET(0x1F99A590)
#define KDPGIMOOLON_JHABOBODCKK_OFFSET UNITYSDK_OFFSET(0x1F99A550)
#define KDPGIMOOLON_JHIPOABLEFN_OFFSET UNITYSDK_OFFSET(0x1F99A570)
#define KDPGIMOOLON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F99A230)
#define KDPGIMOOLON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F99AE10)
#define KDPGIMOOLON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F99AD80)
#define KDPGIMOOLON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F99A290)
#define KDPGIMOOLON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F99A960)
#define KDPGIMOOLON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F99A9C0)

inline static constexpr unsigned int KDPGIMOOLON_TypeDefinitionIndex = 32044;

	class KDPGIMOOLON : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OOGOLKCPGJP; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHEIEPDBPCE; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CMCCCBJKNLH; // 0x28
		::System::Boolean PKOJJDDADLO; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 LGEOEHMEGKN; // 0x34
		static ::Google::Protobuf::MessageParser_1<::KDPGIMOOLON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDPGIMOOLON*>**)UnitySDK::FromName("", "KDPGIMOOLON")->GetStaticField(0x9A50);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CLNEJGCMCOK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KDPGIMOOLON")->GetStaticField(0x9A58);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BCPGJJPAFGO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KDPGIMOOLON")->GetStaticField(0x9A60);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OMJNLIBEEBP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KDPGIMOOLON")->GetStaticField(0x9A68);
		}

		// static const ::System::Object HICACHOOPBN; // 0x0
		// static const ::System::Object EFKPFDPNMHA; // 0x0
		// static const ::System::Object LCLCBCNBDHB; // 0x0
		// static const ::System::Object OEKOIBEOMLG; // 0x0
		// static const ::System::Object DGKOBHIACHK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDPGIMOOLON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDPGIMOOLON*))((::PBYTE)hIl2Cpp + KDPGIMOOLON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDPGIMOOLON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KDPGIMOOLON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KDPGIMOOLON*>*(*)())((::PBYTE)hIl2Cpp + KDPGIMOOLON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDPGIMOOLON* Clone()
		{
			return ((::KDPGIMOOLON*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GPEBPBGPHIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_GPEBPBGPHIA_OFFSET))(this);
		}

		::System::UInt32 JHABOBODCKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_JHABOBODCKK_OFFSET))(this);
		}

		::System::Void BBKJJFNIDCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDPGIMOOLON_BBKJJFNIDCB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JHIPOABLEFN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_JHIPOABLEFN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CEDGILKMKAJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_CEDGILKMKAJ_OFFSET))(this);
		}

		::System::Boolean IDAMGMKBLJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_IDAMGMKBLJM_OFFSET))(this);
		}

		::System::Void ECKHFFNPDKF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDPGIMOOLON_ECKHFFNPDKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDPGIMOOLON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDPGIMOOLON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDPGIMOOLON*))((::PBYTE)hIl2Cpp + KDPGIMOOLON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDPGIMOOLON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDPGIMOOLON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDPGIMOOLON*))((::PBYTE)hIl2Cpp + KDPGIMOOLON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDPGIMOOLON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
