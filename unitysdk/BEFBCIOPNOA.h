#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFBCIOPNOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define BEFBCIOPNOA_AINDMMANKAN_OFFSET UNITYSDK_OFFSET(0x1EA61340)
#define BEFBCIOPNOA_ALKAFBCALDK_OFFSET UNITYSDK_OFFSET(0x1EA61320)
#define BEFBCIOPNOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA61B30)
#define BEFBCIOPNOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA61F70)
#define BEFBCIOPNOA_CJONELLHKMC_OFFSET UNITYSDK_OFFSET(0x1EA61330)
#define BEFBCIOPNOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA612D0)
#define BEFBCIOPNOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA611C0)
#define BEFBCIOPNOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA611B0)
#define BEFBCIOPNOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA613B0)
#define BEFBCIOPNOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA61380)
#define BEFBCIOPNOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA61720)
#define BEFBCIOPNOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA61170)
#define BEFBCIOPNOA_JOMHGBHJGKD_OFFSET UNITYSDK_OFFSET(0x1EA61300)
#define BEFBCIOPNOA_LNLNNAGBKLB_OFFSET UNITYSDK_OFFSET(0x1EA61360)
#define BEFBCIOPNOA_MEGFLKIHBGP_OFFSET UNITYSDK_OFFSET(0x1EA61350)
#define BEFBCIOPNOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA61DA0)
#define BEFBCIOPNOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA61C20)
#define BEFBCIOPNOA_NBDADNMMBLD_OFFSET UNITYSDK_OFFSET(0x1EA61370)
#define BEFBCIOPNOA_NHOMEIFKCGH_OFFSET UNITYSDK_OFFSET(0x1EA61310)
#define BEFBCIOPNOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA611A0)
#define BEFBCIOPNOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA61930)
#define BEFBCIOPNOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA61990)

	class BEFBCIOPNOA : public ::System::Object
	{
	public:
		::Proto::ItemList* OPMLHBNDENF; // 0x10
		::Proto::ItemList* DINDHAIGDBM; // 0x18
		::Proto::ItemList* MJHJHEFKHOM; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::Proto::ItemList* EJFHFDJJLDG; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BEFBCIOPNOA")->GetStaticField(0x40800);
		}

		// static const ::System::Object CIOKDDAIOOF; // 0x0
		// static const ::System::Object EHKOKGLGJOJ; // 0x0
		// static const ::System::Object KFBBMKPILMB; // 0x0
		// static const ::System::Object KOAJOIDJLMM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BEFBCIOPNOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFBCIOPNOA*))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEFBCIOPNOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BEFBCIOPNOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BEFBCIOPNOA* Clone()
		{
			return ((::BEFBCIOPNOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* JOMHGBHJGKD()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_JOMHGBHJGKD_OFFSET))(this);
		}

		::System::Void NHOMEIFKCGH(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_NHOMEIFKCGH_OFFSET))(this, a1);
		}

		::Proto::ItemList* ALKAFBCALDK()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_ALKAFBCALDK_OFFSET))(this);
		}

		::System::Void CJONELLHKMC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_CJONELLHKMC_OFFSET))(this, a1);
		}

		::Proto::ItemList* AINDMMANKAN()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_AINDMMANKAN_OFFSET))(this);
		}

		::System::Void MEGFLKIHBGP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_MEGFLKIHBGP_OFFSET))(this, a1);
		}

		::Proto::ItemList* LNLNNAGBKLB()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_LNLNNAGBKLB_OFFSET))(this);
		}

		::System::Void NBDADNMMBLD(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_NBDADNMMBLD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BEFBCIOPNOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BEFBCIOPNOA*))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BEFBCIOPNOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEFBCIOPNOA*))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BEFBCIOPNOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
