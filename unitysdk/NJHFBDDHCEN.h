#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJHFBDDHCEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJHFBDDHCEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB3FB60)
#define NJHFBDDHCEN_CAPLHMKKINM_OFFSET UNITYSDK_OFFSET(0x1EB3F7C0)
#define NJHFBDDHCEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3FE70)
#define NJHFBDDHCEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB3F710)
#define NJHFBDDHCEN_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1EB3F7D0)
#define NJHFBDDHCEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB3F6D0)
#define NJHFBDDHCEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3F6C0)
#define NJHFBDDHCEN_DNEICJNILIG_OFFSET UNITYSDK_OFFSET(0x1EB3F7A0)
#define NJHFBDDHCEN_EBOMLPKAHPO_OFFSET UNITYSDK_OFFSET(0x1EB3F7B0)
#define NJHFBDDHCEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB3F880)
#define NJHFBDDHCEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB3F7F0)
#define NJHFBDDHCEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB3F960)
#define NJHFBDDHCEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB3F650)
#define NJHFBDDHCEN_LOOMMEALMLD_OFFSET UNITYSDK_OFFSET(0x1EB3F790)
#define NJHFBDDHCEN_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1EB3F7E0)
#define NJHFBDDHCEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB3FCD0)
#define NJHFBDDHCEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB3FC80)
#define NJHFBDDHCEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB3F6B0)
#define NJHFBDDHCEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB3F990)
#define NJHFBDDHCEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB3F9F0)

inline static constexpr unsigned int NJHFBDDHCEN_TypeDefinitionIndex = 31627;

	class NJHFBDDHCEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean ANFDLBHOIDD; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 ICDPONHFAJP; // 0x1C
		::System::UInt32 DNKADAFBILN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NJHFBDDHCEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NJHFBDDHCEN*>**)UnitySDK::FromName("", "NJHFBDDHCEN")->GetStaticField(0xDC70);
		}

		// static const ::System::Object GMEDLEECHKB; // 0x0
		// static const ::System::Object BEINPDMEFFL; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJHFBDDHCEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJHFBDDHCEN*))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJHFBDDHCEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NJHFBDDHCEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NJHFBDDHCEN*>*(*)())((::PBYTE)hIl2Cpp + NJHFBDDHCEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJHFBDDHCEN* Clone()
		{
			return ((::NJHFBDDHCEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_CLONE_OFFSET))(this);
		}

		::System::Boolean LOOMMEALMLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_LOOMMEALMLD_OFFSET))(this);
		}

		::System::Void DNEICJNILIG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_DNEICJNILIG_OFFSET))(this, a1);
		}

		::System::UInt32 EBOMLPKAHPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_EBOMLPKAHPO_OFFSET))(this);
		}

		::System::Void CAPLHMKKINM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_CAPLHMKKINM_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJHFBDDHCEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJHFBDDHCEN*))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJHFBDDHCEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJHFBDDHCEN*))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJHFBDDHCEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
