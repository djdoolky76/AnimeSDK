#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOPOBBPLHAE.h"
#include "unitysdk/System/Object.h"
class BGFJBBFHHCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGFJBBFHHCJ_AMEFBODJIHJ_OFFSET UNITYSDK_OFFSET(0x1EA47D60)
#define BGFJBBFHHCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA480D0)
#define BGFJBBFHHCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA483E0)
#define BGFJBBFHHCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA47D10)
#define BGFJBBFHHCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA47CE0)
#define BGFJBBFHHCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA47CD0)
#define BGFJBBFHHCJ_DFAPPLENCIA_OFFSET UNITYSDK_OFFSET(0x1EA47D80)
#define BGFJBBFHHCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA47E80)
#define BGFJBBFHHCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA47DA0)
#define BGFJBBFHHCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA47F50)
#define BGFJBBFHHCJ_IPOAEBNIIBC_OFFSET UNITYSDK_OFFSET(0x1EA47D90)
#define BGFJBBFHHCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA47C90)
#define BGFJBBFHHCJ_KMANAJJOLLP_OFFSET UNITYSDK_OFFSET(0x1EA47D70)
#define BGFJBBFHHCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA48260)
#define BGFJBBFHHCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA48220)
#define BGFJBBFHHCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA47CC0)
#define BGFJBBFHHCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA47F80)
#define BGFJBBFHHCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA47FE0)

inline static constexpr unsigned int BGFJBBFHHCJ_TypeDefinitionIndex = 30765;

	class BGFJBBFHHCJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AOPOBBPLHAE BKDMACAFPDO; // 0x18
		::System::UInt32 AAGAKAIKGCM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BGFJBBFHHCJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGFJBBFHHCJ*>**)UnitySDK::FromName("", "BGFJBBFHHCJ")->GetStaticField(0x52BE0);
		}

		// static const ::System::Object MGPGDLIJKLM; // 0x0
		// static const ::System::Object MLOBICMDIHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGFJBBFHHCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFJBBFHHCJ*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGFJBBFHHCJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGFJBBFHHCJ*>*(*)())((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGFJBBFHHCJ* Clone()
		{
			return ((::BGFJBBFHHCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 AMEFBODJIHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_AMEFBODJIHJ_OFFSET))(this);
		}

		::System::Void KMANAJJOLLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_KMANAJJOLLP_OFFSET))(this, a1);
		}

		::AOPOBBPLHAE DFAPPLENCIA()
		{
			return ((::AOPOBBPLHAE(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_DFAPPLENCIA_OFFSET))(this);
		}

		::System::Void IPOAEBNIIBC(::AOPOBBPLHAE a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOPOBBPLHAE))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_IPOAEBNIIBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGFJBBFHHCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGFJBBFHHCJ*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGFJBBFHHCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFJBBFHHCJ*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
