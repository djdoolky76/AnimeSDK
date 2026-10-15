#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAPCCLFFPNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define HAPCCLFFPNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E50B5D0)
#define HAPCCLFFPNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50B8F0)
#define HAPCCLFFPNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E50B040)
#define HAPCCLFFPNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E50AFD0)
#define HAPCCLFFPNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50AFC0)
#define HAPCCLFFPNB_DPKOHJLBEBB_OFFSET UNITYSDK_OFFSET(0x1E50B0E0)
#define HAPCCLFFPNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E50B280)
#define HAPCCLFFPNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E50B100)
#define HAPCCLFFPNB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E50B0D0)
#define HAPCCLFFPNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E50B400)
#define HAPCCLFFPNB_IJPLICKGMHC_OFFSET UNITYSDK_OFFSET(0x1E50B0F0)
#define HAPCCLFFPNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E50AF80)
#define HAPCCLFFPNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E50B730)
#define HAPCCLFFPNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E50B6A0)
#define HAPCCLFFPNB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E50B0C0)
#define HAPCCLFFPNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E50AFB0)
#define HAPCCLFFPNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E50B490)
#define HAPCCLFFPNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E50B4F0)

inline static constexpr unsigned int HAPCCLFFPNB_TypeDefinitionIndex = 31239;

	class HAPCCLFFPNB : public ::System::Object
	{
	public:
		::Proto::ItemList* JEDJCPJBEOM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HAPCCLFFPNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HAPCCLFFPNB*>**)UnitySDK::FromName("", "HAPCCLFFPNB")->GetStaticField(0x2D560);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HPGDFCOBPGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HAPCCLFFPNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAPCCLFFPNB*))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAPCCLFFPNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HAPCCLFFPNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HAPCCLFFPNB*>*(*)())((::PBYTE)hIl2Cpp + HAPCCLFFPNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HAPCCLFFPNB* Clone()
		{
			return ((::HAPCCLFFPNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* DPKOHJLBEBB()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_DPKOHJLBEBB_OFFSET))(this);
		}

		::System::Void IJPLICKGMHC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_IJPLICKGMHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HAPCCLFFPNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAPCCLFFPNB*))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HAPCCLFFPNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAPCCLFFPNB*))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HAPCCLFFPNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
