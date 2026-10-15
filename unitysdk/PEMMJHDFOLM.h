#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEMMJHDFOLM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEMMJHDFOLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF1E530)
#define PEMMJHDFOLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E5D0)
#define PEMMJHDFOLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF1E220)
#define PEMMJHDFOLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF1E1F0)
#define PEMMJHDFOLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E1E0)
#define PEMMJHDFOLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF1E330)
#define PEMMJHDFOLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF1E260)
#define PEMMJHDFOLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF1E490)
#define PEMMJHDFOLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF1E1A0)
#define PEMMJHDFOLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF1E580)
#define PEMMJHDFOLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF1E550)
#define PEMMJHDFOLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E1D0)
#define PEMMJHDFOLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF1E4C0)
#define PEMMJHDFOLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF1E520)

inline static constexpr unsigned int PEMMJHDFOLM_TypeDefinitionIndex = 26500;

	class PEMMJHDFOLM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PEMMJHDFOLM")->GetStaticField(0x3A5D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEMMJHDFOLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEMMJHDFOLM*))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEMMJHDFOLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PEMMJHDFOLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEMMJHDFOLM* Clone()
		{
			return ((::PEMMJHDFOLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEMMJHDFOLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEMMJHDFOLM*))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEMMJHDFOLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEMMJHDFOLM*))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEMMJHDFOLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
