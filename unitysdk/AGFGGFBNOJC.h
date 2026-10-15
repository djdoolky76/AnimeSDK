#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGFGGFBNOJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGFGGFBNOJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E12BFC0)
#define AGFGGFBNOJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12C290)
#define AGFGGFBNOJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E12BBC0)
#define AGFGGFBNOJC_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E12BC50)
#define AGFGGFBNOJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E12BB90)
#define AGFGGFBNOJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12BB80)
#define AGFGGFBNOJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E12BD80)
#define AGFGGFBNOJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E12BC70)
#define AGFGGFBNOJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E12BE50)
#define AGFGGFBNOJC_HPNGDONMAPF_OFFSET UNITYSDK_OFFSET(0x1E12BC40)
#define AGFGGFBNOJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E12BB10)
#define AGFGGFBNOJC_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E12BC60)
#define AGFGGFBNOJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E12C110)
#define AGFGGFBNOJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E12C0D0)
#define AGFGGFBNOJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E12BB70)
#define AGFGGFBNOJC_PHCMBNJGBGB_OFFSET UNITYSDK_OFFSET(0x1E12BC30)
#define AGFGGFBNOJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E12BE80)
#define AGFGGFBNOJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E12BEE0)

inline static constexpr unsigned int AGFGGFBNOJC_TypeDefinitionIndex = 28007;

	class AGFGGFBNOJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 FACHANGNFIN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AGFGGFBNOJC")->GetStaticField(0x307E0);
		}

		// static const ::System::Object LJEDNBHJPDA; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGFGGFBNOJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGFGGFBNOJC*))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGFGGFBNOJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AGFGGFBNOJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGFGGFBNOJC* Clone()
		{
			return ((::AGFGGFBNOJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_CLONE_OFFSET))(this);
		}

		::System::UInt32 PHCMBNJGBGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_PHCMBNJGBGB_OFFSET))(this);
		}

		::System::Void HPNGDONMAPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_HPNGDONMAPF_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGFGGFBNOJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGFGGFBNOJC*))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGFGGFBNOJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGFGGFBNOJC*))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGFGGFBNOJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
