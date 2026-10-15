#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBIAJJCMNKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBIAJJCMNKO_ABFHNNJEOHB_OFFSET UNITYSDK_OFFSET(0x1E5E8E90)
#define IBIAJJCMNKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5E91D0)
#define IBIAJJCMNKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E94D0)
#define IBIAJJCMNKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5E8E10)
#define IBIAJJCMNKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E8DE0)
#define IBIAJJCMNKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E8DD0)
#define IBIAJJCMNKO_DNGEOHDDIHA_OFFSET UNITYSDK_OFFSET(0x1E5E8E70)
#define IBIAJJCMNKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5E8F80)
#define IBIAJJCMNKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5E8EA0)
#define IBIAJJCMNKO_FAHNIHCFNOG_OFFSET UNITYSDK_OFFSET(0x1E5E8E60)
#define IBIAJJCMNKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5E9050)
#define IBIAJJCMNKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5E8D90)
#define IBIAJJCMNKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5E9350)
#define IBIAJJCMNKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5E9310)
#define IBIAJJCMNKO_NJIPLEAJCJI_OFFSET UNITYSDK_OFFSET(0x1E5E8E80)
#define IBIAJJCMNKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5E8DC0)
#define IBIAJJCMNKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5E9080)
#define IBIAJJCMNKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5E90E0)

inline static constexpr unsigned int IBIAJJCMNKO_TypeDefinitionIndex = 27393;

	class IBIAJJCMNKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 EJGIJMCPJGJ; // 0x18
		::System::UInt32 DDKDAHKMBFL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IBIAJJCMNKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBIAJJCMNKO*>**)UnitySDK::FromName("", "IBIAJJCMNKO")->GetStaticField(0x438B0);
		}

		// static const ::System::Object OBJDFPPBDAA; // 0x0
		// static const ::System::Object BECAFHLKEON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBIAJJCMNKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBIAJJCMNKO*))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBIAJJCMNKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBIAJJCMNKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBIAJJCMNKO*>*(*)())((::PBYTE)hIl2Cpp + IBIAJJCMNKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBIAJJCMNKO* Clone()
		{
			return ((::IBIAJJCMNKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_CLONE_OFFSET))(this);
		}

		::System::UInt32 FAHNIHCFNOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_FAHNIHCFNOG_OFFSET))(this);
		}

		::System::Void DNGEOHDDIHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_DNGEOHDDIHA_OFFSET))(this, a1);
		}

		::System::Int32 NJIPLEAJCJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_NJIPLEAJCJI_OFFSET))(this);
		}

		::System::Void ABFHNNJEOHB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_ABFHNNJEOHB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBIAJJCMNKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBIAJJCMNKO*))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBIAJJCMNKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBIAJJCMNKO*))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBIAJJCMNKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
