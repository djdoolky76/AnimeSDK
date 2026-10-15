#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLNNEGIIMOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLNNEGIIMOH_BPNIANEFGDK_OFFSET UNITYSDK_OFFSET(0x1E5C3B70)
#define HLNNEGIIMOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C3EB0)
#define HLNNEGIIMOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C4250)
#define HLNNEGIIMOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C3A90)
#define HLNNEGIIMOH_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E5C3B00)
#define HLNNEGIIMOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C3A50)
#define HLNNEGIIMOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C3A40)
#define HLNNEGIIMOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C3BE0)
#define HLNNEGIIMOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C3B80)
#define HLNNEGIIMOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C3C30)
#define HLNNEGIIMOH_GNKGKHDINBD_OFFSET UNITYSDK_OFFSET(0x1E5C3B20)
#define HLNNEGIIMOH_HCKEICBLHFL_OFFSET UNITYSDK_OFFSET(0x1E5C3AE0)
#define HLNNEGIIMOH_HNCNMHAFBOO_OFFSET UNITYSDK_OFFSET(0x1E5C3B40)
#define HLNNEGIIMOH_IBEIDFLHOPB_OFFSET UNITYSDK_OFFSET(0x1E5C3B60)
#define HLNNEGIIMOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C3A00)
#define HLNNEGIIMOH_KHMJENNPAJJ_OFFSET UNITYSDK_OFFSET(0x1E5C3B50)
#define HLNNEGIIMOH_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E5C3B10)
#define HLNNEGIIMOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C41A0)
#define HLNNEGIIMOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C4140)
#define HLNNEGIIMOH_OKFDKCLKGDB_OFFSET UNITYSDK_OFFSET(0x1E5C3B30)
#define HLNNEGIIMOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C3A30)
#define HLNNEGIIMOH_PIMJKEIPNMO_OFFSET UNITYSDK_OFFSET(0x1E5C3AF0)
#define HLNNEGIIMOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C3C60)
#define HLNNEGIIMOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C3CC0)

	class HLNNEGIIMOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IGFGLMCAKON; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		::System::UInt32 EEJBFFHLJPF; // 0x20
		::System::UInt32 HMGGPBCJGMC; // 0x24
		::System::UInt32 GFIOMFABKOI; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLNNEGIIMOH")->GetStaticField(0x48920);
		}

		// static const ::System::Object JEFJEPOBNBF; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object EAJENEDOPGL; // 0x0
		// static const ::System::Object BPDHOAGFGKH; // 0x0
		// static const ::System::Object LPNPIFANHHC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLNNEGIIMOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLNNEGIIMOH*))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLNNEGIIMOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLNNEGIIMOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLNNEGIIMOH* Clone()
		{
			return ((::HLNNEGIIMOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCKEICBLHFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_HCKEICBLHFL_OFFSET))(this);
		}

		::System::Void PIMJKEIPNMO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_PIMJKEIPNMO_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 GNKGKHDINBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_GNKGKHDINBD_OFFSET))(this);
		}

		::System::Void OKFDKCLKGDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_OKFDKCLKGDB_OFFSET))(this, a1);
		}

		::System::UInt32 HNCNMHAFBOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_HNCNMHAFBOO_OFFSET))(this);
		}

		::System::Void KHMJENNPAJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_KHMJENNPAJJ_OFFSET))(this, a1);
		}

		::System::UInt32 IBEIDFLHOPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_IBEIDFLHOPB_OFFSET))(this);
		}

		::System::Void BPNIANEFGDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_BPNIANEFGDK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLNNEGIIMOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLNNEGIIMOH*))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLNNEGIIMOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLNNEGIIMOH*))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLNNEGIIMOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
