#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNOEKPLPCL;
class IGOFLPJHHAO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGOFLPJHHAO_AGKCPADKOGO_OFFSET UNITYSDK_OFFSET(0x1E654770)
#define IGOFLPJHHAO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E654D30)
#define IGOFLPJHHAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E655010)
#define IGOFLPJHHAO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6546C0)
#define IGOFLPJHHAO_CNBJMHLCPKA_OFFSET UNITYSDK_OFFSET(0x1E654780)
#define IGOFLPJHHAO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E654620)
#define IGOFLPJHHAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E654610)
#define IGOFLPJHHAO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E654900)
#define IGOFLPJHHAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E654790)
#define IGOFLPJHHAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E654BD0)
#define IGOFLPJHHAO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6545D0)
#define IGOFLPJHHAO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E654E80)
#define IGOFLPJHHAO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E654D90)
#define IGOFLPJHHAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E654600)
#define IGOFLPJHHAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E654C40)
#define IGOFLPJHHAO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E654CA0)

inline static constexpr unsigned int IGOFLPJHHAO_TypeDefinitionIndex = 33464;

	class IGOFLPJHHAO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AJNOEKPLPCL* GFKCBLJPOFN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IGOFLPJHHAO")->GetStaticField(0x4BE90);
		}

		// static const ::System::Object DONPLENGGPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGOFLPJHHAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGOFLPJHHAO*))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGOFLPJHHAO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IGOFLPJHHAO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGOFLPJHHAO* Clone()
		{
			return ((::IGOFLPJHHAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_CLONE_OFFSET))(this);
		}

		::AJNOEKPLPCL* AGKCPADKOGO()
		{
			return ((::AJNOEKPLPCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_AGKCPADKOGO_OFFSET))(this);
		}

		::System::Void CNBJMHLCPKA(::AJNOEKPLPCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJNOEKPLPCL*))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_CNBJMHLCPKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGOFLPJHHAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGOFLPJHHAO*))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGOFLPJHHAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGOFLPJHHAO*))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGOFLPJHHAO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
