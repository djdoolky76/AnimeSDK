#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONNIDPKMOPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONNIDPKMOPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DED1BC0)
#define ONNIDPKMOPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED1E90)
#define ONNIDPKMOPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DED1810)
#define ONNIDPKMOPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DED17E0)
#define ONNIDPKMOPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED17D0)
#define ONNIDPKMOPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DED1980)
#define ONNIDPKMOPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DED18A0)
#define ONNIDPKMOPB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DED1890)
#define ONNIDPKMOPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DED1A50)
#define ONNIDPKMOPB_GLIICGEIPBG_OFFSET UNITYSDK_OFFSET(0x1DED1870)
#define ONNIDPKMOPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DED1790)
#define ONNIDPKMOPB_MBDNIJBBOJM_OFFSET UNITYSDK_OFFSET(0x1DED1860)
#define ONNIDPKMOPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DED1D10)
#define ONNIDPKMOPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DED1CD0)
#define ONNIDPKMOPB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DED1880)
#define ONNIDPKMOPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DED17C0)
#define ONNIDPKMOPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DED1A80)
#define ONNIDPKMOPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DED1AE0)

inline static constexpr unsigned int ONNIDPKMOPB_TypeDefinitionIndex = 32262;

	class ONNIDPKMOPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 BMIPGCBNFNP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ONNIDPKMOPB")->GetStaticField(0x2E1F0);
		}

		// static const ::System::Object CAECONCHAID; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONNIDPKMOPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONNIDPKMOPB*))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNIDPKMOPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ONNIDPKMOPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONNIDPKMOPB* Clone()
		{
			return ((::ONNIDPKMOPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBDNIJBBOJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_MBDNIJBBOJM_OFFSET))(this);
		}

		::System::Void GLIICGEIPBG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_GLIICGEIPBG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONNIDPKMOPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONNIDPKMOPB*))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONNIDPKMOPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONNIDPKMOPB*))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONNIDPKMOPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
