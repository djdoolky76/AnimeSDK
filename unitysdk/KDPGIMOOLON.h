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

#define KDPGIMOOLON_BBKJJFNIDCB_OFFSET UNITYSDK_OFFSET(0x1E8079B0)
#define KDPGIMOOLON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E808040)
#define KDPGIMOOLON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E808410)
#define KDPGIMOOLON_CEDGILKMKAJ_OFFSET UNITYSDK_OFFSET(0x1E807A00)
#define KDPGIMOOLON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E807950)
#define KDPGIMOOLON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8077E0)
#define KDPGIMOOLON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E807700)
#define KDPGIMOOLON_ECKHFFNPDKF_OFFSET UNITYSDK_OFFSET(0x1E8079E0)
#define KDPGIMOOLON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E807A70)
#define KDPGIMOOLON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E807A10)
#define KDPGIMOOLON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E807B30)
#define KDPGIMOOLON_GPEBPBGPHIA_OFFSET UNITYSDK_OFFSET(0x1E8079F0)
#define KDPGIMOOLON_IDAMGMKBLJM_OFFSET UNITYSDK_OFFSET(0x1E8079D0)
#define KDPGIMOOLON_JHABOBODCKK_OFFSET UNITYSDK_OFFSET(0x1E8079A0)
#define KDPGIMOOLON_JHIPOABLEFN_OFFSET UNITYSDK_OFFSET(0x1E8079C0)
#define KDPGIMOOLON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E807690)
#define KDPGIMOOLON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E808260)
#define KDPGIMOOLON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8081D0)
#define KDPGIMOOLON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8076F0)
#define KDPGIMOOLON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E807DD0)
#define KDPGIMOOLON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E807E30)

inline static constexpr unsigned int KDPGIMOOLON_TypeDefinitionIndex = 31131;

	class KDPGIMOOLON : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OOGOLKCPGJP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHEIEPDBPCE; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CMCCCBJKNLH; // 0x28
		::System::UInt32 LGEOEHMEGKN; // 0x30
		::System::Boolean PKOJJDDADLO; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CLNEJGCMCOK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KDPGIMOOLON")->GetStaticField(0x11660);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BCPGJJPAFGO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KDPGIMOOLON")->GetStaticField(0x11668);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OMJNLIBEEBP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KDPGIMOOLON")->GetStaticField(0x11670);
		}

		static ::Google::Protobuf::MessageParser_1<::KDPGIMOOLON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDPGIMOOLON*>**)UnitySDK::FromName("", "KDPGIMOOLON")->GetStaticField(0x11678);
		}

		// static const ::System::Object EFKPFDPNMHA; // 0x0
		// static const ::System::Object LCLCBCNBDHB; // 0x0
		// static const ::System::Object DGKOBHIACHK; // 0x0
		// static const ::System::Object HICACHOOPBN; // 0x0
		// static const ::System::Object OEKOIBEOMLG; // 0x0
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

		::System::Boolean IDAMGMKBLJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_IDAMGMKBLJM_OFFSET))(this);
		}

		::System::Void ECKHFFNPDKF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDPGIMOOLON_ECKHFFNPDKF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GPEBPBGPHIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_GPEBPBGPHIA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CEDGILKMKAJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPGIMOOLON_CEDGILKMKAJ_OFFSET))(this);
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
