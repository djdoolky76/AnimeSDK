#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBOCFEEEEII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define HBOCFEEEEII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E502530)
#define HBOCFEEEEII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E502890)
#define HBOCFEEEEII_CLONE_OFFSET UNITYSDK_OFFSET(0x1E501F90)
#define HBOCFEEEEII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E501F20)
#define HBOCFEEEEII_CTOR_OFFSET UNITYSDK_OFFSET(0x1E501F10)
#define HBOCFEEEEII_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E502050)
#define HBOCFEEEEII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E502100)
#define HBOCFEEEEII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E502090)
#define HBOCFEEEEII_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E502020)
#define HBOCFEEEEII_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1E502030)
#define HBOCFEEEEII_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1E502040)
#define HBOCFEEEEII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5022A0)
#define HBOCFEEEEII_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1E502080)
#define HBOCFEEEEII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E501ED0)
#define HBOCFEEEEII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5027A0)
#define HBOCFEEEEII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5026F0)
#define HBOCFEEEEII_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E502070)
#define HBOCFEEEEII_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E502060)
#define HBOCFEEEEII_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E502010)
#define HBOCFEEEEII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E501F00)
#define HBOCFEEEEII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E502340)
#define HBOCFEEEEII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5023A0)

inline static constexpr unsigned int HBOCFEEEEII_TypeDefinitionIndex = 26599;

	class HBOCFEEEEII : public ::System::Object
	{
	public:
		::Proto::ItemList* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GKOHBFHOFKN; // 0x20
		::System::UInt32 FLBKCMIIFFP; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::HBOCFEEEEII*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HBOCFEEEEII*>**)UnitySDK::FromName("", "HBOCFEEEEII")->GetStaticField(0x25D20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OOGFOPMFOHP; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBOCFEEEEII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBOCFEEEEII*))((::PBYTE)hIl2Cpp + HBOCFEEEEII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBOCFEEEEII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HBOCFEEEEII*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HBOCFEEEEII*>*(*)())((::PBYTE)hIl2Cpp + HBOCFEEEEII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBOCFEEEEII* Clone()
		{
			return ((::HBOCFEEEEII*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBOCFEEEEII_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBOCFEEEEII_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBOCFEEEEII_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + HBOCFEEEEII_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBOCFEEEEII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBOCFEEEEII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBOCFEEEEII*))((::PBYTE)hIl2Cpp + HBOCFEEEEII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBOCFEEEEII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBOCFEEEEII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBOCFEEEEII*))((::PBYTE)hIl2Cpp + HBOCFEEEEII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBOCFEEEEII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
