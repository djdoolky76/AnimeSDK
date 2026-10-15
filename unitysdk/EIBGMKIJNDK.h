#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIBGMKIJNDK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EIBGMKIJNDK_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E2A48E0)
#define EIBGMKIJNDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A4C80)
#define EIBGMKIJNDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5000)
#define EIBGMKIJNDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A4860)
#define EIBGMKIJNDK_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E2A48B0)
#define EIBGMKIJNDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A4820)
#define EIBGMKIJNDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A4810)
#define EIBGMKIJNDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A49F0)
#define EIBGMKIJNDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A4910)
#define EIBGMKIJNDK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2A4900)
#define EIBGMKIJNDK_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E2A48D0)
#define EIBGMKIJNDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A4AC0)
#define EIBGMKIJNDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A47D0)
#define EIBGMKIJNDK_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E2A48C0)
#define EIBGMKIJNDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A4E60)
#define EIBGMKIJNDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A4E10)
#define EIBGMKIJNDK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2A48F0)
#define EIBGMKIJNDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A4800)
#define EIBGMKIJNDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A4AF0)
#define EIBGMKIJNDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A4B50)

	class EIBGMKIJNDK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 MLCHFINKHHM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EIBGMKIJNDK")->GetStaticField(0x491B0);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EIBGMKIJNDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIBGMKIJNDK*))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIBGMKIJNDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EIBGMKIJNDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EIBGMKIJNDK* Clone()
		{
			return ((::EIBGMKIJNDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EIBGMKIJNDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIBGMKIJNDK*))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EIBGMKIJNDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIBGMKIJNDK*))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EIBGMKIJNDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
