#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AABGIFAEEEK.h"
#include "unitysdk/System/Object.h"
class CDMPJODLBEE;
class KLJLJCICPFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDMPJODLBEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E08A3A0)
#define CDMPJODLBEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08A800)
#define CDMPJODLBEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E089D80)
#define CDMPJODLBEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E089D10)
#define CDMPJODLBEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E089D00)
#define CDMPJODLBEE_DOGGADIPNCD_OFFSET UNITYSDK_OFFSET(0x1E089E40)
#define CDMPJODLBEE_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E089E20)
#define CDMPJODLBEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E089FF0)
#define CDMPJODLBEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E089E60)
#define CDMPJODLBEE_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E089E30)
#define CDMPJODLBEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E08A180)
#define CDMPJODLBEE_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E089E10)
#define CDMPJODLBEE_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E089E00)
#define CDMPJODLBEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E089CC0)
#define CDMPJODLBEE_LBKEDBMFPKB_OFFSET UNITYSDK_OFFSET(0x1E089E50)
#define CDMPJODLBEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E08A5D0)
#define CDMPJODLBEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E08A520)
#define CDMPJODLBEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E089CF0)
#define CDMPJODLBEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E08A1E0)
#define CDMPJODLBEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E08A240)

inline static constexpr unsigned int CDMPJODLBEE_TypeDefinitionIndex = 25657;

	class CDMPJODLBEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KLJLJCICPFF* NOHFFBHAHFM; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x20
		::AABGIFAEEEK GMPNCOBOFDM; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CDMPJODLBEE")->GetStaticField(0xF9C0);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object DMOGHJDAKFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPJODLBEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDMPJODLBEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDMPJODLBEE*))((::PBYTE)hIl2Cpp + CDMPJODLBEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDMPJODLBEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CDMPJODLBEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPJODLBEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDMPJODLBEE* Clone()
		{
			return ((::CDMPJODLBEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPJODLBEE_CLONE_OFFSET))(this);
		}

		::AABGIFAEEEK JBIOGKPHKKC()
		{
			return ((::AABGIFAEEEK(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPJODLBEE_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::AABGIFAEEEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::AABGIFAEEEK))((::PBYTE)hIl2Cpp + CDMPJODLBEE_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPJODLBEE_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDMPJODLBEE_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::KLJLJCICPFF* DOGGADIPNCD()
		{
			return ((::KLJLJCICPFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPJODLBEE_DOGGADIPNCD_OFFSET))(this);
		}

		::System::Void LBKEDBMFPKB(::KLJLJCICPFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJLJCICPFF*))((::PBYTE)hIl2Cpp + CDMPJODLBEE_LBKEDBMFPKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDMPJODLBEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDMPJODLBEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDMPJODLBEE*))((::PBYTE)hIl2Cpp + CDMPJODLBEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPJODLBEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPJODLBEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDMPJODLBEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMPJODLBEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDMPJODLBEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDMPJODLBEE*))((::PBYTE)hIl2Cpp + CDMPJODLBEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDMPJODLBEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
