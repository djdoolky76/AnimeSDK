#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEIMLKNMDBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEIMLKNMDBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE378F0)
#define NEIMLKNMDBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE37C10)
#define NEIMLKNMDBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE37350)
#define NEIMLKNMDBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE37260)
#define NEIMLKNMDBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE371D0)
#define NEIMLKNMDBM_ENPGOFLEDFO_OFFSET UNITYSDK_OFFSET(0x1FE373A0)
#define NEIMLKNMDBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE37410)
#define NEIMLKNMDBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE373E0)
#define NEIMLKNMDBM_FFEFLLPNCGP_OFFSET UNITYSDK_OFFSET(0x1FE37390)
#define NEIMLKNMDBM_FHGLMMIBJHE_OFFSET UNITYSDK_OFFSET(0x1FE37380)
#define NEIMLKNMDBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE37540)
#define NEIMLKNMDBM_HLGCDMJJIJB_OFFSET UNITYSDK_OFFSET(0x1FE373B0)
#define NEIMLKNMDBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE37190)
#define NEIMLKNMDBM_KNJAICAENCO_OFFSET UNITYSDK_OFFSET(0x1FE373D0)
#define NEIMLKNMDBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE37AE0)
#define NEIMLKNMDBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE37A70)
#define NEIMLKNMDBM_NKNMJCMIPEJ_OFFSET UNITYSDK_OFFSET(0x1FE373C0)
#define NEIMLKNMDBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE371C0)
#define NEIMLKNMDBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE37710)
#define NEIMLKNMDBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE37770)

inline static constexpr unsigned int NEIMLKNMDBM_TypeDefinitionIndex = 29673;

	class NEIMLKNMDBM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHNKPKLLEDK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EGEPHMNAHMH; // 0x20
		::System::UInt32 HGGDLJGPKPM; // 0x28
		::System::UInt32 ODBNIIOMBFI; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::NEIMLKNMDBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NEIMLKNMDBM*>**)UnitySDK::FromName("", "NEIMLKNMDBM")->GetStaticField(0x2F720);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CLBNOJGHGCJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NEIMLKNMDBM")->GetStaticField(0x2F728);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NNLJFALLKAG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NEIMLKNMDBM")->GetStaticField(0x2F730);
		}

		// static const ::System::Object BPBJOKEMADF; // 0x0
		// static const ::System::Object JPIMDPIPPIC; // 0x0
		// static const ::System::Object JBADBFFKHGJ; // 0x0
		// static const ::System::Object FJPCIFHIEEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NEIMLKNMDBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEIMLKNMDBM*))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEIMLKNMDBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NEIMLKNMDBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NEIMLKNMDBM*>*(*)())((::PBYTE)hIl2Cpp + NEIMLKNMDBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEIMLKNMDBM* Clone()
		{
			return ((::NEIMLKNMDBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 FHGLMMIBJHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_FHGLMMIBJHE_OFFSET))(this);
		}

		::System::Void FFEFLLPNCGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_FFEFLLPNCGP_OFFSET))(this, a1);
		}

		::System::UInt32 ENPGOFLEDFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_ENPGOFLEDFO_OFFSET))(this);
		}

		::System::Void HLGCDMJJIJB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_HLGCDMJJIJB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKNMJCMIPEJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_NKNMJCMIPEJ_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KNJAICAENCO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_KNJAICAENCO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NEIMLKNMDBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NEIMLKNMDBM*))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NEIMLKNMDBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEIMLKNMDBM*))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
