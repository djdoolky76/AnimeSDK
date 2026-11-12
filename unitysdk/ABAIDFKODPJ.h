#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABAIDFKODPJ;
class BFBHKJLJJBJ;
class LMLNNHKJEIP;
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

#define ABAIDFKODPJ_BGDEODOEPCK_OFFSET UNITYSDK_OFFSET(0x1EFC7C10)
#define ABAIDFKODPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFC81F0)
#define ABAIDFKODPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFC8620)
#define ABAIDFKODPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFC7BB0)
#define ABAIDFKODPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFC7A20)
#define ABAIDFKODPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC79D0)
#define ABAIDFKODPJ_DEHEHCJIKJC_OFFSET UNITYSDK_OFFSET(0x1EFC7C30)
#define ABAIDFKODPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFC7C80)
#define ABAIDFKODPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFC7C50)
#define ABAIDFKODPJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EFC7C00)
#define ABAIDFKODPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFC7F00)
#define ABAIDFKODPJ_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1EFC7BE0)
#define ABAIDFKODPJ_IENELEDBGDH_OFFSET UNITYSDK_OFFSET(0x1EFC7C20)
#define ABAIDFKODPJ_IMOLHOHOIHK_OFFSET UNITYSDK_OFFSET(0x1EFC7C40)
#define ABAIDFKODPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFC7990)
#define ABAIDFKODPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFC84E0)
#define ABAIDFKODPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFC8380)
#define ABAIDFKODPJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EFC7BF0)
#define ABAIDFKODPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFC79C0)
#define ABAIDFKODPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFC7FC0)
#define ABAIDFKODPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFC8020)

inline static constexpr unsigned int ABAIDFKODPJ_TypeDefinitionIndex = 32169;

	class ABAIDFKODPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* BDGHBBABABH; // 0x18
		::BFBHKJLJJBJ* JPDGFFGLNIM; // 0x20
		::OFFMCODMKDL* KBCNOOJOBLM; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::MessageParser_1<::ABAIDFKODPJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ABAIDFKODPJ*>**)UnitySDK::FromName("", "ABAIDFKODPJ")->GetStaticField(0x32E10);
		}

		static ::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec_1<::LMLNNHKJEIP*>**)UnitySDK::FromName("", "ABAIDFKODPJ")->GetStaticField(0x32E18);
		}

		// static const ::System::Object OIDEIBKKMCB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LDCMAAOCEGL; // 0x0
		// static const ::System::Object KMCAAHNMCHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABAIDFKODPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABAIDFKODPJ*))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABAIDFKODPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ABAIDFKODPJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ABAIDFKODPJ*>*(*)())((::PBYTE)hIl2Cpp + ABAIDFKODPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABAIDFKODPJ* Clone()
		{
			return ((::ABAIDFKODPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>* GOAHOGGOLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMLNNHKJEIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_GOAHOGGOLOJ_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BFBHKJLJJBJ* BGDEODOEPCK()
		{
			return ((::BFBHKJLJJBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_BGDEODOEPCK_OFFSET))(this);
		}

		::System::Void IENELEDBGDH(::BFBHKJLJJBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFBHKJLJJBJ*))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_IENELEDBGDH_OFFSET))(this, a1);
		}

		::OFFMCODMKDL* DEHEHCJIKJC()
		{
			return ((::OFFMCODMKDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_DEHEHCJIKJC_OFFSET))(this);
		}

		::System::Void IMOLHOHOIHK(::OFFMCODMKDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFFMCODMKDL*))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_IMOLHOHOIHK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABAIDFKODPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABAIDFKODPJ*))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABAIDFKODPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABAIDFKODPJ*))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABAIDFKODPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
