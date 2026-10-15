#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEHDPNELHCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define MEHDPNELHCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9DF110)
#define MEHDPNELHCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DF4E0)
#define MEHDPNELHCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9DEAE0)
#define MEHDPNELHCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9DEA70)
#define MEHDPNELHCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DEA60)
#define MEHDPNELHCD_DPKOHJLBEBB_OFFSET UNITYSDK_OFFSET(0x1E9DEB80)
#define MEHDPNELHCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9DED50)
#define MEHDPNELHCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9DEBC0)
#define MEHDPNELHCD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9DEBB0)
#define MEHDPNELHCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9DEEE0)
#define MEHDPNELHCD_IJPLICKGMHC_OFFSET UNITYSDK_OFFSET(0x1E9DEB90)
#define MEHDPNELHCD_JGDJGILDNJF_OFFSET UNITYSDK_OFFSET(0x1E9DEB70)
#define MEHDPNELHCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9DEA20)
#define MEHDPNELHCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9DF300)
#define MEHDPNELHCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9DF260)
#define MEHDPNELHCD_NNBAOEHFDJM_OFFSET UNITYSDK_OFFSET(0x1E9DEB60)
#define MEHDPNELHCD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9DEBA0)
#define MEHDPNELHCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9DEA50)
#define MEHDPNELHCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9DEF70)
#define MEHDPNELHCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9DEFD0)

inline static constexpr unsigned int MEHDPNELHCD_TypeDefinitionIndex = 31914;

	class MEHDPNELHCD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JEDJCPJBEOM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 MEPOEBNNJMI; // 0x24
		static ::Google::Protobuf::MessageParser_1<::MEHDPNELHCD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MEHDPNELHCD*>**)UnitySDK::FromName("", "MEHDPNELHCD")->GetStaticField(0x4D3F0);
		}

		// static const ::System::Object AGGOGPLGGOE; // 0x0
		// static const ::System::Object HPGDFCOBPGH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDPNELHCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEHDPNELHCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEHDPNELHCD*))((::PBYTE)hIl2Cpp + MEHDPNELHCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEHDPNELHCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MEHDPNELHCD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MEHDPNELHCD*>*(*)())((::PBYTE)hIl2Cpp + MEHDPNELHCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDPNELHCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEHDPNELHCD* Clone()
		{
			return ((::MEHDPNELHCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDPNELHCD_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBAOEHFDJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDPNELHCD_NNBAOEHFDJM_OFFSET))(this);
		}

		::System::Void JGDJGILDNJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEHDPNELHCD_JGDJGILDNJF_OFFSET))(this, a1);
		}

		::Proto::ItemList* DPKOHJLBEBB()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDPNELHCD_DPKOHJLBEBB_OFFSET))(this);
		}

		::System::Void IJPLICKGMHC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + MEHDPNELHCD_IJPLICKGMHC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDPNELHCD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEHDPNELHCD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEHDPNELHCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEHDPNELHCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEHDPNELHCD*))((::PBYTE)hIl2Cpp + MEHDPNELHCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDPNELHCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDPNELHCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEHDPNELHCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHDPNELHCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEHDPNELHCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEHDPNELHCD*))((::PBYTE)hIl2Cpp + MEHDPNELHCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEHDPNELHCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
