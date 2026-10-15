#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJHPPLHFNAB;
class EMLFDPFAPJP;
class KCIEGDGJMBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJHPPLHFNAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0DE430)
#define CJHPPLHFNAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DE810)
#define CJHPPLHFNAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0DDE00)
#define CJHPPLHFNAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0DDCD0)
#define CJHPPLHFNAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DDC80)
#define CJHPPLHFNAB_DPKKENCCKIH_OFFSET UNITYSDK_OFFSET(0x1E0DDE50)
#define CJHPPLHFNAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0DE050)
#define CJHPPLHFNAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0DDE60)
#define CJHPPLHFNAB_GCPALOPJPNA_OFFSET UNITYSDK_OFFSET(0x1E0DDE30)
#define CJHPPLHFNAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0DE220)
#define CJHPPLHFNAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0DDC40)
#define CJHPPLHFNAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0DE630)
#define CJHPPLHFNAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0DE520)
#define CJHPPLHFNAB_MFEGAEGIEKH_OFFSET UNITYSDK_OFFSET(0x1E0DDE40)
#define CJHPPLHFNAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0DDC70)
#define CJHPPLHFNAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0DE2C0)
#define CJHPPLHFNAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0DE320)

inline static constexpr unsigned int CJHPPLHFNAB_TypeDefinitionIndex = 25561;

	class CJHPPLHFNAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EMLFDPFAPJP* EIMPNENAFLA; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::KCIEGDGJMBE*>* OJMBFPGGMLH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_KEEMGAMANDF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CJHPPLHFNAB")->GetStaticField(0x196C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CJHPPLHFNAB")->GetStaticField(0x196C8);
		}

		// static const ::System::Object OHANBGHAKIB; // 0x0
		// static const ::System::Object PHOLLFGKAMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJHPPLHFNAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJHPPLHFNAB*))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJHPPLHFNAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CJHPPLHFNAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJHPPLHFNAB* Clone()
		{
			return ((::CJHPPLHFNAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_CLONE_OFFSET))(this);
		}

		::EMLFDPFAPJP* GCPALOPJPNA()
		{
			return ((::EMLFDPFAPJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_GCPALOPJPNA_OFFSET))(this);
		}

		::System::Void MFEGAEGIEKH(::EMLFDPFAPJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMLFDPFAPJP*))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_MFEGAEGIEKH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KCIEGDGJMBE*>* DPKKENCCKIH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KCIEGDGJMBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_DPKKENCCKIH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJHPPLHFNAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJHPPLHFNAB*))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJHPPLHFNAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJHPPLHFNAB*))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJHPPLHFNAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
