#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJGFHIIBNGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define AJGFHIIBNGP_AJINEBLMBNB_OFFSET UNITYSDK_OFFSET(0x1E3937D0)
#define AJGFHIIBNGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E393D40)
#define AJGFHIIBNGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E394120)
#define AJGFHIIBNGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E393700)
#define AJGFHIIBNGP_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E393790)
#define AJGFHIIBNGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E393680)
#define AJGFHIIBNGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E393670)
#define AJGFHIIBNGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E393980)
#define AJGFHIIBNGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3937F0)
#define AJGFHIIBNGP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3937C0)
#define AJGFHIIBNGP_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E3937A0)
#define AJGFHIIBNGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E393B10)
#define AJGFHIIBNGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E393630)
#define AJGFHIIBNGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E393F40)
#define AJGFHIIBNGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E393EA0)
#define AJGFHIIBNGP_OAECBHKJCEF_OFFSET UNITYSDK_OFFSET(0x1E3937E0)
#define AJGFHIIBNGP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3937B0)
#define AJGFHIIBNGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E393660)
#define AJGFHIIBNGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E393BA0)
#define AJGFHIIBNGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E393C00)

inline static constexpr unsigned int AJGFHIIBNGP_TypeDefinitionIndex = 34907;

	class AJGFHIIBNGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 DLAENJMCANJ; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::AJGFHIIBNGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AJGFHIIBNGP*>**)UnitySDK::FromName("", "AJGFHIIBNGP")->GetStaticField(0x3D8B0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CNLGPDPICBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJGFHIIBNGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJGFHIIBNGP*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AJGFHIIBNGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AJGFHIIBNGP*>*(*)())((::PBYTE)hIl2Cpp + AJGFHIIBNGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJGFHIIBNGP* Clone()
		{
			return ((::AJGFHIIBNGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 AJINEBLMBNB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_AJINEBLMBNB_OFFSET))(this);
		}

		::System::Void OAECBHKJCEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_OAECBHKJCEF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJGFHIIBNGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJGFHIIBNGP*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJGFHIIBNGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJGFHIIBNGP*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJGFHIIBNGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
