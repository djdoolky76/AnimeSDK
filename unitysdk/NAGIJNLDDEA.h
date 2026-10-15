#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAGIJNLDDEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NAGIJNLDDEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC1A70)
#define NAGIJNLDDEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC1DF0)
#define NAGIJNLDDEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC1650)
#define NAGIJNLDDEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC1610)
#define NAGIJNLDDEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC1600)
#define NAGIJNLDDEA_EHMAFEANNKM_OFFSET UNITYSDK_OFFSET(0x1EAC16F0)
#define NAGIJNLDDEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC17E0)
#define NAGIJNLDDEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC1700)
#define NAGIJNLDDEA_FKPGACAHFBD_OFFSET UNITYSDK_OFFSET(0x1EAC16D0)
#define NAGIJNLDDEA_FLDEJDGGMGD_OFFSET UNITYSDK_OFFSET(0x1EAC16E0)
#define NAGIJNLDDEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC18B0)
#define NAGIJNLDDEA_IGDPIIJEELD_OFFSET UNITYSDK_OFFSET(0x1EAC16A0)
#define NAGIJNLDDEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC15C0)
#define NAGIJNLDDEA_KMOAIPBICFE_OFFSET UNITYSDK_OFFSET(0x1EAC16B0)
#define NAGIJNLDDEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC1C50)
#define NAGIJNLDDEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC1C00)
#define NAGIJNLDDEA_OKHPHMMGEML_OFFSET UNITYSDK_OFFSET(0x1EAC16C0)
#define NAGIJNLDDEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC15F0)
#define NAGIJNLDDEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC18E0)
#define NAGIJNLDDEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC1940)

	class NAGIJNLDDEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NJMDIOKKBLC; // 0x18
		::System::UInt32 APAHJAEEAIH; // 0x1C
		::System::UInt32 EEBKDMBJHEC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NAGIJNLDDEA")->GetStaticField(0x5C520);
		}

		// static const ::System::Object LCLODCLLPDD; // 0x0
		// static const ::System::Object LHBFHENIPNC; // 0x0
		// static const ::System::Object DCPHPJKBJBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAGIJNLDDEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAGIJNLDDEA*))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAGIJNLDDEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NAGIJNLDDEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAGIJNLDDEA* Clone()
		{
			return ((::NAGIJNLDDEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_CLONE_OFFSET))(this);
		}

		::System::UInt32 IGDPIIJEELD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_IGDPIIJEELD_OFFSET))(this);
		}

		::System::Void KMOAIPBICFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_KMOAIPBICFE_OFFSET))(this, a1);
		}

		::System::UInt32 OKHPHMMGEML()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_OKHPHMMGEML_OFFSET))(this);
		}

		::System::Void FKPGACAHFBD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_FKPGACAHFBD_OFFSET))(this, a1);
		}

		::System::UInt32 FLDEJDGGMGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_FLDEJDGGMGD_OFFSET))(this);
		}

		::System::Void EHMAFEANNKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_EHMAFEANNKM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAGIJNLDDEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAGIJNLDDEA*))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAGIJNLDDEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAGIJNLDDEA*))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAGIJNLDDEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
