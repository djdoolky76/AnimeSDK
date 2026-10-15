#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOKBAGIKJHB;
class OMIIKPCJHEM;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMIIKPCJHEM_APEJLLPFMNH_OFFSET UNITYSDK_OFFSET(0x1DEB5220)
#define OMIIKPCJHEM_BPEDIHFPIIG_OFFSET UNITYSDK_OFFSET(0x1DEB5270)
#define OMIIKPCJHEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEB5890)
#define OMIIKPCJHEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB5E90)
#define OMIIKPCJHEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEB51C0)
#define OMIIKPCJHEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEB5000)
#define OMIIKPCJHEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB4F60)
#define OMIIKPCJHEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEB5300)
#define OMIIKPCJHEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEB52A0)
#define OMIIKPCJHEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEB5510)
#define OMIIKPCJHEM_GOBPAKFKGPB_OFFSET UNITYSDK_OFFSET(0x1DEB5290)
#define OMIIKPCJHEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEB4EF0)
#define OMIIKPCJHEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEB5BA0)
#define OMIIKPCJHEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEB5A10)
#define OMIIKPCJHEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEB4F50)
#define OMIIKPCJHEM_PDKBFMHNNJM_OFFSET UNITYSDK_OFFSET(0x1DEB5280)
#define OMIIKPCJHEM_PHLJKPKHKMA_OFFSET UNITYSDK_OFFSET(0x1DEB5210)
#define OMIIKPCJHEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEB56A0)
#define OMIIKPCJHEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEB5700)

	class OMIIKPCJHEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LOKBAGIKJHB* GFDEIGAECCM; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::LOKBAGIKJHB*>* KNJFIEMACBI; // 0x20
		::Google::Protobuf::ByteString* LOMMGGOBMJM; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OMIIKPCJHEM")->GetStaticField(0x2B1E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_ADJIPNLDLGJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OMIIKPCJHEM")->GetStaticField(0x2B1E8);
		}

		// static const ::System::Object AGHMKNFOMAK; // 0x0
		// static const ::System::Object PJFBMGFBECE; // 0x0
		// static const ::System::Object KIACOEFBLAO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMIIKPCJHEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMIIKPCJHEM*))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMIIKPCJHEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OMIIKPCJHEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMIIKPCJHEM* Clone()
		{
			return ((::OMIIKPCJHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::ByteString* PHLJKPKHKMA()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_PHLJKPKHKMA_OFFSET))(this);
		}

		::System::Void APEJLLPFMNH(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_APEJLLPFMNH_OFFSET))(this, a1);
		}

		::LOKBAGIKJHB* BPEDIHFPIIG()
		{
			return ((::LOKBAGIKJHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_BPEDIHFPIIG_OFFSET))(this);
		}

		::System::Void PDKBFMHNNJM(::LOKBAGIKJHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOKBAGIKJHB*))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_PDKBFMHNNJM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LOKBAGIKJHB*>* GOBPAKFKGPB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LOKBAGIKJHB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_GOBPAKFKGPB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMIIKPCJHEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMIIKPCJHEM*))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMIIKPCJHEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMIIKPCJHEM*))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMIIKPCJHEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
