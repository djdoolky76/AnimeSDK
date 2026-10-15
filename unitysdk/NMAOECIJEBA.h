#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMAOECIJEBA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMAOECIJEBA_BJLLPBIFHLO_OFFSET UNITYSDK_OFFSET(0x1EB3F930)
#define NMAOECIJEBA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB3FED0)
#define NMAOECIJEBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB40210)
#define NMAOECIJEBA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB3F8B0)
#define NMAOECIJEBA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB3F7B0)
#define NMAOECIJEBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3F720)
#define NMAOECIJEBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB3F990)
#define NMAOECIJEBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB3F960)
#define NMAOECIJEBA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB3F900)
#define NMAOECIJEBA_FCEBMBOJKCE_OFFSET UNITYSDK_OFFSET(0x1EB3F940)
#define NMAOECIJEBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB3FA40)
#define NMAOECIJEBA_GHLGDFEDHPG_OFFSET UNITYSDK_OFFSET(0x1EB3F950)
#define NMAOECIJEBA_IDLPGLKDDOC_OFFSET UNITYSDK_OFFSET(0x1EB3F920)
#define NMAOECIJEBA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB3F6E0)
#define NMAOECIJEBA_KDKJLALAGAN_OFFSET UNITYSDK_OFFSET(0x1EB3F8E0)
#define NMAOECIJEBA_LABPJBIAGJM_OFFSET UNITYSDK_OFFSET(0x1EB3F910)
#define NMAOECIJEBA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB400A0)
#define NMAOECIJEBA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB40020)
#define NMAOECIJEBA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB3F8F0)
#define NMAOECIJEBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB3F710)
#define NMAOECIJEBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB3FC20)
#define NMAOECIJEBA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB3FC80)

inline static constexpr unsigned int NMAOECIJEBA_TypeDefinitionIndex = 29029;

	class NMAOECIJEBA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NEHBJPHEIDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MBEPKBINGBO; // 0x20
		::System::Boolean FIOIMDDJMOI; // 0x28
		::System::Boolean BBAJCDIHHBG; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EKNMGOBDIFK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NMAOECIJEBA")->GetStaticField(0x6A220);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AJHGDHBFKIJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NMAOECIJEBA")->GetStaticField(0x6A228);
		}

		static ::Google::Protobuf::MessageParser_1<::NMAOECIJEBA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NMAOECIJEBA*>**)UnitySDK::FromName("", "NMAOECIJEBA")->GetStaticField(0x6A230);
		}

		// static const ::System::Object NJJMDGKLLKP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FCBMJFLBHGF; // 0x0
		// static const ::System::Object PFIMCKBLNIA; // 0x0
		// static const ::System::Object PCNLLMKOCEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMAOECIJEBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMAOECIJEBA*))((::PBYTE)hIl2Cpp + NMAOECIJEBA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMAOECIJEBA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NMAOECIJEBA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NMAOECIJEBA*>*(*)())((::PBYTE)hIl2Cpp + NMAOECIJEBA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMAOECIJEBA* Clone()
		{
			return ((::NMAOECIJEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KDKJLALAGAN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA_KDKJLALAGAN_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMAOECIJEBA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean LABPJBIAGJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA_LABPJBIAGJM_OFFSET))(this);
		}

		::System::Void IDLPGLKDDOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMAOECIJEBA_IDLPGLKDDOC_OFFSET))(this, a1);
		}

		::System::Boolean BJLLPBIFHLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA_BJLLPBIFHLO_OFFSET))(this);
		}

		::System::Void FCEBMBOJKCE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMAOECIJEBA_FCEBMBOJKCE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GHLGDFEDHPG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA_GHLGDFEDHPG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMAOECIJEBA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMAOECIJEBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMAOECIJEBA*))((::PBYTE)hIl2Cpp + NMAOECIJEBA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMAOECIJEBA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMAOECIJEBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMAOECIJEBA*))((::PBYTE)hIl2Cpp + NMAOECIJEBA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMAOECIJEBA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
