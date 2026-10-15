#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEIMLKNMDBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NEIMLKNMDBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF5A40)
#define NEIMLKNMDBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF5D80)
#define NEIMLKNMDBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF54A0)
#define NEIMLKNMDBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF53A0)
#define NEIMLKNMDBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF5310)
#define NEIMLKNMDBM_ENPGOFLEDFO_OFFSET UNITYSDK_OFFSET(0x1EAF54D0)
#define NEIMLKNMDBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF5560)
#define NEIMLKNMDBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF5530)
#define NEIMLKNMDBM_FFEFLLPNCGP_OFFSET UNITYSDK_OFFSET(0x1EAF5520)
#define NEIMLKNMDBM_FHGLMMIBJHE_OFFSET UNITYSDK_OFFSET(0x1EAF5510)
#define NEIMLKNMDBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF5690)
#define NEIMLKNMDBM_HLGCDMJJIJB_OFFSET UNITYSDK_OFFSET(0x1EAF54E0)
#define NEIMLKNMDBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF52D0)
#define NEIMLKNMDBM_KNJAICAENCO_OFFSET UNITYSDK_OFFSET(0x1EAF54F0)
#define NEIMLKNMDBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF5C50)
#define NEIMLKNMDBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF5BE0)
#define NEIMLKNMDBM_NKNMJCMIPEJ_OFFSET UNITYSDK_OFFSET(0x1EAF5500)
#define NEIMLKNMDBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF5300)
#define NEIMLKNMDBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF5860)
#define NEIMLKNMDBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF58C0)

inline static constexpr unsigned int NEIMLKNMDBM_TypeDefinitionIndex = 29083;

	class NEIMLKNMDBM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EGEPHMNAHMH; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHNKPKLLEDK; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 HGGDLJGPKPM; // 0x28
		::System::UInt32 ODBNIIOMBFI; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_CLBNOJGHGCJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NEIMLKNMDBM")->GetStaticField(0x36170);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NNLJFALLKAG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NEIMLKNMDBM")->GetStaticField(0x36178);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NEIMLKNMDBM")->GetStaticField(0x36180);
		}

		// static const ::System::Object JPIMDPIPPIC; // 0x0
		// static const ::System::Object FJPCIFHIEEO; // 0x0
		// static const ::System::Object JBADBFFKHGJ; // 0x0
		// static const ::System::Object BPBJOKEMADF; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NEIMLKNMDBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NEIMLKNMDBM* Clone()
		{
			return ((::NEIMLKNMDBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 ENPGOFLEDFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_ENPGOFLEDFO_OFFSET))(this);
		}

		::System::Void HLGCDMJJIJB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_HLGCDMJJIJB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KNJAICAENCO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_KNJAICAENCO_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKNMJCMIPEJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_NKNMJCMIPEJ_OFFSET))(this);
		}

		::System::UInt32 FHGLMMIBJHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_FHGLMMIBJHE_OFFSET))(this);
		}

		::System::Void FFEFLLPNCGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEIMLKNMDBM_FFEFLLPNCGP_OFFSET))(this, a1);
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
