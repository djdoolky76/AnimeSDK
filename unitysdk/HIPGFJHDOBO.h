#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIPGFJHDOBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIPGFJHDOBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F89BDB0)
#define HIPGFJHDOBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F89C090)
#define HIPGFJHDOBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F89B8B0)
#define HIPGFJHDOBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F89B870)
#define HIPGFJHDOBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F89B860)
#define HIPGFJHDOBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F89BA90)
#define HIPGFJHDOBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F89B990)
#define HIPGFJHDOBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F89BB90)
#define HIPGFJHDOBO_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1F89B920)
#define HIPGFJHDOBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F89B820)
#define HIPGFJHDOBO_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1F89B980)
#define HIPGFJHDOBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F89BEE0)
#define HIPGFJHDOBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F89BE90)
#define HIPGFJHDOBO_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1F89B910)
#define HIPGFJHDOBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F89B850)
#define HIPGFJHDOBO_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1F89B970)
#define HIPGFJHDOBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F89BC60)
#define HIPGFJHDOBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F89BCC0)

inline static constexpr unsigned int HIPGFJHDOBO_TypeDefinitionIndex = 31298;

	class HIPGFJHDOBO : public ::System::Object
	{
	public:
		::System::String* IOGCODPGEEA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KCIKBKIBOPB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HIPGFJHDOBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIPGFJHDOBO*>**)UnitySDK::FromName("", "HIPGFJHDOBO")->GetStaticField(0x33390);
		}

		// static const ::System::Object OLMIFJKILJG; // 0x0
		// static const ::System::Object LKCCGCBCJJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIPGFJHDOBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIPGFJHDOBO*))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIPGFJHDOBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIPGFJHDOBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIPGFJHDOBO*>*(*)())((::PBYTE)hIl2Cpp + HIPGFJHDOBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIPGFJHDOBO* Clone()
		{
			return ((::HIPGFJHDOBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_CLONE_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_HABCMACJEIN_OFFSET))(this, a1);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIPGFJHDOBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIPGFJHDOBO*))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIPGFJHDOBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIPGFJHDOBO*))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIPGFJHDOBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
