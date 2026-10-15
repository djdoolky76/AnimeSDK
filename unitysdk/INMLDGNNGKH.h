#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMLDGNNGKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define INMLDGNNGKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E698EC0)
#define INMLDGNNGKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6991E0)
#define INMLDGNNGKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E698920)
#define INMLDGNNGKH_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E6989A0)
#define INMLDGNNGKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6988B0)
#define INMLDGNNGKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6988A0)
#define INMLDGNNGKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E698B60)
#define INMLDGNNGKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6989E0)
#define INMLDGNNGKH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6989D0)
#define INMLDGNNGKH_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E6989B0)
#define INMLDGNNGKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E698CE0)
#define INMLDGNNGKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E698860)
#define INMLDGNNGKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E699020)
#define INMLDGNNGKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E698F90)
#define INMLDGNNGKH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6989C0)
#define INMLDGNNGKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E698890)
#define INMLDGNNGKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E698D80)
#define INMLDGNNGKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E698DE0)

inline static constexpr unsigned int INMLDGNNGKH_TypeDefinitionIndex = 26547;

	class INMLDGNNGKH : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::INMLDGNNGKH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INMLDGNNGKH*>**)UnitySDK::FromName("", "INMLDGNNGKH")->GetStaticField(0x53F10);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLDGNNGKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INMLDGNNGKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMLDGNNGKH*))((::PBYTE)hIl2Cpp + INMLDGNNGKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INMLDGNNGKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INMLDGNNGKH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INMLDGNNGKH*>*(*)())((::PBYTE)hIl2Cpp + INMLDGNNGKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLDGNNGKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INMLDGNNGKH* Clone()
		{
			return ((::INMLDGNNGKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLDGNNGKH_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLDGNNGKH_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + INMLDGNNGKH_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLDGNNGKH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INMLDGNNGKH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INMLDGNNGKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INMLDGNNGKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMLDGNNGKH*))((::PBYTE)hIl2Cpp + INMLDGNNGKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLDGNNGKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLDGNNGKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INMLDGNNGKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLDGNNGKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INMLDGNNGKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMLDGNNGKH*))((::PBYTE)hIl2Cpp + INMLDGNNGKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INMLDGNNGKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
