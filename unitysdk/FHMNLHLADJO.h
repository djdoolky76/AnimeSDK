#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHMNLHLADJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHMNLHLADJO_BIJMNLIEJAP_OFFSET UNITYSDK_OFFSET(0x1E3904E0)
#define FHMNLHLADJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E390870)
#define FHMNLHLADJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E390B40)
#define FHMNLHLADJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E390470)
#define FHMNLHLADJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E390440)
#define FHMNLHLADJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E390430)
#define FHMNLHLADJO_ENJGPNBMMLC_OFFSET UNITYSDK_OFFSET(0x1E390510)
#define FHMNLHLADJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E390630)
#define FHMNLHLADJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E390520)
#define FHMNLHLADJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E390700)
#define FHMNLHLADJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3903C0)
#define FHMNLHLADJO_KEOKDNEOAKJ_OFFSET UNITYSDK_OFFSET(0x1E3904F0)
#define FHMNLHLADJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3909C0)
#define FHMNLHLADJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E390980)
#define FHMNLHLADJO_OMAMLKNGNHH_OFFSET UNITYSDK_OFFSET(0x1E390500)
#define FHMNLHLADJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E390420)
#define FHMNLHLADJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E390730)
#define FHMNLHLADJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E390790)

inline static constexpr unsigned int FHMNLHLADJO_TypeDefinitionIndex = 30024;

	class FHMNLHLADJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MFAOBJJMBEA; // 0x18
		::System::UInt32 BDHLLBIDDLI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHMNLHLADJO")->GetStaticField(0x5F9D0);
		}

		// static const ::System::Object OBFCLNCIJEH; // 0x0
		// static const ::System::Object EIOBELJLGML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHMNLHLADJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHMNLHLADJO*))((::PBYTE)hIl2Cpp + FHMNLHLADJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHMNLHLADJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHMNLHLADJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHMNLHLADJO* Clone()
		{
			return ((::FHMNLHLADJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIJMNLIEJAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO_BIJMNLIEJAP_OFFSET))(this);
		}

		::System::Void KEOKDNEOAKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHMNLHLADJO_KEOKDNEOAKJ_OFFSET))(this, a1);
		}

		::System::UInt32 OMAMLKNGNHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO_OMAMLKNGNHH_OFFSET))(this);
		}

		::System::Void ENJGPNBMMLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHMNLHLADJO_ENJGPNBMMLC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHMNLHLADJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHMNLHLADJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHMNLHLADJO*))((::PBYTE)hIl2Cpp + FHMNLHLADJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHMNLHLADJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMNLHLADJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHMNLHLADJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHMNLHLADJO*))((::PBYTE)hIl2Cpp + FHMNLHLADJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHMNLHLADJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
