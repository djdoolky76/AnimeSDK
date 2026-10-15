#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPIHDPGDMKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPIHDPGDMKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8BBC20)
#define KPIHDPGDMKB_CCAJBIDEFEA_OFFSET UNITYSDK_OFFSET(0x1E8BB880)
#define KPIHDPGDMKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BBFA0)
#define KPIHDPGDMKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8BB800)
#define KPIHDPGDMKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8BB7C0)
#define KPIHDPGDMKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BB7B0)
#define KPIHDPGDMKB_DMNJCBAKFIB_OFFSET UNITYSDK_OFFSET(0x1E8BB850)
#define KPIHDPGDMKB_DMOBBMNJAAJ_OFFSET UNITYSDK_OFFSET(0x1E8BB870)
#define KPIHDPGDMKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8BB990)
#define KPIHDPGDMKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8BB8B0)
#define KPIHDPGDMKB_FHLGIDOHOAE_OFFSET UNITYSDK_OFFSET(0x1E8BB860)
#define KPIHDPGDMKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8BBA60)
#define KPIHDPGDMKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8BB770)
#define KPIHDPGDMKB_KOHPHBJHIBP_OFFSET UNITYSDK_OFFSET(0x1E8BB8A0)
#define KPIHDPGDMKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8BBE00)
#define KPIHDPGDMKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8BBDB0)
#define KPIHDPGDMKB_OHLFEPDDOCA_OFFSET UNITYSDK_OFFSET(0x1E8BB890)
#define KPIHDPGDMKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8BB7A0)
#define KPIHDPGDMKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8BBA90)
#define KPIHDPGDMKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8BBAF0)

inline static constexpr unsigned int KPIHDPGDMKB_TypeDefinitionIndex = 33238;

	class KPIHDPGDMKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 APJOMOGPOGB; // 0x18
		::System::UInt32 DNDDHHMGFJM; // 0x1C
		::System::UInt32 DBDLLEPGGDD; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KPIHDPGDMKB")->GetStaticField(0x2CB50);
		}

		// static const ::System::Object DNDAGBAHLIJ; // 0x0
		// static const ::System::Object JBLLFHCEJEL; // 0x0
		// static const ::System::Object KEELBGFGMLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPIHDPGDMKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPIHDPGDMKB*))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPIHDPGDMKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KPIHDPGDMKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPIHDPGDMKB* Clone()
		{
			return ((::KPIHDPGDMKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 DMNJCBAKFIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_DMNJCBAKFIB_OFFSET))(this);
		}

		::System::Void FHLGIDOHOAE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_FHLGIDOHOAE_OFFSET))(this, a1);
		}

		::System::UInt32 DMOBBMNJAAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_DMOBBMNJAAJ_OFFSET))(this);
		}

		::System::Void CCAJBIDEFEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_CCAJBIDEFEA_OFFSET))(this, a1);
		}

		::System::UInt32 OHLFEPDDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_OHLFEPDDOCA_OFFSET))(this);
		}

		::System::Void KOHPHBJHIBP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_KOHPHBJHIBP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPIHDPGDMKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPIHDPGDMKB*))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPIHDPGDMKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPIHDPGDMKB*))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPIHDPGDMKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
