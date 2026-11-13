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

#define INBDBFEEBAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206C3990)
#define INBDBFEEBAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x206C3C90)
#define INBDBFEEBAD_CLONE_OFFSET UNITYSDK_OFFSET(0x206C32F0)
#define INBDBFEEBAD_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x206C33E0)
#define INBDBFEEBAD_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x206C3380)
#define INBDBFEEBAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206C3270)
#define INBDBFEEBAD_CTOR_OFFSET UNITYSDK_OFFSET(0x206C3260)
#define INBDBFEEBAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206C3520)
#define INBDBFEEBAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x206C3400)
#define INBDBFEEBAD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x206C33B0)
#define INBDBFEEBAD_FDMJPNPGFMP_OFFSET UNITYSDK_OFFSET(0x206C33C0)
#define INBDBFEEBAD_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x206C3390)
#define INBDBFEEBAD_FOKJAPODECN_OFFSET UNITYSDK_OFFSET(0x206C33D0)
#define INBDBFEEBAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206C36C0)
#define INBDBFEEBAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206C3220)
#define INBDBFEEBAD_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x206C33F0)
#define INBDBFEEBAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206C3BA0)
#define INBDBFEEBAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206C3AF0)
#define INBDBFEEBAD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x206C33A0)
#define INBDBFEEBAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206C3250)
#define INBDBFEEBAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206C3760)
#define INBDBFEEBAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x206C37C0)

inline static constexpr unsigned int INBDBFEEBAD_TypeDefinitionIndex = 33199;

	class INBDBFEEBAD : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Boolean BJJIDCJCOAN; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 DNKADAFBILN; // 0x28
		static ::Google::Protobuf::MessageParser_1<::INBDBFEEBAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INBDBFEEBAD*>**)UnitySDK::FromName("", "INBDBFEEBAD")->GetStaticField(0x4F340);
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
