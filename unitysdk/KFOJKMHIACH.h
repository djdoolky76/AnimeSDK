#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAICNBKIELL;
class KFOJKMHIACH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFOJKMHIACH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F53EF60)
#define KFOJKMHIACH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F53F230)
#define KFOJKMHIACH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F53EA10)
#define KFOJKMHIACH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F53E9A0)
#define KFOJKMHIACH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F53E990)
#define KFOJKMHIACH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F53EC50)
#define KFOJKMHIACH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F53EAD0)
#define KFOJKMHIACH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F53EAC0)
#define KFOJKMHIACH_FGLMHIPICNM_OFFSET UNITYSDK_OFFSET(0x1F53EAA0)
#define KFOJKMHIACH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F53EDD0)
#define KFOJKMHIACH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F53E950)
#define KFOJKMHIACH_KAFMPINCMJJ_OFFSET UNITYSDK_OFFSET(0x1F53EA90)
#define KFOJKMHIACH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F53F0A0)
#define KFOJKMHIACH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F53F030)
#define KFOJKMHIACH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F53EAB0)
#define KFOJKMHIACH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F53E980)
#define KFOJKMHIACH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F53EE20)
#define KFOJKMHIACH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F53EE80)

inline static constexpr unsigned int KFOJKMHIACH_TypeDefinitionIndex = 34737;

	class KFOJKMHIACH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FAICNBKIELL* GDLOOLAHGPP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KFOJKMHIACH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFOJKMHIACH*>**)UnitySDK::FromName("", "KFOJKMHIACH")->GetStaticField(0xEC90);
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

		static ::Google::Protobuf::MessageParser_1<::KFOJKMHIACH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFOJKMHIACH*>*(*)())((::PBYTE)hIl2Cpp + KFOJKMHIACH_JJGHOBBFNJD_OFFSET))();
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
