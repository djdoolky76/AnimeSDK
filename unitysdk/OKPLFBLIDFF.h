#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEBFJNFNBAP;
class OKPLFBLIDFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKPLFBLIDFF_AEFBCEOMCEM_OFFSET UNITYSDK_OFFSET(0x1F14A6C0)
#define OKPLFBLIDFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F14AB90)
#define OKPLFBLIDFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F14AF80)
#define OKPLFBLIDFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F14A5F0)
#define OKPLFBLIDFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F14A540)
#define OKPLFBLIDFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F14A500)
#define OKPLFBLIDFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F14A700)
#define OKPLFBLIDFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F14A6D0)
#define OKPLFBLIDFF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F14A6A0)
#define OKPLFBLIDFF_FOMCCKMOJPF_OFFSET UNITYSDK_OFFSET(0x1F14A620)
#define OKPLFBLIDFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F14A870)
#define OKPLFBLIDFF_ICDPEEEFBLG_OFFSET UNITYSDK_OFFSET(0x1F14A630)
#define OKPLFBLIDFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F14A4C0)
#define OKPLFBLIDFF_KEFLCJPPJAO_OFFSET UNITYSDK_OFFSET(0x1F14A6B0)
#define OKPLFBLIDFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F14AE60)
#define OKPLFBLIDFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F14AD90)
#define OKPLFBLIDFF_MPMFFOGBGGM_OFFSET UNITYSDK_OFFSET(0x1F14A680)
#define OKPLFBLIDFF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F14A690)
#define OKPLFBLIDFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F14A4F0)
#define OKPLFBLIDFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F14A980)
#define OKPLFBLIDFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F14A9E0)

inline static constexpr unsigned int OKPLFBLIDFF_TypeDefinitionIndex = 31855;

	class OKPLFBLIDFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FEBFJNFNBAP*>* GAICODFFOFL; // 0x18
		::System::String* MKPDCNCGHLH; // 0x20
		::System::UInt32 KNLKJFIKFCG; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::OKPLFBLIDFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKPLFBLIDFF*>**)UnitySDK::FromName("", "OKPLFBLIDFF")->GetStaticField(0x1ED80);
		}

		static ::Google::Protobuf::FieldCodec_1<::FEBFJNFNBAP*>** StaticGet_KJDPFAHOAJP()
		{
			return (::Google::Protobuf::FieldCodec_1<::FEBFJNFNBAP*>**)UnitySDK::FromName("", "OKPLFBLIDFF")->GetStaticField(0x1ED88);
		}

		// static const ::System::Object AMKNPKHPDAC; // 0x0
		// static const ::System::Object MOLKOGENBDE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PGLBLGGFDJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKPLFBLIDFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKPLFBLIDFF*))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKPLFBLIDFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKPLFBLIDFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKPLFBLIDFF*>*(*)())((::PBYTE)hIl2Cpp + OKPLFBLIDFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKPLFBLIDFF* Clone()
		{
			return ((::OKPLFBLIDFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_CLONE_OFFSET))(this);
		}

		::System::String* FOMCCKMOJPF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_FOMCCKMOJPF_OFFSET))(this);
		}

		::System::Void ICDPEEEFBLG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_ICDPEEEFBLG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FEBFJNFNBAP*>* MPMFFOGBGGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FEBFJNFNBAP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_MPMFFOGBGGM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 KEFLCJPPJAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_KEFLCJPPJAO_OFFSET))(this);
		}

		::System::Void AEFBCEOMCEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_AEFBCEOMCEM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKPLFBLIDFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKPLFBLIDFF*))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKPLFBLIDFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKPLFBLIDFF*))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKPLFBLIDFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
