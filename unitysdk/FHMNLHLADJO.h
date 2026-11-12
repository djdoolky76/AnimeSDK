#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHMNLHLADJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHMNLHLADJO_BIJMNLIEJAP_OFFSET UNITYSDK_OFFSET(0x1F695300)
#define FHMNLHLADJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F695690)
#define FHMNLHLADJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F695960)
#define FHMNLHLADJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F695290)
#define FHMNLHLADJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F695260)
#define FHMNLHLADJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F695250)
#define FHMNLHLADJO_ENJGPNBMMLC_OFFSET UNITYSDK_OFFSET(0x1F695330)
#define FHMNLHLADJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F695450)
#define FHMNLHLADJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F695340)
#define FHMNLHLADJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F695520)
#define FHMNLHLADJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6951E0)
#define FHMNLHLADJO_KEOKDNEOAKJ_OFFSET UNITYSDK_OFFSET(0x1F695310)
#define FHMNLHLADJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6957E0)
#define FHMNLHLADJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6957A0)
#define FHMNLHLADJO_OMAMLKNGNHH_OFFSET UNITYSDK_OFFSET(0x1F695320)
#define FHMNLHLADJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F695240)
#define FHMNLHLADJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F695550)
#define FHMNLHLADJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6955B0)

inline static constexpr unsigned int FHMNLHLADJO_TypeDefinitionIndex = 30922;

	class FHMNLHLADJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BDHLLBIDDLI; // 0x18
		::System::UInt32 MFAOBJJMBEA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FHMNLHLADJO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHMNLHLADJO*>**)UnitySDK::FromName("", "FHMNLHLADJO")->GetStaticField(0x43EF0);
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

		static ::Google::Protobuf::MessageParser_1<::FHMNLHLADJO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHMNLHLADJO*>*(*)())((::PBYTE)hIl2Cpp + FHMNLHLADJO_JJGHOBBFNJD_OFFSET))();
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
