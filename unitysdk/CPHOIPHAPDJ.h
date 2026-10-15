#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPHOIPHAPDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPHOIPHAPDJ_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E13ED50)
#define CPHOIPHAPDJ_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E13ED60)
#define CPHOIPHAPDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E13F170)
#define CPHOIPHAPDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13F470)
#define CPHOIPHAPDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E13ECE0)
#define CPHOIPHAPDJ_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E13ED70)
#define CPHOIPHAPDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E13ECB0)
#define CPHOIPHAPDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13ECA0)
#define CPHOIPHAPDJ_ECLJEIOLMND_OFFSET UNITYSDK_OFFSET(0x1E13EDB0)
#define CPHOIPHAPDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E13EE60)
#define CPHOIPHAPDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E13EDD0)
#define CPHOIPHAPDJ_FGDAPHJMJNL_OFFSET UNITYSDK_OFFSET(0x1E13EDA0)
#define CPHOIPHAPDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E13EF40)
#define CPHOIPHAPDJ_JANMDMKKBDP_OFFSET UNITYSDK_OFFSET(0x1E13ED90)
#define CPHOIPHAPDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E13EC30)
#define CPHOIPHAPDJ_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E13ED80)
#define CPHOIPHAPDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E13F3D0)
#define CPHOIPHAPDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E13F380)
#define CPHOIPHAPDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E13EC90)
#define CPHOIPHAPDJ_PDJIOGFEPLI_OFFSET UNITYSDK_OFFSET(0x1E13EDC0)
#define CPHOIPHAPDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E13EF80)
#define CPHOIPHAPDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E13EFE0)

	class CPHOIPHAPDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 PPLDPADCCBI; // 0x1C
		::System::UInt32 NNLJKKAEICI; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPHOIPHAPDJ")->GetStaticField(0x227D0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object KJAMNGECFBP; // 0x0
		// static const ::System::Object BFMLFALLFGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPHOIPHAPDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPHOIPHAPDJ*))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPHOIPHAPDJ* Clone()
		{
			return ((::CPHOIPHAPDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 JANMDMKKBDP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_JANMDMKKBDP_OFFSET))(this);
		}

		::System::Void FGDAPHJMJNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_FGDAPHJMJNL_OFFSET))(this, a1);
		}

		::System::UInt32 ECLJEIOLMND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_ECLJEIOLMND_OFFSET))(this);
		}

		::System::Void PDJIOGFEPLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_PDJIOGFEPLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPHOIPHAPDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPHOIPHAPDJ*))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPHOIPHAPDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPHOIPHAPDJ*))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
