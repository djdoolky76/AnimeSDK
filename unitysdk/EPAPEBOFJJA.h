#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPAPEBOFJJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define EPAPEBOFJJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5E7DC0)
#define EPAPEBOFJJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5E80E0)
#define EPAPEBOFJJA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F5E77C0)
#define EPAPEBOFJJA_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1F5E7870)
#define EPAPEBOFJJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5E7750)
#define EPAPEBOFJJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E7740)
#define EPAPEBOFJJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5E7A60)
#define EPAPEBOFJJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F5E78B0)
#define EPAPEBOFJJA_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1F5E7880)
#define EPAPEBOFJJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5E7BE0)
#define EPAPEBOFJJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5E76D0)
#define EPAPEBOFJJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F5E7F20)
#define EPAPEBOFJJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5E7E90)
#define EPAPEBOFJJA_MOGOMOGKKHL_OFFSET UNITYSDK_OFFSET(0x1F5E78A0)
#define EPAPEBOFJJA_NJEGOJPGPBM_OFFSET UNITYSDK_OFFSET(0x1F5E7890)
#define EPAPEBOFJJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5E7730)
#define EPAPEBOFJJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5E7C80)
#define EPAPEBOFJJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5E7CE0)

inline static constexpr unsigned int EPAPEBOFJJA_TypeDefinitionIndex = 27362;

	class EPAPEBOFJJA : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GNAIKKKBPKG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EPAPEBOFJJA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPAPEBOFJJA*>**)UnitySDK::FromName("", "EPAPEBOFJJA")->GetStaticField(0xE2C0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object POMDBPNIJKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPAPEBOFJJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPAPEBOFJJA*))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPAPEBOFJJA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPAPEBOFJJA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPAPEBOFJJA*>*(*)())((::PBYTE)hIl2Cpp + EPAPEBOFJJA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPAPEBOFJJA* Clone()
		{
			return ((::EPAPEBOFJJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 NJEGOJPGPBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_NJEGOJPGPBM_OFFSET))(this);
		}

		::System::Void MOGOMOGKKHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_MOGOMOGKKHL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPAPEBOFJJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPAPEBOFJJA*))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPAPEBOFJJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPAPEBOFJJA*))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPAPEBOFJJA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
