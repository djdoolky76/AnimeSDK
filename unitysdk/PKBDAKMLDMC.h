#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFLIHGGNBDB;
class JFJDMGOMJOF;
class PKBDAKMLDMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKBDAKMLDMC_ABCNBJCNGIN_OFFSET UNITYSDK_OFFSET(0x1DF85490)
#define PKBDAKMLDMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF85900)
#define PKBDAKMLDMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF85D40)
#define PKBDAKMLDMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF85420)
#define PKBDAKMLDMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF85310)
#define PKBDAKMLDMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF852A0)
#define PKBDAKMLDMC_ELILBLBEFPF_OFFSET UNITYSDK_OFFSET(0x1DF85450)
#define PKBDAKMLDMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF854E0)
#define PKBDAKMLDMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF854B0)
#define PKBDAKMLDMC_FJNADIPGECD_OFFSET UNITYSDK_OFFSET(0x1DF85480)
#define PKBDAKMLDMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF85640)
#define PKBDAKMLDMC_GOAHLKOAMDP_OFFSET UNITYSDK_OFFSET(0x1DF85470)
#define PKBDAKMLDMC_IBCAEDCDLGM_OFFSET UNITYSDK_OFFSET(0x1DF854A0)
#define PKBDAKMLDMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF85260)
#define PKBDAKMLDMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF85C10)
#define PKBDAKMLDMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF85B00)
#define PKBDAKMLDMC_OHBINDPNOJP_OFFSET UNITYSDK_OFFSET(0x1DF85460)
#define PKBDAKMLDMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF85290)
#define PKBDAKMLDMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF856D0)
#define PKBDAKMLDMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF85730)

inline static constexpr unsigned int PKBDAKMLDMC_TypeDefinitionIndex = 28778;

	class PKBDAKMLDMC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JFJDMGOMJOF*>* PLAMILECPBF; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DFLIHGGNBDB*>* JAIHOPKJKNI; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 EBDEEHICHPD; // 0x28
		::System::UInt32 IKIKIHNBOFM; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_KBONFOEBDGL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PKBDAKMLDMC")->GetStaticField(0x478E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HGOPLDMNFBB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PKBDAKMLDMC")->GetStaticField(0x478E8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PKBDAKMLDMC")->GetStaticField(0x478F0);
		}

		// static const ::System::Object EKAJOLKFOJF; // 0x0
		// static const ::System::Object BHLAKOLMCHH; // 0x0
		// static const ::System::Object PKAIIIDAIHI; // 0x0
		// static const ::System::Object EEKFBFLPFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKBDAKMLDMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBDAKMLDMC*))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKBDAKMLDMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PKBDAKMLDMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKBDAKMLDMC* Clone()
		{
			return ((::PKBDAKMLDMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JFJDMGOMJOF*>* ELILBLBEFPF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JFJDMGOMJOF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_ELILBLBEFPF_OFFSET))(this);
		}

		::System::UInt32 OHBINDPNOJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_OHBINDPNOJP_OFFSET))(this);
		}

		::System::Void GOAHLKOAMDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_GOAHLKOAMDP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DFLIHGGNBDB*>* FJNADIPGECD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DFLIHGGNBDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_FJNADIPGECD_OFFSET))(this);
		}

		::System::UInt32 ABCNBJCNGIN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_ABCNBJCNGIN_OFFSET))(this);
		}

		::System::Void IBCAEDCDLGM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_IBCAEDCDLGM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKBDAKMLDMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKBDAKMLDMC*))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKBDAKMLDMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBDAKMLDMC*))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKBDAKMLDMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
