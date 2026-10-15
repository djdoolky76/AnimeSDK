#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPEPGBMPCEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPEPGBMPCEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB6A160)
#define NPEPGBMPCEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6A380)
#define NPEPGBMPCEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB69DB0)
#define NPEPGBMPCEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB69D80)
#define NPEPGBMPCEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB69D70)
#define NPEPGBMPCEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB69EE0)
#define NPEPGBMPCEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB69E10)
#define NPEPGBMPCEK_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1EB69DF0)
#define NPEPGBMPCEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB6A050)
#define NPEPGBMPCEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB69D30)
#define NPEPGBMPCEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB6A220)
#define NPEPGBMPCEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB6A1F0)
#define NPEPGBMPCEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB69D60)
#define NPEPGBMPCEK_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1EB69E00)
#define NPEPGBMPCEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB6A080)
#define NPEPGBMPCEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB6A0E0)

inline static constexpr unsigned int NPEPGBMPCEK_TypeDefinitionIndex = 34453;

	class NPEPGBMPCEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDCJHECJOO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NPEPGBMPCEK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPEPGBMPCEK*>**)UnitySDK::FromName("", "NPEPGBMPCEK")->GetStaticField(0xC9E0);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPEPGBMPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEPGBMPCEK*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPEPGBMPCEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NPEPGBMPCEK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPEPGBMPCEK*>*(*)())((::PBYTE)hIl2Cpp + NPEPGBMPCEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPEPGBMPCEK* Clone()
		{
			return ((::NPEPGBMPCEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPEPGBMPCEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPEPGBMPCEK*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPEPGBMPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEPGBMPCEK*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPEPGBMPCEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
