#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBBKDPMCLFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FBBKDPMCLFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F88ED20)
#define FBBKDPMCLFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F88F0F0)
#define FBBKDPMCLFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F756400)
#define FBBKDPMCLFK_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1F7564A0)
#define FBBKDPMCLFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F756390)
#define FBBKDPMCLFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F756380)
#define FBBKDPMCLFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F88E960)
#define FBBKDPMCLFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7564E0)
#define FBBKDPMCLFK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F756490)
#define FBBKDPMCLFK_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1F7564B0)
#define FBBKDPMCLFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F88EAF0)
#define FBBKDPMCLFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F756340)
#define FBBKDPMCLFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F88EF10)
#define FBBKDPMCLFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F88EE70)
#define FBBKDPMCLFK_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1F7564D0)
#define FBBKDPMCLFK_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1F7564C0)
#define FBBKDPMCLFK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F756480)
#define FBBKDPMCLFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F756370)
#define FBBKDPMCLFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F88EB80)
#define FBBKDPMCLFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F88EBE0)

inline static constexpr unsigned int FBBKDPMCLFK_TypeDefinitionIndex = 26676;

	class FBBKDPMCLFK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 ABPDPMHFFNN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FBBKDPMCLFK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBBKDPMCLFK*>**)UnitySDK::FromName("", "FBBKDPMCLFK")->GetStaticField(0x3FE30);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBBKDPMCLFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBBKDPMCLFK*))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBBKDPMCLFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBBKDPMCLFK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBBKDPMCLFK*>*(*)())((::PBYTE)hIl2Cpp + FBBKDPMCLFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBBKDPMCLFK* Clone()
		{
			return ((::FBBKDPMCLFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBBKDPMCLFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBBKDPMCLFK*))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBBKDPMCLFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBBKDPMCLFK*))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBBKDPMCLFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
