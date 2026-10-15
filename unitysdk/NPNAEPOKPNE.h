#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPNAEPOKPNE;
class OPOCANGAEHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPNAEPOKPNE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB9FD30)
#define NPNAEPOKPNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA00D0)
#define NPNAEPOKPNE_CDGMHJGKGOH_OFFSET UNITYSDK_OFFSET(0x1EB9F6D0)
#define NPNAEPOKPNE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB9F670)
#define NPNAEPOKPNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB9F520)
#define NPNAEPOKPNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9F480)
#define NPNAEPOKPNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB9F8D0)
#define NPNAEPOKPNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB9F6F0)
#define NPNAEPOKPNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB9FA70)
#define NPNAEPOKPNE_HJLLLBOHKKL_OFFSET UNITYSDK_OFFSET(0x1EB9F6E0)
#define NPNAEPOKPNE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB9F410)
#define NPNAEPOKPNE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB9FEE0)
#define NPNAEPOKPNE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB9FE10)
#define NPNAEPOKPNE_PBMBOAJOOAC_OFFSET UNITYSDK_OFFSET(0x1EB9F6C0)
#define NPNAEPOKPNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB9F470)
#define NPNAEPOKPNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB9FBD0)
#define NPNAEPOKPNE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB9FC30)

inline static constexpr unsigned int NPNAEPOKPNE_TypeDefinitionIndex = 27214;

	class NPNAEPOKPNE : public ::System::Object
	{
	public:
		::OPOCANGAEHJ* HNEJLNFNFKB; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::Single>* IDAPLOHPELP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_IGJMJIMDIIE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NPNAEPOKPNE")->GetStaticField(0xE0E0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NPNAEPOKPNE")->GetStaticField(0xE0E8);
		}

		// static const ::System::Object PJEPBLGDAOP; // 0x0
		// static const ::System::Object GJJMOMPHNME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPNAEPOKPNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPNAEPOKPNE*))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPNAEPOKPNE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NPNAEPOKPNE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPNAEPOKPNE* Clone()
		{
			return ((::NPNAEPOKPNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_CLONE_OFFSET))(this);
		}

		::OPOCANGAEHJ* PBMBOAJOOAC()
		{
			return ((::OPOCANGAEHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_PBMBOAJOOAC_OFFSET))(this);
		}

		::System::Void CDGMHJGKGOH(::OPOCANGAEHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPOCANGAEHJ*))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_CDGMHJGKGOH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::Single>* HJLLLBOHKKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_HJLLLBOHKKL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPNAEPOKPNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPNAEPOKPNE*))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPNAEPOKPNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPNAEPOKPNE*))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPNAEPOKPNE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
