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

#define ICGOLPHCKIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E620DB0)
#define ICGOLPHCKIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6210D0)
#define ICGOLPHCKIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6207B0)
#define ICGOLPHCKIL_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E620880)
#define ICGOLPHCKIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E620740)
#define ICGOLPHCKIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E620730)
#define ICGOLPHCKIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E620A50)
#define ICGOLPHCKIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6208A0)
#define ICGOLPHCKIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E620BD0)
#define ICGOLPHCKIL_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1E620870)
#define ICGOLPHCKIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6206C0)
#define ICGOLPHCKIL_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E620890)
#define ICGOLPHCKIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E620F10)
#define ICGOLPHCKIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E620E80)
#define ICGOLPHCKIL_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E620860)
#define ICGOLPHCKIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E620720)
#define ICGOLPHCKIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E620C70)
#define ICGOLPHCKIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E620CD0)

inline static constexpr unsigned int ICGOLPHCKIL_TypeDefinitionIndex = 26564;

	class ICGOLPHCKIL : public ::System::Object
	{
	public:
		::Proto::ItemList* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ICGOLPHCKIL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ICGOLPHCKIL*>**)UnitySDK::FromName("", "ICGOLPHCKIL")->GetStaticField(0x32340);
		}

		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
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

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICGOLPHCKIL_MEIGHCDGBDI_OFFSET))(this, a1);
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
