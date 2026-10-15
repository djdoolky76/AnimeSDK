#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHCIIMGMIML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHCIIMGMIML_BPHAFCAHJPG_OFFSET UNITYSDK_OFFSET(0x1E388D60)
#define FHCIIMGMIML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3890D0)
#define FHCIIMGMIML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3893A0)
#define FHCIIMGMIML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E388CD0)
#define FHCIIMGMIML_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E388D40)
#define FHCIIMGMIML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E388CA0)
#define FHCIIMGMIML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E388C90)
#define FHCIIMGMIML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E388E90)
#define FHCIIMGMIML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E388D80)
#define FHCIIMGMIML_GEILLPDBLJG_OFFSET UNITYSDK_OFFSET(0x1E388D70)
#define FHCIIMGMIML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E388F60)
#define FHCIIMGMIML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E388C20)
#define FHCIIMGMIML_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E388D50)
#define FHCIIMGMIML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E389220)
#define FHCIIMGMIML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3891E0)
#define FHCIIMGMIML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E388C80)
#define FHCIIMGMIML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E388F90)
#define FHCIIMGMIML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E388FF0)

	class FHCIIMGMIML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 HGECOJIAJOA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHCIIMGMIML")->GetStaticField(0x48670);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object KHDBNNKGJCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHCIIMGMIML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHCIIMGMIML*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHCIIMGMIML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHCIIMGMIML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHCIIMGMIML* Clone()
		{
			return ((::FHCIIMGMIML*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHCIIMGMIML_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 BPHAFCAHJPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_BPHAFCAHJPG_OFFSET))(this);
		}

		::System::Void GEILLPDBLJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHCIIMGMIML_GEILLPDBLJG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHCIIMGMIML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHCIIMGMIML*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIIMGMIML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHCIIMGMIML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHCIIMGMIML*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHCIIMGMIML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
