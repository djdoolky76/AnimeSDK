#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDJFPALJFEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define LDJFPALJFEK_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1E8FA0B0)
#define LDJFPALJFEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8FA620)
#define LDJFPALJFEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FA9F0)
#define LDJFPALJFEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F9FF0)
#define LDJFPALJFEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F9F80)
#define LDJFPALJFEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F9F70)
#define LDJFPALJFEK_DPKOHJLBEBB_OFFSET UNITYSDK_OFFSET(0x1E8FA090)
#define LDJFPALJFEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8FA260)
#define LDJFPALJFEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8FA0D0)
#define LDJFPALJFEK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8FA080)
#define LDJFPALJFEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8FA3F0)
#define LDJFPALJFEK_IJPLICKGMHC_OFFSET UNITYSDK_OFFSET(0x1E8FA0A0)
#define LDJFPALJFEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F9F30)
#define LDJFPALJFEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8FA810)
#define LDJFPALJFEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8FA770)
#define LDJFPALJFEK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8FA070)
#define LDJFPALJFEK_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1E8FA0C0)
#define LDJFPALJFEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F9F60)
#define LDJFPALJFEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8FA480)
#define LDJFPALJFEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8FA4E0)

	class LDJFPALJFEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JEDJCPJBEOM; // 0x18
		::System::UInt32 BGMLGHECGBM; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LDJFPALJFEK")->GetStaticField(0x34BB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HPGDFCOBPGH; // 0x0
		// static const ::System::Object LANLJAPHOCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJFPALJFEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDJFPALJFEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDJFPALJFEK*))((::PBYTE)hIl2Cpp + LDJFPALJFEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDJFPALJFEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LDJFPALJFEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJFPALJFEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDJFPALJFEK* Clone()
		{
			return ((::LDJFPALJFEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJFPALJFEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJFPALJFEK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDJFPALJFEK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* DPKOHJLBEBB()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJFPALJFEK_DPKOHJLBEBB_OFFSET))(this);
		}

		::System::Void IJPLICKGMHC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + LDJFPALJFEK_IJPLICKGMHC_OFFSET))(this, a1);
		}

		::System::UInt32 BIBPBCCNBMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJFPALJFEK_BIBPBCCNBMK_OFFSET))(this);
		}

		::System::Void OIEMAEFDBCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDJFPALJFEK_OIEMAEFDBCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDJFPALJFEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDJFPALJFEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDJFPALJFEK*))((::PBYTE)hIl2Cpp + LDJFPALJFEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJFPALJFEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJFPALJFEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDJFPALJFEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJFPALJFEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDJFPALJFEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDJFPALJFEK*))((::PBYTE)hIl2Cpp + LDJFPALJFEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDJFPALJFEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
