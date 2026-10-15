#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGCMEFNJHKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGCMEFNJHKC_BPNIANEFGDK_OFFSET UNITYSDK_OFFSET(0x1E61C360)
#define IGCMEFNJHKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E61C6B0)
#define IGCMEFNJHKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61CA50)
#define IGCMEFNJHKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E61C280)
#define IGCMEFNJHKC_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E61C2F0)
#define IGCMEFNJHKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E61C240)
#define IGCMEFNJHKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61C230)
#define IGCMEFNJHKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E61C3D0)
#define IGCMEFNJHKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E61C370)
#define IGCMEFNJHKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E61C420)
#define IGCMEFNJHKC_GNKGKHDINBD_OFFSET UNITYSDK_OFFSET(0x1E61C2D0)
#define IGCMEFNJHKC_HCKEICBLHFL_OFFSET UNITYSDK_OFFSET(0x1E61C330)
#define IGCMEFNJHKC_HNCNMHAFBOO_OFFSET UNITYSDK_OFFSET(0x1E61C310)
#define IGCMEFNJHKC_IBEIDFLHOPB_OFFSET UNITYSDK_OFFSET(0x1E61C350)
#define IGCMEFNJHKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E61C1F0)
#define IGCMEFNJHKC_KHMJENNPAJJ_OFFSET UNITYSDK_OFFSET(0x1E61C320)
#define IGCMEFNJHKC_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E61C300)
#define IGCMEFNJHKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E61C9A0)
#define IGCMEFNJHKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E61C940)
#define IGCMEFNJHKC_OKFDKCLKGDB_OFFSET UNITYSDK_OFFSET(0x1E61C2E0)
#define IGCMEFNJHKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E61C220)
#define IGCMEFNJHKC_PIMJKEIPNMO_OFFSET UNITYSDK_OFFSET(0x1E61C340)
#define IGCMEFNJHKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E61C460)
#define IGCMEFNJHKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E61C4C0)

inline static constexpr unsigned int IGCMEFNJHKC_TypeDefinitionIndex = 25400;

	class IGCMEFNJHKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 EEJBFFHLJPF; // 0x1C
		::System::UInt32 GFIOMFABKOI; // 0x20
		::System::UInt32 IGFGLMCAKON; // 0x24
		::System::UInt32 HMGGPBCJGMC; // 0x28
		static ::Google::Protobuf::MessageParser_1<::IGCMEFNJHKC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IGCMEFNJHKC*>**)UnitySDK::FromName("", "IGCMEFNJHKC")->GetStaticField(0x4ACC0);
		}

		// static const ::System::Object EAJENEDOPGL; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object BPDHOAGFGKH; // 0x0
		// static const ::System::Object JEFJEPOBNBF; // 0x0
		// static const ::System::Object LPNPIFANHHC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGCMEFNJHKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGCMEFNJHKC*))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGCMEFNJHKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IGCMEFNJHKC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IGCMEFNJHKC*>*(*)())((::PBYTE)hIl2Cpp + IGCMEFNJHKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGCMEFNJHKC* Clone()
		{
			return ((::IGCMEFNJHKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_CLONE_OFFSET))(this);
		}

		::System::UInt32 GNKGKHDINBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_GNKGKHDINBD_OFFSET))(this);
		}

		::System::Void OKFDKCLKGDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_OKFDKCLKGDB_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 HNCNMHAFBOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_HNCNMHAFBOO_OFFSET))(this);
		}

		::System::Void KHMJENNPAJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_KHMJENNPAJJ_OFFSET))(this, a1);
		}

		::System::UInt32 HCKEICBLHFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_HCKEICBLHFL_OFFSET))(this);
		}

		::System::Void PIMJKEIPNMO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_PIMJKEIPNMO_OFFSET))(this, a1);
		}

		::System::UInt32 IBEIDFLHOPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_IBEIDFLHOPB_OFFSET))(this);
		}

		::System::Void BPNIANEFGDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_BPNIANEFGDK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGCMEFNJHKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGCMEFNJHKC*))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGCMEFNJHKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGCMEFNJHKC*))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGCMEFNJHKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
