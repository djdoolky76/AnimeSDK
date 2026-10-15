#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLAKIACAACO;
class PEOKJEOOOJD;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLAKIACAACO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C5460)
#define CLAKIACAACO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C58E0)
#define CLAKIACAACO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C4E60)
#define CLAKIACAACO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C4D40)
#define CLAKIACAACO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4D00)
#define CLAKIACAACO_EEBJNGBJPCI_OFFSET UNITYSDK_OFFSET(0x1E0C4EC0)
#define CLAKIACAACO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C4FA0)
#define CLAKIACAACO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C4F40)
#define CLAKIACAACO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C5100)
#define CLAKIACAACO_HFOKLPOEFJM_OFFSET UNITYSDK_OFFSET(0x1E0C4F30)
#define CLAKIACAACO_HMPGKPMHEDF_OFFSET UNITYSDK_OFFSET(0x1E0C4F20)
#define CLAKIACAACO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C4C90)
#define CLAKIACAACO_JMNLBDEAPIO_OFFSET UNITYSDK_OFFSET(0x1E0C4F10)
#define CLAKIACAACO_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1E0C4ED0)
#define CLAKIACAACO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0C57B0)
#define CLAKIACAACO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0C5650)
#define CLAKIACAACO_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E0C4EF0)
#define CLAKIACAACO_NHNBLJJMCKI_OFFSET UNITYSDK_OFFSET(0x1E0C4F00)
#define CLAKIACAACO_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E0C4EE0)
#define CLAKIACAACO_OCGCEOILBAM_OFFSET UNITYSDK_OFFSET(0x1E0C4EB0)
#define CLAKIACAACO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4CF0)
#define CLAKIACAACO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C51B0)
#define CLAKIACAACO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C5210)

inline static constexpr unsigned int CLAKIACAACO_TypeDefinitionIndex = 26988;

	class CLAKIACAACO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>* MDELKGNPIOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::PEOKJEOOOJD* PICLOAPOIBF; // 0x20
		::System::UInt32 OIJAOMMHCDA; // 0x28
		::System::Boolean PNKAHGEALAE; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 ABPDPMHFFNN; // 0x30
		static ::Google::Protobuf::MessageParser_1<::CLAKIACAACO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLAKIACAACO*>**)UnitySDK::FromName("", "CLAKIACAACO")->GetStaticField(0x1A920);
		}

		static ::Google::Protobuf::FieldCodec_1<::PKPICFPDHEO*>** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::PKPICFPDHEO*>**)UnitySDK::FromName("", "CLAKIACAACO")->GetStaticField(0x1A928);
		}

		// static const ::System::Object NNKGPBCCHFD; // 0x0
		// static const ::System::Object EFEMONKDOCM; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object NJLAOBJPNKB; // 0x0
		// static const ::System::Object HLMDHFNCJGJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLAKIACAACO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLAKIACAACO*))((::PBYTE)hIl2Cpp + CLAKIACAACO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLAKIACAACO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLAKIACAACO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLAKIACAACO*>*(*)())((::PBYTE)hIl2Cpp + CLAKIACAACO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLAKIACAACO* Clone()
		{
			return ((::CLAKIACAACO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO_CLONE_OFFSET))(this);
		}

		::PEOKJEOOOJD* OCGCEOILBAM()
		{
			return ((::PEOKJEOOOJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO_OCGCEOILBAM_OFFSET))(this);
		}

		::System::Void EEBJNGBJPCI(::PEOKJEOOOJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEOKJEOOOJD*))((::PBYTE)hIl2Cpp + CLAKIACAACO_EEBJNGBJPCI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLAKIACAACO_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean NHNBLJJMCKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO_NHNBLJJMCKI_OFFSET))(this);
		}

		::System::Void JMNLBDEAPIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLAKIACAACO_JMNLBDEAPIO_OFFSET))(this, a1);
		}

		::System::UInt32 HMPGKPMHEDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO_HMPGKPMHEDF_OFFSET))(this);
		}

		::System::Void HFOKLPOEFJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLAKIACAACO_HFOKLPOEFJM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLAKIACAACO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLAKIACAACO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLAKIACAACO*))((::PBYTE)hIl2Cpp + CLAKIACAACO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLAKIACAACO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLAKIACAACO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLAKIACAACO*))((::PBYTE)hIl2Cpp + CLAKIACAACO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLAKIACAACO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
