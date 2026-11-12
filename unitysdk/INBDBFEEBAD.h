#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INBDBFEEBAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define INBDBFEEBAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F9C4C30)
#define INBDBFEEBAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9C4F30)
#define INBDBFEEBAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9C4590)
#define INBDBFEEBAD_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1F9C4680)
#define INBDBFEEBAD_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1F9C4620)
#define INBDBFEEBAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9C4510)
#define INBDBFEEBAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9C4500)
#define INBDBFEEBAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9C47C0)
#define INBDBFEEBAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9C46A0)
#define INBDBFEEBAD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F9C4650)
#define INBDBFEEBAD_FDMJPNPGFMP_OFFSET UNITYSDK_OFFSET(0x1F9C4660)
#define INBDBFEEBAD_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1F9C4630)
#define INBDBFEEBAD_FOKJAPODECN_OFFSET UNITYSDK_OFFSET(0x1F9C4670)
#define INBDBFEEBAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F9C4960)
#define INBDBFEEBAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F9C44C0)
#define INBDBFEEBAD_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1F9C4690)
#define INBDBFEEBAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9C4E40)
#define INBDBFEEBAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F9C4D90)
#define INBDBFEEBAD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F9C4640)
#define INBDBFEEBAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9C44F0)
#define INBDBFEEBAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9C4A00)
#define INBDBFEEBAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9C4A60)

inline static constexpr unsigned int INBDBFEEBAD_TypeDefinitionIndex = 33199;

	class INBDBFEEBAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Boolean BJJIDCJCOAN; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 DNKADAFBILN; // 0x28
		static ::Google::Protobuf::MessageParser_1<::INBDBFEEBAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INBDBFEEBAD*>**)UnitySDK::FromName("", "INBDBFEEBAD")->GetStaticField(0x54CF0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HKEKJPMLKCP; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INBDBFEEBAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INBDBFEEBAD*))((::PBYTE)hIl2Cpp + INBDBFEEBAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INBDBFEEBAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INBDBFEEBAD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INBDBFEEBAD*>*(*)())((::PBYTE)hIl2Cpp + INBDBFEEBAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INBDBFEEBAD* Clone()
		{
			return ((::INBDBFEEBAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + INBDBFEEBAD_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INBDBFEEBAD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean FDMJPNPGFMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD_FDMJPNPGFMP_OFFSET))(this);
		}

		::System::Void FOKJAPODECN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INBDBFEEBAD_FOKJAPODECN_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INBDBFEEBAD_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INBDBFEEBAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INBDBFEEBAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INBDBFEEBAD*))((::PBYTE)hIl2Cpp + INBDBFEEBAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INBDBFEEBAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDBFEEBAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INBDBFEEBAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INBDBFEEBAD*))((::PBYTE)hIl2Cpp + INBDBFEEBAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INBDBFEEBAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
