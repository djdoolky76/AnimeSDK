#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMCCBANNPKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMCCBANNPKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB408B0)
#define NMCCBANNPKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB40B10)
#define NMCCBANNPKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB404C0)
#define NMCCBANNPKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB40480)
#define NMCCBANNPKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB40470)
#define NMCCBANNPKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB40630)
#define NMCCBANNPKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB40550)
#define NMCCBANNPKB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB40520)
#define NMCCBANNPKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB40710)
#define NMCCBANNPKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB40430)
#define NMCCBANNPKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB40990)
#define NMCCBANNPKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB40950)
#define NMCCBANNPKB_MFFNOBPDPIP_OFFSET UNITYSDK_OFFSET(0x1EB40530)
#define NMCCBANNPKB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB40510)
#define NMCCBANNPKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB40460)
#define NMCCBANNPKB_PJLAFENJPNA_OFFSET UNITYSDK_OFFSET(0x1EB40540)
#define NMCCBANNPKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB40740)
#define NMCCBANNPKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB407A0)

inline static constexpr unsigned int NMCCBANNPKB_TypeDefinitionIndex = 32198;

	class NMCCBANNPKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Boolean OHCDIALNEKO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NMCCBANNPKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NMCCBANNPKB*>**)UnitySDK::FromName("", "NMCCBANNPKB")->GetStaticField(0x6A290);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JLKJNOPDKDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCCBANNPKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMCCBANNPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMCCBANNPKB*))((::PBYTE)hIl2Cpp + NMCCBANNPKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMCCBANNPKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NMCCBANNPKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NMCCBANNPKB*>*(*)())((::PBYTE)hIl2Cpp + NMCCBANNPKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCCBANNPKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMCCBANNPKB* Clone()
		{
			return ((::NMCCBANNPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCCBANNPKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCCBANNPKB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMCCBANNPKB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean MFFNOBPDPIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCCBANNPKB_MFFNOBPDPIP_OFFSET))(this);
		}

		::System::Void PJLAFENJPNA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMCCBANNPKB_PJLAFENJPNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMCCBANNPKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMCCBANNPKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMCCBANNPKB*))((::PBYTE)hIl2Cpp + NMCCBANNPKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCCBANNPKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCCBANNPKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMCCBANNPKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCCBANNPKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMCCBANNPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMCCBANNPKB*))((::PBYTE)hIl2Cpp + NMCCBANNPKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMCCBANNPKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
