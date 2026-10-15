#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIIAOELLFAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define AIIAOELLFAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E27C6A0)
#define AIIAOELLFAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E27C9A0)
#define AIIAOELLFAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E27C010)
#define AIIAOELLFAP_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E27C0B0)
#define AIIAOELLFAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E27BFA0)
#define AIIAOELLFAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27BF90)
#define AIIAOELLFAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E27C230)
#define AIIAOELLFAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E27C110)
#define AIIAOELLFAP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E27C100)
#define AIIAOELLFAP_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E27C0C0)
#define AIIAOELLFAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E27C3D0)
#define AIIAOELLFAP_HNHHFFHAAOF_OFFSET UNITYSDK_OFFSET(0x1E27C090)
#define AIIAOELLFAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E27BF50)
#define AIIAOELLFAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E27C8A0)
#define AIIAOELLFAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E27C7F0)
#define AIIAOELLFAP_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E27C0E0)
#define AIIAOELLFAP_MLMDGHMGMPD_OFFSET UNITYSDK_OFFSET(0x1E27C0A0)
#define AIIAOELLFAP_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E27C0D0)
#define AIIAOELLFAP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E27C0F0)
#define AIIAOELLFAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E27BF80)
#define AIIAOELLFAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E27C470)
#define AIIAOELLFAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E27C4D0)

inline static constexpr unsigned int AIIAOELLFAP_TypeDefinitionIndex = 27953;

	class AIIAOELLFAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 ABPDPMHFFNN; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::Boolean MNEDBKBAJJF; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AIIAOELLFAP")->GetStaticField(0x32E20);
		}

		// static const ::System::Object EOGEPKBLOBE; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIIAOELLFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIIAOELLFAP*))((::PBYTE)hIl2Cpp + AIIAOELLFAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIIAOELLFAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AIIAOELLFAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIIAOELLFAP* Clone()
		{
			return ((::AIIAOELLFAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP_CLONE_OFFSET))(this);
		}

		::System::Boolean HNHHFFHAAOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP_HNHHFFHAAOF_OFFSET))(this);
		}

		::System::Void MLMDGHMGMPD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIIAOELLFAP_MLMDGHMGMPD_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + AIIAOELLFAP_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIIAOELLFAP_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIIAOELLFAP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIIAOELLFAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIIAOELLFAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIIAOELLFAP*))((::PBYTE)hIl2Cpp + AIIAOELLFAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIIAOELLFAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIIAOELLFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIIAOELLFAP*))((::PBYTE)hIl2Cpp + AIIAOELLFAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIIAOELLFAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
