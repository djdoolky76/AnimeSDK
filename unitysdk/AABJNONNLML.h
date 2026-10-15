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

#define AABJNONNLML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDB6290)
#define AABJNONNLML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB6620)
#define AABJNONNLML_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDB5CF0)
#define AABJNONNLML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDB5C50)
#define AABJNONNLML_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB5C00)
#define AABJNONNLML_DKBCIAALOCC_OFFSET UNITYSDK_OFFSET(0x1DDB5D80)
#define AABJNONNLML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDB5E60)
#define AABJNONNLML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDB5DB0)
#define AABJNONNLML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDB5F70)
#define AABJNONNLML_JFNOMAHPBFB_OFFSET UNITYSDK_OFFSET(0x1DDB5D70)
#define AABJNONNLML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDB5B90)
#define AABJNONNLML_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1DDB5D60)
#define AABJNONNLML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDB6500)
#define AABJNONNLML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDB64A0)
#define AABJNONNLML_NKNEBECLBOF_OFFSET UNITYSDK_OFFSET(0x1DDB5DA0)
#define AABJNONNLML_OGFEKBBBEMA_OFFSET UNITYSDK_OFFSET(0x1DDB5D90)
#define AABJNONNLML_ONAKFJBOIID_OFFSET UNITYSDK_OFFSET(0x1DDB5D40)
#define AABJNONNLML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDB5BF0)
#define AABJNONNLML_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1DDB5D50)
#define AABJNONNLML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDB6070)
#define AABJNONNLML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDB60D0)

inline static constexpr unsigned int AABJNONNLML_TypeDefinitionIndex = 27240;

	class AABJNONNLML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PAGGKAMLINO; // 0x18
		::System::UInt32 NEBFBEAKMBH; // 0x20
		::System::UInt32 OJGKLENJPDA; // 0x24
		::System::UInt32 KCIKBKIBOPB; // 0x28
		static ::Google::Protobuf::MessageParser_1<::AABJNONNLML*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AABJNONNLML*>**)UnitySDK::FromName("", "AABJNONNLML")->GetStaticField(0xE0C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KLLNOKKOEME()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AABJNONNLML")->GetStaticField(0xE0C8);
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
