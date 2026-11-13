#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICGOLPHCKIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define ICGOLPHCKIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2012B240)
#define ICGOLPHCKIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x2012B560)
#define ICGOLPHCKIL_CLONE_OFFSET UNITYSDK_OFFSET(0x2012AC60)
#define ICGOLPHCKIL_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x2012AD00)
#define ICGOLPHCKIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2012ABF0)
#define ICGOLPHCKIL_CTOR_OFFSET UNITYSDK_OFFSET(0x2012ABE0)
#define ICGOLPHCKIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2012AEF0)
#define ICGOLPHCKIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x2012AD40)
#define ICGOLPHCKIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2012B070)
#define ICGOLPHCKIL_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x2012AD30)
#define ICGOLPHCKIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2012AB70)
#define ICGOLPHCKIL_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x2012AD10)
#define ICGOLPHCKIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2012B3A0)
#define ICGOLPHCKIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2012B310)
#define ICGOLPHCKIL_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x2012AD20)
#define ICGOLPHCKIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2012ABD0)
#define ICGOLPHCKIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2012B100)
#define ICGOLPHCKIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x2012B160)

inline static constexpr unsigned int ICGOLPHCKIL_TypeDefinitionIndex = 27095;

	class ICGOLPHCKIL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* DALKEINMPBH; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ICGOLPHCKIL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ICGOLPHCKIL*>**)UnitySDK::FromName("", "ICGOLPHCKIL")->GetStaticField(0x2C710);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICGOLPHCKIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICGOLPHCKIL*))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICGOLPHCKIL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ICGOLPHCKIL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ICGOLPHCKIL*>*(*)())((::PBYTE)hIl2Cpp + ICGOLPHCKIL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICGOLPHCKIL* Clone()
		{
			return ((::ICGOLPHCKIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICGOLPHCKIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICGOLPHCKIL*))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICGOLPHCKIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICGOLPHCKIL*))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
