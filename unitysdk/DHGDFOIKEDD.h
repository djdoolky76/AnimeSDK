#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHGDFOIKEDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DHGDFOIKEDD_BAMLOLEEIML_OFFSET UNITYSDK_OFFSET(0x1E1B3740)
#define DHGDFOIKEDD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1B3AD0)
#define DHGDFOIKEDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3D30)
#define DHGDFOIKEDD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1B36E0)
#define DHGDFOIKEDD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1B36A0)
#define DHGDFOIKEDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3690)
#define DHGDFOIKEDD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1B3850)
#define DHGDFOIKEDD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1B3770)
#define DHGDFOIKEDD_FCOOBBKGIKM_OFFSET UNITYSDK_OFFSET(0x1E1B3750)
#define DHGDFOIKEDD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1B3930)
#define DHGDFOIKEDD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1B3650)
#define DHGDFOIKEDD_JJKHOPEOLAB_OFFSET UNITYSDK_OFFSET(0x1E1B3760)
#define DHGDFOIKEDD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1B3BB0)
#define DHGDFOIKEDD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1B3B70)
#define DHGDFOIKEDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3680)
#define DHGDFOIKEDD_PNKNFPCPAAI_OFFSET UNITYSDK_OFFSET(0x1E1B3730)
#define DHGDFOIKEDD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1B3960)
#define DHGDFOIKEDD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1B39C0)

inline static constexpr unsigned int DHGDFOIKEDD_TypeDefinitionIndex = 28443;

	class DHGDFOIKEDD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FKHIFCDFCKJ; // 0x18
		::System::Boolean APEKIOBOBJH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DHGDFOIKEDD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DHGDFOIKEDD*>**)UnitySDK::FromName("", "DHGDFOIKEDD")->GetStaticField(0x34F80);
		}

		// static const ::System::Object LCICMEPLFGE; // 0x0
		// static const ::System::Object FACHALKHAFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DHGDFOIKEDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHGDFOIKEDD*))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGDFOIKEDD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DHGDFOIKEDD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DHGDFOIKEDD*>*(*)())((::PBYTE)hIl2Cpp + DHGDFOIKEDD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DHGDFOIKEDD* Clone()
		{
			return ((::DHGDFOIKEDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_CLONE_OFFSET))(this);
		}

		::System::UInt32 PNKNFPCPAAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_PNKNFPCPAAI_OFFSET))(this);
		}

		::System::Void BAMLOLEEIML(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_BAMLOLEEIML_OFFSET))(this, a1);
		}

		::System::Boolean FCOOBBKGIKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_FCOOBBKGIKM_OFFSET))(this);
		}

		::System::Void JJKHOPEOLAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_JJKHOPEOLAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DHGDFOIKEDD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHGDFOIKEDD*))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DHGDFOIKEDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHGDFOIKEDD*))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DHGDFOIKEDD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
