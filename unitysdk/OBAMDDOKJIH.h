#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBAMDDOKJIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBAMDDOKJIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBAB260)
#define OBAMDDOKJIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBAB530)
#define OBAMDDOKJIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBAAEB0)
#define OBAMDDOKJIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBAAE80)
#define OBAMDDOKJIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAAE70)
#define OBAMDDOKJIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBAB020)
#define OBAMDDOKJIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBAAF40)
#define OBAMDDOKJIH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EBAAF10)
#define OBAMDDOKJIH_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1EBAAF20)
#define OBAMDDOKJIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBAB0F0)
#define OBAMDDOKJIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBAAE30)
#define OBAMDDOKJIH_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1EBAAF30)
#define OBAMDDOKJIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBAB3B0)
#define OBAMDDOKJIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBAB370)
#define OBAMDDOKJIH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EBAAF00)
#define OBAMDDOKJIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBAAE60)
#define OBAMDDOKJIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBAB120)
#define OBAMDDOKJIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBAB180)

inline static constexpr unsigned int OBAMDDOKJIH_TypeDefinitionIndex = 32142;

	class OBAMDDOKJIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 BOHLIADLMJN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OBAMDDOKJIH")->GetStaticField(0xFDB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EAEDBOGGHCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBAMDDOKJIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBAMDDOKJIH*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBAMDDOKJIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OBAMDDOKJIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBAMDDOKJIH* Clone()
		{
			return ((::OBAMDDOKJIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBAMDDOKJIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBAMDDOKJIH*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBAMDDOKJIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBAMDDOKJIH*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
