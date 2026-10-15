#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AANLJBLOOFO;
class BMGAPIOKLIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMGAPIOKLIG_AJMNOIINAME_OFFSET UNITYSDK_OFFSET(0x1E024CB0)
#define BMGAPIOKLIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E025220)
#define BMGAPIOKLIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0255C0)
#define BMGAPIOKLIG_CIBDMPPKPOB_OFFSET UNITYSDK_OFFSET(0x1E024CC0)
#define BMGAPIOKLIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E024BD0)
#define BMGAPIOKLIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E024B40)
#define BMGAPIOKLIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E024B30)
#define BMGAPIOKLIG_EOIFAAMKMHC_OFFSET UNITYSDK_OFFSET(0x1E024CA0)
#define BMGAPIOKLIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E024E90)
#define BMGAPIOKLIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E024CE0)
#define BMGAPIOKLIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E025010)
#define BMGAPIOKLIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E024AC0)
#define BMGAPIOKLIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0253D0)
#define BMGAPIOKLIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0252F0)
#define BMGAPIOKLIG_MIMHJBHMKGH_OFFSET UNITYSDK_OFFSET(0x1E024CD0)
#define BMGAPIOKLIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E024B20)
#define BMGAPIOKLIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0250E0)
#define BMGAPIOKLIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E025140)

	class BMGAPIOKLIG : public ::System::Object
	{
	public:
		::AANLJBLOOFO* HGJKNMJCENA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NMAMKMKIMPP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BMGAPIOKLIG")->GetStaticField(0x50220);
		}

		// static const ::System::Object NPLEFFPGOLJ; // 0x0
		// static const ::System::Object KGBIOKNMNGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMGAPIOKLIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMGAPIOKLIG*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BMGAPIOKLIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMGAPIOKLIG* Clone()
		{
			return ((::BMGAPIOKLIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CLONE_OFFSET))(this);
		}

		::AANLJBLOOFO* EOIFAAMKMHC()
		{
			return ((::AANLJBLOOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_EOIFAAMKMHC_OFFSET))(this);
		}

		::System::Void AJMNOIINAME(::AANLJBLOOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AANLJBLOOFO*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_AJMNOIINAME_OFFSET))(this, a1);
		}

		::System::UInt32 CIBDMPPKPOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CIBDMPPKPOB_OFFSET))(this);
		}

		::System::Void MIMHJBHMKGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_MIMHJBHMKGH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMGAPIOKLIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMGAPIOKLIG*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMGAPIOKLIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMGAPIOKLIG*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMGAPIOKLIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
