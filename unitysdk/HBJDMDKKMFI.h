#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBJDMDKKMFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBJDMDKKMFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E52CDF0)
#define HBJDMDKKMFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52D010)
#define HBJDMDKKMFI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E52C9E0)
#define HBJDMDKKMFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E52C9B0)
#define HBJDMDKKMFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52C9A0)
#define HBJDMDKKMFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E52CB70)
#define HBJDMDKKMFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E52CA70)
#define HBJDMDKKMFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E52CCE0)
#define HBJDMDKKMFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E52C930)
#define HBJDMDKKMFI_KGAHDFKJAJD_OFFSET UNITYSDK_OFFSET(0x1E52CA60)
#define HBJDMDKKMFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E52CEB0)
#define HBJDMDKKMFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E52CE80)
#define HBJDMDKKMFI_OLJNLJNCFFO_OFFSET UNITYSDK_OFFSET(0x1E52CA50)
#define HBJDMDKKMFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E52C990)
#define HBJDMDKKMFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E52CD10)
#define HBJDMDKKMFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E52CD70)

inline static constexpr unsigned int HBJDMDKKMFI_TypeDefinitionIndex = 28924;

	class HBJDMDKKMFI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PODEGEHGIJH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HBJDMDKKMFI")->GetStaticField(0x2EA60);
		}

		// static const ::System::Object GONHNKMOJCG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBJDMDKKMFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBJDMDKKMFI*))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBJDMDKKMFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HBJDMDKKMFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBJDMDKKMFI* Clone()
		{
			return ((::HBJDMDKKMFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OLJNLJNCFFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_OLJNLJNCFFO_OFFSET))(this);
		}

		::System::Void KGAHDFKJAJD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_KGAHDFKJAJD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBJDMDKKMFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBJDMDKKMFI*))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBJDMDKKMFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBJDMDKKMFI*))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBJDMDKKMFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
