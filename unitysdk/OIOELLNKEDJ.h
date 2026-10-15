#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIOELLNKEDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OIOELLNKEDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE7B4B0)
#define OIOELLNKEDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7B6D0)
#define OIOELLNKEDJ_CEPLECKEFHL_OFFSET UNITYSDK_OFFSET(0x1DE7B140)
#define OIOELLNKEDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE7B100)
#define OIOELLNKEDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE7B0D0)
#define OIOELLNKEDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7B0C0)
#define OIOELLNKEDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE7B230)
#define OIOELLNKEDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE7B160)
#define OIOELLNKEDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE7B3A0)
#define OIOELLNKEDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE7B080)
#define OIOELLNKEDJ_JMAMFKAFFMJ_OFFSET UNITYSDK_OFFSET(0x1DE7B150)
#define OIOELLNKEDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE7B570)
#define OIOELLNKEDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE7B540)
#define OIOELLNKEDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE7B0B0)
#define OIOELLNKEDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE7B3D0)
#define OIOELLNKEDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE7B430)

inline static constexpr unsigned int OIOELLNKEDJ_TypeDefinitionIndex = 29700;

	class OIOELLNKEDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAHJMKFOLMC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OIOELLNKEDJ")->GetStaticField(0x1E670);
		}

		// static const ::System::Object JGIAJDEPFFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIOELLNKEDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIOELLNKEDJ*))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIOELLNKEDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OIOELLNKEDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIOELLNKEDJ* Clone()
		{
			return ((::OIOELLNKEDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 CEPLECKEFHL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_CEPLECKEFHL_OFFSET))(this);
		}

		::System::Void JMAMFKAFFMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_JMAMFKAFFMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIOELLNKEDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIOELLNKEDJ*))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIOELLNKEDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIOELLNKEDJ*))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIOELLNKEDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
