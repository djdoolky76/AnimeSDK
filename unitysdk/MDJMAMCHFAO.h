#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDJMAMCHFAO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDJMAMCHFAO_AABEHODDLNG_OFFSET UNITYSDK_OFFSET(0x1E9D75C0)
#define MDJMAMCHFAO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D7920)
#define MDJMAMCHFAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D7B40)
#define MDJMAMCHFAO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D7570)
#define MDJMAMCHFAO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D7540)
#define MDJMAMCHFAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D7530)
#define MDJMAMCHFAO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D76A0)
#define MDJMAMCHFAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D75D0)
#define MDJMAMCHFAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D7810)
#define MDJMAMCHFAO_HIFENIPMJIH_OFFSET UNITYSDK_OFFSET(0x1E9D75B0)
#define MDJMAMCHFAO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D74F0)
#define MDJMAMCHFAO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D79E0)
#define MDJMAMCHFAO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D79B0)
#define MDJMAMCHFAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D7520)
#define MDJMAMCHFAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D7840)
#define MDJMAMCHFAO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D78A0)

inline static constexpr unsigned int MDJMAMCHFAO_TypeDefinitionIndex = 27955;

	class MDJMAMCHFAO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PCPBFEBJBLF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MDJMAMCHFAO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MDJMAMCHFAO*>**)UnitySDK::FromName("", "MDJMAMCHFAO")->GetStaticField(0x4C6D0);
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

		static ::Google::Protobuf::MessageParser_1<::MDJMAMCHFAO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MDJMAMCHFAO*>*(*)())((::PBYTE)hIl2Cpp + MDJMAMCHFAO_JJGHOBBFNJD_OFFSET))();
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
