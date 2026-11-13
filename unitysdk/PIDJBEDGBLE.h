#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIKPHEMHIOH;
class PIDJBEDGBLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIDJBEDGBLE_AJMNOIINAME_OFFSET UNITYSDK_OFFSET(0x2054A920)
#define PIDJBEDGBLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2054AE70)
#define PIDJBEDGBLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x2054B210)
#define PIDJBEDGBLE_CIBDMPPKPOB_OFFSET UNITYSDK_OFFSET(0x2054A930)
#define PIDJBEDGBLE_CLONE_OFFSET UNITYSDK_OFFSET(0x2054A840)
#define PIDJBEDGBLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2054A7B0)
#define PIDJBEDGBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x2054A7A0)
#define PIDJBEDGBLE_EOIFAAMKMHC_OFFSET UNITYSDK_OFFSET(0x2054A910)
#define PIDJBEDGBLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2054AB00)
#define PIDJBEDGBLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2054A950)
#define PIDJBEDGBLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2054AC80)
#define PIDJBEDGBLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2054A730)
#define PIDJBEDGBLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2054B020)
#define PIDJBEDGBLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2054AF40)
#define PIDJBEDGBLE_MIMHJBHMKGH_OFFSET UNITYSDK_OFFSET(0x2054A940)
#define PIDJBEDGBLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2054A790)
#define PIDJBEDGBLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2054AD30)
#define PIDJBEDGBLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x2054AD90)

inline static constexpr unsigned int PIDJBEDGBLE_TypeDefinitionIndex = 27366;

	class PIDJBEDGBLE : public ::System::Object
	{
	public:
		::EIKPHEMHIOH* HGJKNMJCENA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NMAMKMKIMPP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PIDJBEDGBLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIDJBEDGBLE*>**)UnitySDK::FromName("", "PIDJBEDGBLE")->GetStaticField(0x3B850);
		}

		// static const ::System::Object NPLEFFPGOLJ; // 0x0
		// static const ::System::Object KGBIOKNMNGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIDJBEDGBLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIDJBEDGBLE*))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIDJBEDGBLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIDJBEDGBLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIDJBEDGBLE*>*(*)())((::PBYTE)hIl2Cpp + PIDJBEDGBLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIDJBEDGBLE* Clone()
		{
			return ((::PIDJBEDGBLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_CLONE_OFFSET))(this);
		}

		::EIKPHEMHIOH* EOIFAAMKMHC()
		{
			return ((::EIKPHEMHIOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_EOIFAAMKMHC_OFFSET))(this);
		}

		::System::Void AJMNOIINAME(::EIKPHEMHIOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIKPHEMHIOH*))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_AJMNOIINAME_OFFSET))(this, a1);
		}

		::System::UInt32 CIBDMPPKPOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_CIBDMPPKPOB_OFFSET))(this);
		}

		::System::Void MIMHJBHMKGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_MIMHJBHMKGH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIDJBEDGBLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIDJBEDGBLE*))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIDJBEDGBLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIDJBEDGBLE*))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIDJBEDGBLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
