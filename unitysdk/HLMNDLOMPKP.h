#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLMNDLOMPKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLMNDLOMPKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C26C0)
#define HLMNDLOMPKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C29C0)
#define HLMNDLOMPKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C2230)
#define HLMNDLOMPKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C2200)
#define HLMNDLOMPKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C21F0)
#define HLMNDLOMPKP_DAJJPJDHBJE_OFFSET UNITYSDK_OFFSET(0x1E5C22B0)
#define HLMNDLOMPKP_DGMLMGJOHLP_OFFSET UNITYSDK_OFFSET(0x1E5C2300)
#define HLMNDLOMPKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C23B0)
#define HLMNDLOMPKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C2320)
#define HLMNDLOMPKP_GBBEACAMEIJ_OFFSET UNITYSDK_OFFSET(0x1E5C22F0)
#define HLMNDLOMPKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C2490)
#define HLMNDLOMPKP_HAJGJEOENHG_OFFSET UNITYSDK_OFFSET(0x1E5C22A0)
#define HLMNDLOMPKP_JFKIHNNDIBJ_OFFSET UNITYSDK_OFFSET(0x1E5C22D0)
#define HLMNDLOMPKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C2180)
#define HLMNDLOMPKP_LAHFFKEIGHC_OFFSET UNITYSDK_OFFSET(0x1E5C22E0)
#define HLMNDLOMPKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C2920)
#define HLMNDLOMPKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C28D0)
#define HLMNDLOMPKP_OAGIDBKMFAD_OFFSET UNITYSDK_OFFSET(0x1E5C22C0)
#define HLMNDLOMPKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C21E0)
#define HLMNDLOMPKP_PIGHFKFIADN_OFFSET UNITYSDK_OFFSET(0x1E5C2310)
#define HLMNDLOMPKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C24D0)
#define HLMNDLOMPKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C2530)

	class HLMNDLOMPKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IPMMINNJJGP; // 0x18
		::System::UInt32 IBNGEDOAOIF; // 0x1C
		::System::UInt32 LMLNLCAALJA; // 0x20
		::System::UInt32 DFHGLPDMHNC; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLMNDLOMPKP")->GetStaticField(0x486E0);
		}

		// static const ::System::Object BMMPBGADFGF; // 0x0
		// static const ::System::Object BLAAGFOOMDE; // 0x0
		// static const ::System::Object HFCOOKIKLMP; // 0x0
		// static const ::System::Object EENLCIFANBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLMNDLOMPKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLMNDLOMPKP*))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLMNDLOMPKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLMNDLOMPKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLMNDLOMPKP* Clone()
		{
			return ((::HLMNDLOMPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_CLONE_OFFSET))(this);
		}

		::System::UInt32 HAJGJEOENHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_HAJGJEOENHG_OFFSET))(this);
		}

		::System::Void DAJJPJDHBJE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_DAJJPJDHBJE_OFFSET))(this, a1);
		}

		::System::UInt32 OAGIDBKMFAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_OAGIDBKMFAD_OFFSET))(this);
		}

		::System::Void JFKIHNNDIBJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_JFKIHNNDIBJ_OFFSET))(this, a1);
		}

		::System::UInt32 LAHFFKEIGHC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_LAHFFKEIGHC_OFFSET))(this);
		}

		::System::Void GBBEACAMEIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_GBBEACAMEIJ_OFFSET))(this, a1);
		}

		::System::UInt32 DGMLMGJOHLP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_DGMLMGJOHLP_OFFSET))(this);
		}

		::System::Void PIGHFKFIADN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_PIGHFKFIADN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLMNDLOMPKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLMNDLOMPKP*))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLMNDLOMPKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLMNDLOMPKP*))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLMNDLOMPKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
