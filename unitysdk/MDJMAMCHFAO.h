#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDJMAMCHFAO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDJMAMCHFAO_AABEHODDLNG_OFFSET UNITYSDK_OFFSET(0x1EA04C80)
#define MDJMAMCHFAO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA04FE0)
#define MDJMAMCHFAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA05200)
#define MDJMAMCHFAO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA04C30)
#define MDJMAMCHFAO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA04C00)
#define MDJMAMCHFAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA04BF0)
#define MDJMAMCHFAO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA04D60)
#define MDJMAMCHFAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA04C90)
#define MDJMAMCHFAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA04ED0)
#define MDJMAMCHFAO_HIFENIPMJIH_OFFSET UNITYSDK_OFFSET(0x1EA04C70)
#define MDJMAMCHFAO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA04BB0)
#define MDJMAMCHFAO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA050A0)
#define MDJMAMCHFAO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA05070)
#define MDJMAMCHFAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA04BE0)
#define MDJMAMCHFAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA04F00)
#define MDJMAMCHFAO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA04F60)

inline static constexpr unsigned int MDJMAMCHFAO_TypeDefinitionIndex = 27955;

	class MDJMAMCHFAO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PCPBFEBJBLF; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MDJMAMCHFAO")->GetStaticField(0x49AF0);
		}

		// static const ::System::Object EIMFPNNPLHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDJMAMCHFAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJMAMCHFAO*))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDJMAMCHFAO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MDJMAMCHFAO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDJMAMCHFAO* Clone()
		{
			return ((::MDJMAMCHFAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_CLONE_OFFSET))(this);
		}

		::System::UInt32 HIFENIPMJIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_HIFENIPMJIH_OFFSET))(this);
		}

		::System::Void AABEHODDLNG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_AABEHODDLNG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDJMAMCHFAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDJMAMCHFAO*))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDJMAMCHFAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJMAMCHFAO*))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDJMAMCHFAO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
