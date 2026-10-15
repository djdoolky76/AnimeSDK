#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AABJNONNLML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AABJNONNLML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD88A50)
#define AABJNONNLML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD88DE0)
#define AABJNONNLML_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD884B0)
#define AABJNONNLML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD88410)
#define AABJNONNLML_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD883C0)
#define AABJNONNLML_DKBCIAALOCC_OFFSET UNITYSDK_OFFSET(0x1DD88540)
#define AABJNONNLML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD88620)
#define AABJNONNLML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD88570)
#define AABJNONNLML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD88730)
#define AABJNONNLML_JFNOMAHPBFB_OFFSET UNITYSDK_OFFSET(0x1DD88530)
#define AABJNONNLML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DD88350)
#define AABJNONNLML_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1DD88520)
#define AABJNONNLML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD88CC0)
#define AABJNONNLML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD88C60)
#define AABJNONNLML_NKNEBECLBOF_OFFSET UNITYSDK_OFFSET(0x1DD88560)
#define AABJNONNLML_OGFEKBBBEMA_OFFSET UNITYSDK_OFFSET(0x1DD88550)
#define AABJNONNLML_ONAKFJBOIID_OFFSET UNITYSDK_OFFSET(0x1DD88500)
#define AABJNONNLML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD883B0)
#define AABJNONNLML_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1DD88510)
#define AABJNONNLML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD88830)
#define AABJNONNLML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD88890)

inline static constexpr unsigned int AABJNONNLML_TypeDefinitionIndex = 27240;

	class AABJNONNLML : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PAGGKAMLINO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KCIKBKIBOPB; // 0x20
		::System::UInt32 NEBFBEAKMBH; // 0x24
		::System::UInt32 OJGKLENJPDA; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KLLNOKKOEME()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AABJNONNLML")->GetStaticField(0xD2C0);
		}

		static ::Google::Protobuf::MessageParser_1<::AABJNONNLML*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AABJNONNLML*>**)UnitySDK::FromName("", "AABJNONNLML")->GetStaticField(0xD2C8);
		}

		// static const ::System::Object GABHMBDKBBD; // 0x0
		// static const ::System::Object LKCCGCBCJJM; // 0x0
		// static const ::System::Object OCAAAHDNMAC; // 0x0
		// static const ::System::Object EEMPBGGOLOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AABJNONNLML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AABJNONNLML*))((::PBYTE)hIl2Cpp + AABJNONNLML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AABJNONNLML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AABJNONNLML*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AABJNONNLML*>*(*)())((::PBYTE)hIl2Cpp + AABJNONNLML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AABJNONNLML* Clone()
		{
			return ((::AABJNONNLML*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ONAKFJBOIID()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML_ONAKFJBOIID_OFFSET))(this);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AABJNONNLML_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::UInt32 JFNOMAHPBFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML_JFNOMAHPBFB_OFFSET))(this);
		}

		::System::Void DKBCIAALOCC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AABJNONNLML_DKBCIAALOCC_OFFSET))(this, a1);
		}

		::System::UInt32 OGFEKBBBEMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML_OGFEKBBBEMA_OFFSET))(this);
		}

		::System::Void NKNEBECLBOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AABJNONNLML_NKNEBECLBOF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AABJNONNLML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AABJNONNLML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AABJNONNLML*))((::PBYTE)hIl2Cpp + AABJNONNLML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AABJNONNLML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AABJNONNLML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AABJNONNLML*))((::PBYTE)hIl2Cpp + AABJNONNLML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AABJNONNLML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
