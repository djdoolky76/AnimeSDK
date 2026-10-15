#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGOGKCCOIIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGOGKCCOIIF_BIJMNLIEJAP_OFFSET UNITYSDK_OFFSET(0x1E655300)
#define IGOGKCCOIIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6557B0)
#define IGOGKCCOIIF_CBJLPOGLLOG_OFFSET UNITYSDK_OFFSET(0x1E655340)
#define IGOGKCCOIIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E655B30)
#define IGOGKCCOIIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E655280)
#define IGOGKCCOIIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E655230)
#define IGOGKCCOIIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E655220)
#define IGOGKCCOIIF_ENJGPNBMMLC_OFFSET UNITYSDK_OFFSET(0x1E655330)
#define IGOGKCCOIIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E655450)
#define IGOGKCCOIIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6553A0)
#define IGOGKCCOIIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E655560)
#define IGOGKCCOIIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6551B0)
#define IGOGKCCOIIF_KEOKDNEOAKJ_OFFSET UNITYSDK_OFFSET(0x1E655310)
#define IGOGKCCOIIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E655960)
#define IGOGKCCOIIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E655900)
#define IGOGKCCOIIF_OGLMLLBICMH_OFFSET UNITYSDK_OFFSET(0x1E655350)
#define IGOGKCCOIIF_OMAMLKNGNHH_OFFSET UNITYSDK_OFFSET(0x1E655320)
#define IGOGKCCOIIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E655210)
#define IGOGKCCOIIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E655610)
#define IGOGKCCOIIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E655670)

	class IGOGKCCOIIF : public ::System::Object
	{
	public:
		::System::String* MDPFLIGGADI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MFAOBJJMBEA; // 0x20
		::System::UInt32 BDHLLBIDDLI; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IGOGKCCOIIF")->GetStaticField(0x4C030);
		}

		// static const ::System::Object OBFCLNCIJEH; // 0x0
		// static const ::System::Object EIOBELJLGML; // 0x0
		// static const ::System::Object PBBIACCKPME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGOGKCCOIIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGOGKCCOIIF*))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGOGKCCOIIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IGOGKCCOIIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGOGKCCOIIF* Clone()
		{
			return ((::IGOGKCCOIIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIJMNLIEJAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_BIJMNLIEJAP_OFFSET))(this);
		}

		::System::Void KEOKDNEOAKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_KEOKDNEOAKJ_OFFSET))(this, a1);
		}

		::System::UInt32 OMAMLKNGNHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_OMAMLKNGNHH_OFFSET))(this);
		}

		::System::Void ENJGPNBMMLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_ENJGPNBMMLC_OFFSET))(this, a1);
		}

		::System::String* CBJLPOGLLOG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_CBJLPOGLLOG_OFFSET))(this);
		}

		::System::Void OGLMLLBICMH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_OGLMLLBICMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGOGKCCOIIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGOGKCCOIIF*))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGOGKCCOIIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGOGKCCOIIF*))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGOGKCCOIIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
