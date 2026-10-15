#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMLNNHKJEIP;
class MMCIJKKAEII;
class OFFMCODMKDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMCIJKKAEII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA5DE20)
#define MMCIJKKAEII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5E1C0)
#define MMCIJKKAEII_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA5D7B0)
#define MMCIJKKAEII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA5D6A0)
#define MMCIJKKAEII_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5D650)
#define MMCIJKKAEII_DEHEHCJIKJC_OFFSET UNITYSDK_OFFSET(0x1EA5D810)
#define MMCIJKKAEII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA5DA60)
#define MMCIJKKAEII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA5D830)
#define MMCIJKKAEII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA5DC30)
#define MMCIJKKAEII_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1EA5D800)
#define MMCIJKKAEII_IMOLHOHOIHK_OFFSET UNITYSDK_OFFSET(0x1EA5D820)
#define MMCIJKKAEII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA5D5E0)
#define MMCIJKKAEII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA5DFE0)
#define MMCIJKKAEII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA5DF00)
#define MMCIJKKAEII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA5D640)
#define MMCIJKKAEII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA5DCB0)
#define MMCIJKKAEII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA5DD10)

inline static constexpr unsigned int MMCIJKKAEII_TypeDefinitionIndex = 28514;

	class MMCIJKKAEII : public ::System::Object
	{
	public:
		::OFFMCODMKDL* KBCNOOJOBLM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* BDGHBBABABH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>**)UnitySDK::FromName("", "MMCIJKKAEII")->GetStaticField(0x57220);
		}

		static ::Google::Protobuf::MessageParser_1<::MMCIJKKAEII*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MMCIJKKAEII*>**)UnitySDK::FromName("", "MMCIJKKAEII")->GetStaticField(0x57228);
		}

		// static const ::System::Object OIDEIBKKMCB; // 0x0
		// static const ::System::Object KMCAAHNMCHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIJKKAEII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMCIJKKAEII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMCIJKKAEII*))((::PBYTE)hIl2Cpp + MMCIJKKAEII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMCIJKKAEII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MMCIJKKAEII*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MMCIJKKAEII*>*(*)())((::PBYTE)hIl2Cpp + MMCIJKKAEII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIJKKAEII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMCIJKKAEII* Clone()
		{
			return ((::MMCIJKKAEII*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIJKKAEII_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* GOAHOGGOLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIJKKAEII_GOAHOGGOLOJ_OFFSET))(this);
		}

		::OFFMCODMKDL* DEHEHCJIKJC()
		{
			return ((::OFFMCODMKDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIJKKAEII_DEHEHCJIKJC_OFFSET))(this);
		}

		::System::Void IMOLHOHOIHK(::OFFMCODMKDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFFMCODMKDL*))((::PBYTE)hIl2Cpp + MMCIJKKAEII_IMOLHOHOIHK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMCIJKKAEII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMCIJKKAEII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMCIJKKAEII*))((::PBYTE)hIl2Cpp + MMCIJKKAEII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIJKKAEII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIJKKAEII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMCIJKKAEII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIJKKAEII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMCIJKKAEII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMCIJKKAEII*))((::PBYTE)hIl2Cpp + MMCIJKKAEII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMCIJKKAEII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
