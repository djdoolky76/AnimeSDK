#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKDPLDPGGKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKDPLDPGGKF_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x20639880)
#define AKDPLDPGGKF_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x20639860)
#define AKDPLDPGGKF_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x20639870)
#define AKDPLDPGGKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20639D70)
#define AKDPLDPGGKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x2063A0E0)
#define AKDPLDPGGKF_CLONE_OFFSET UNITYSDK_OFFSET(0x206397D0)
#define AKDPLDPGGKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20639730)
#define AKDPLDPGGKF_CTOR_OFFSET UNITYSDK_OFFSET(0x206396E0)
#define AKDPLDPGGKF_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x20639830)
#define AKDPLDPGGKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20639940)
#define AKDPLDPGGKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x20639890)
#define AKDPLDPGGKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20639A50)
#define AKDPLDPGGKF_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x20639850)
#define AKDPLDPGGKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20639670)
#define AKDPLDPGGKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20639FD0)
#define AKDPLDPGGKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20639F70)
#define AKDPLDPGGKF_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x20639820)
#define AKDPLDPGGKF_NKEBNPLFGPG_OFFSET UNITYSDK_OFFSET(0x20639840)
#define AKDPLDPGGKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206396D0)
#define AKDPLDPGGKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20639B50)
#define AKDPLDPGGKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x20639BB0)

inline static constexpr unsigned int AKDPLDPGGKF_TypeDefinitionIndex = 30228;

	class AKDPLDPGGKF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MGNNCOPPOOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 PPNELLDGNPC; // 0x20
		::System::UInt32 ODCKBAEKGJG; // 0x24
		::System::UInt32 MJIMFDKFGDE; // 0x28
		static ::Google::Protobuf::MessageParser_1<::AKDPLDPGGKF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AKDPLDPGGKF*>**)UnitySDK::FromName("", "AKDPLDPGGKF")->GetStaticField(0x333C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LNAIAPOPHPL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AKDPLDPGGKF")->GetStaticField(0x333C8);
		}

		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object HPGCNLMNNFN; // 0x0
		// static const ::System::Object GLIJLPOGDAK; // 0x0
		// static const ::System::Object BDHJLOLMAKK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKDPLDPGGKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKDPLDPGGKF*))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKDPLDPGGKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AKDPLDPGGKF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AKDPLDPGGKF*>*(*)())((::PBYTE)hIl2Cpp + AKDPLDPGGKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKDPLDPGGKF* Clone()
		{
			return ((::AKDPLDPGGKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKEBNPLFGPG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_NKEBNPLFGPG_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_AFJGHICACON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKDPLDPGGKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKDPLDPGGKF*))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKDPLDPGGKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKDPLDPGGKF*))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKDPLDPGGKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
