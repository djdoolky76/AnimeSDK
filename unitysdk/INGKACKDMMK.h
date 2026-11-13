#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INGKACKDMMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INGKACKDMMK_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x206C7B00)
#define INGKACKDMMK_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x206C7AF0)
#define INGKACKDMMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206C7E60)
#define INGKACKDMMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x206C8130)
#define INGKACKDMMK_CLONE_OFFSET UNITYSDK_OFFSET(0x206C7A60)
#define INGKACKDMMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206C7A30)
#define INGKACKDMMK_CTOR_OFFSET UNITYSDK_OFFSET(0x206C7A20)
#define INGKACKDMMK_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x206C7AE0)
#define INGKACKDMMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206C7C20)
#define INGKACKDMMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x206C7B10)
#define INGKACKDMMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206C7CF0)
#define INGKACKDMMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206C79B0)
#define INGKACKDMMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206C7FB0)
#define INGKACKDMMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206C7F70)
#define INGKACKDMMK_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x206C7AD0)
#define INGKACKDMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206C7A10)
#define INGKACKDMMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206C7D20)
#define INGKACKDMMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x206C7D80)

inline static constexpr unsigned int INGKACKDMMK_TypeDefinitionIndex = 30236;

	class INGKACKDMMK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJIMFDKFGDE; // 0x18
		::System::UInt32 ODCKBAEKGJG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::INGKACKDMMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INGKACKDMMK*>**)UnitySDK::FromName("", "INGKACKDMMK")->GetStaticField(0x4FEC0);
		}

		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object BDHJLOLMAKK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKACKDMMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INGKACKDMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGKACKDMMK*))((::PBYTE)hIl2Cpp + INGKACKDMMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INGKACKDMMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INGKACKDMMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INGKACKDMMK*>*(*)())((::PBYTE)hIl2Cpp + INGKACKDMMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKACKDMMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INGKACKDMMK* Clone()
		{
			return ((::INGKACKDMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKACKDMMK_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKACKDMMK_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INGKACKDMMK_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKACKDMMK_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INGKACKDMMK_AFJGHICACON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INGKACKDMMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INGKACKDMMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INGKACKDMMK*))((::PBYTE)hIl2Cpp + INGKACKDMMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKACKDMMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKACKDMMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INGKACKDMMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKACKDMMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INGKACKDMMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGKACKDMMK*))((::PBYTE)hIl2Cpp + INGKACKDMMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INGKACKDMMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
