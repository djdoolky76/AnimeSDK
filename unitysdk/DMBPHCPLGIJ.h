#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMBPHCPLGIJ_HOKOALBEDAJ.h"
#include "unitysdk/System/Object.h"
class DMBPHCPLGIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMBPHCPLGIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1E9B50)
#define DMBPHCPLGIJ_CBJLPOGLLOG_OFFSET UNITYSDK_OFFSET(0x1E1E9360)
#define DMBPHCPLGIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1EA080)
#define DMBPHCPLGIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1E94A0)
#define DMBPHCPLGIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E9230)
#define DMBPHCPLGIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E9220)
#define DMBPHCPLGIJ_ENJGPNBMMLC_OFFSET UNITYSDK_OFFSET(0x1E1E9470)
#define DMBPHCPLGIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1E9540)
#define DMBPHCPLGIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1E9510)
#define DMBPHCPLGIJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1E94E0)
#define DMBPHCPLGIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1E97B0)
#define DMBPHCPLGIJ_IEJBIJIKDPB_OFFSET UNITYSDK_OFFSET(0x1E1E94F0)
#define DMBPHCPLGIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1E91E0)
#define DMBPHCPLGIJ_LCGFNMHIOGB_OFFSET UNITYSDK_OFFSET(0x1E1E9500)
#define DMBPHCPLGIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1E9E80)
#define DMBPHCPLGIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1E9D50)
#define DMBPHCPLGIJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1E94D0)
#define DMBPHCPLGIJ_OGLMLLBICMH_OFFSET UNITYSDK_OFFSET(0x1E1E93A0)
#define DMBPHCPLGIJ_OMAMLKNGNHH_OFFSET UNITYSDK_OFFSET(0x1E1E93F0)
#define DMBPHCPLGIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1E9210)
#define DMBPHCPLGIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E98F0)
#define DMBPHCPLGIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1E9950)

inline static constexpr unsigned int DMBPHCPLGIJ_TypeDefinitionIndex = 30077;

	class DMBPHCPLGIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* GAPGOEGADAD; // 0x18
		::DMBPHCPLGIJ_HOKOALBEDAJ MGAKGNOKNPH; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DMBPHCPLGIJ")->GetStaticField(0x3EA20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PBBIACCKPME; // 0x0
		// static const ::System::Object EIOBELJLGML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMBPHCPLGIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMBPHCPLGIJ*))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMBPHCPLGIJ* Clone()
		{
			return ((::DMBPHCPLGIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::String* CBJLPOGLLOG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_CBJLPOGLLOG_OFFSET))(this);
		}

		::System::Void OGLMLLBICMH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_OGLMLLBICMH_OFFSET))(this, a1);
		}

		::System::UInt32 OMAMLKNGNHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_OMAMLKNGNHH_OFFSET))(this);
		}

		::System::Void ENJGPNBMMLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_ENJGPNBMMLC_OFFSET))(this, a1);
		}

		::DMBPHCPLGIJ_HOKOALBEDAJ IEJBIJIKDPB()
		{
			return ((::DMBPHCPLGIJ_HOKOALBEDAJ(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_IEJBIJIKDPB_OFFSET))(this);
		}

		::System::Void LCGFNMHIOGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_LCGFNMHIOGB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMBPHCPLGIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMBPHCPLGIJ*))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMBPHCPLGIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMBPHCPLGIJ*))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
