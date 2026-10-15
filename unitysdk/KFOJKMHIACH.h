#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAICNBKIELL;
class KFOJKMHIACH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFOJKMHIACH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E82F4F0)
#define KFOJKMHIACH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82F7C0)
#define KFOJKMHIACH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E82EFA0)
#define KFOJKMHIACH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E82EF30)
#define KFOJKMHIACH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E82EF20)
#define KFOJKMHIACH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E82F1E0)
#define KFOJKMHIACH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E82F060)
#define KFOJKMHIACH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E82F050)
#define KFOJKMHIACH_FGLMHIPICNM_OFFSET UNITYSDK_OFFSET(0x1E82F030)
#define KFOJKMHIACH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E82F360)
#define KFOJKMHIACH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E82EEE0)
#define KFOJKMHIACH_KAFMPINCMJJ_OFFSET UNITYSDK_OFFSET(0x1E82F020)
#define KFOJKMHIACH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E82F630)
#define KFOJKMHIACH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E82F5C0)
#define KFOJKMHIACH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E82F040)
#define KFOJKMHIACH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E82EF10)
#define KFOJKMHIACH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E82F3B0)
#define KFOJKMHIACH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E82F410)

	class KFOJKMHIACH : public ::System::Object
	{
	public:
		::FAICNBKIELL* GDLOOLAHGPP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KFOJKMHIACH")->GetStaticField(0x14D60);
		}

		// static const ::System::Object JDLHDMKEFKL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJKMHIACH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFOJKMHIACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFOJKMHIACH*))((::PBYTE)hIl2Cpp + KFOJKMHIACH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFOJKMHIACH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KFOJKMHIACH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJKMHIACH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFOJKMHIACH* Clone()
		{
			return ((::KFOJKMHIACH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJKMHIACH_CLONE_OFFSET))(this);
		}

		::FAICNBKIELL* KAFMPINCMJJ()
		{
			return ((::FAICNBKIELL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJKMHIACH_KAFMPINCMJJ_OFFSET))(this);
		}

		::System::Void FGLMHIPICNM(::FAICNBKIELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAICNBKIELL*))((::PBYTE)hIl2Cpp + KFOJKMHIACH_FGLMHIPICNM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJKMHIACH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFOJKMHIACH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFOJKMHIACH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFOJKMHIACH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFOJKMHIACH*))((::PBYTE)hIl2Cpp + KFOJKMHIACH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJKMHIACH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJKMHIACH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFOJKMHIACH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJKMHIACH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFOJKMHIACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFOJKMHIACH*))((::PBYTE)hIl2Cpp + KFOJKMHIACH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFOJKMHIACH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
