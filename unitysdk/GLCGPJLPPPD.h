#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJNHCGMDHNA;
class GLCGPJLPPPD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLCGPJLPPPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4BE0A0)
#define GLCGPJLPPPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BE540)
#define GLCGPJLPPPD_CHBOKKDODOO_OFFSET UNITYSDK_OFFSET(0x1E4BDC40)
#define GLCGPJLPPPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4BDC00)
#define GLCGPJLPPPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4BDB60)
#define GLCGPJLPPPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BDB20)
#define GLCGPJLPPPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4BDCF0)
#define GLCGPJLPPPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4BDCC0)
#define GLCGPJLPPPD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4BDC60)
#define GLCGPJLPPPD_FEKAJCBJBPM_OFFSET UNITYSDK_OFFSET(0x1E4BDC80)
#define GLCGPJLPPPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4BDD90)
#define GLCGPJLPPPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4BDAE0)
#define GLCGPJLPPPD_KCDLDIMGDAJ_OFFSET UNITYSDK_OFFSET(0x1E4BDC90)
#define GLCGPJLPPPD_KNKLJGNPGCL_OFFSET UNITYSDK_OFFSET(0x1E4BDC30)
#define GLCGPJLPPPD_LECGPKPDEKG_OFFSET UNITYSDK_OFFSET(0x1E4BDC70)
#define GLCGPJLPPPD_MCDPGCMMCLI_OFFSET UNITYSDK_OFFSET(0x1E4BDCA0)
#define GLCGPJLPPPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4BE440)
#define GLCGPJLPPPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4BE370)
#define GLCGPJLPPPD_NNPIEGEBBKO_OFFSET UNITYSDK_OFFSET(0x1E4BDCB0)
#define GLCGPJLPPPD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4BDC50)
#define GLCGPJLPPPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4BDB10)
#define GLCGPJLPPPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4BDE20)
#define GLCGPJLPPPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4BDE80)

inline static constexpr unsigned int GLCGPJLPPPD_TypeDefinitionIndex = 32088;

	class GLCGPJLPPPD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FJNHCGMDHNA*>* OBLOAHGCLMC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LDJKLOPLLLK; // 0x20
		::System::UInt32 OJJGBPBDAKJ; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::Byte _padding0[0x4];
		::System::UInt64 NJGCEBDGAGJ; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GLCGPJLPPPD")->GetStaticField(0x1E990);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DKBLNAOKEGN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GLCGPJLPPPD")->GetStaticField(0x1E998);
		}

		// static const ::System::Object BKHKEEDFHNF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IKMOKOHKAPK; // 0x0
		// static const ::System::Object LINCMDLFHEA; // 0x0
		// static const ::System::Object BFELBFOKGDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLCGPJLPPPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLCGPJLPPPD*))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLCGPJLPPPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GLCGPJLPPPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLCGPJLPPPD* Clone()
		{
			return ((::GLCGPJLPPPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_CLONE_OFFSET))(this);
		}

		::System::UInt32 KNKLJGNPGCL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_KNKLJGNPGCL_OFFSET))(this);
		}

		::System::Void CHBOKKDODOO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_CHBOKKDODOO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt64 LECGPKPDEKG()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_LECGPKPDEKG_OFFSET))(this);
		}

		::System::Void FEKAJCBJBPM(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_FEKAJCBJBPM_OFFSET))(this, a1);
		}

		::System::UInt32 KCDLDIMGDAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_KCDLDIMGDAJ_OFFSET))(this);
		}

		::System::Void MCDPGCMMCLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_MCDPGCMMCLI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FJNHCGMDHNA*>* NNPIEGEBBKO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FJNHCGMDHNA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_NNPIEGEBBKO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLCGPJLPPPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLCGPJLPPPD*))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLCGPJLPPPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLCGPJLPPPD*))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLCGPJLPPPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
