#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AABGIFAEEEK.h"
#include "unitysdk/System/Object.h"
class CDMPJODLBEE;
class KLJLJCICPFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDMPJODLBEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F34F820)
#define CDMPJODLBEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F34FC80)
#define CDMPJODLBEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F34F200)
#define CDMPJODLBEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F34F190)
#define CDMPJODLBEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F34F180)
#define CDMPJODLBEE_DOGGADIPNCD_OFFSET UNITYSDK_OFFSET(0x1F34F2C0)
#define CDMPJODLBEE_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1F34F2A0)
#define CDMPJODLBEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F34F470)
#define CDMPJODLBEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F34F2E0)
#define CDMPJODLBEE_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1F34F2B0)
#define CDMPJODLBEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F34F600)
#define CDMPJODLBEE_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1F34F290)
#define CDMPJODLBEE_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1F34F280)
#define CDMPJODLBEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F34F140)
#define CDMPJODLBEE_LBKEDBMFPKB_OFFSET UNITYSDK_OFFSET(0x1F34F2D0)
#define CDMPJODLBEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F34FA50)
#define CDMPJODLBEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F34F9A0)
#define CDMPJODLBEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F34F170)
#define CDMPJODLBEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F34F660)
#define CDMPJODLBEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F34F6C0)

inline static constexpr unsigned int CDMPJODLBEE_TypeDefinitionIndex = 26154;

	class CDMPJODLBEE : public ::System::Object
	{
	public:
		::KLJLJCICPFF* NOHFFBHAHFM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::AABGIFAEEEK GMPNCOBOFDM; // 0x20
		::System::UInt32 GEMFJILOPLL; // 0x24
		static ::Google::Protobuf::MessageParser_1<::CDMPJODLBEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDMPJODLBEE*>**)UnitySDK::FromName("", "CDMPJODLBEE")->GetStaticField(0x297E0);
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

		static ::Google::Protobuf::MessageParser_1<::CDMPJODLBEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDMPJODLBEE*>*(*)())((::PBYTE)hIl2Cpp + CDMPJODLBEE_JJGHOBBFNJD_OFFSET))();
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
