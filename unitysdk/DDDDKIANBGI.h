#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDDDKIANBGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDDDKIANBGI_BDPPAGFKAGI_OFFSET UNITYSDK_OFFSET(0x1E17B650)
#define DDDDKIANBGI_BNMCFGMHKPO_OFFSET UNITYSDK_OFFSET(0x1E17B610)
#define DDDDKIANBGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E17BA00)
#define DDDDKIANBGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17BDB0)
#define DDDDKIANBGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E17B5B0)
#define DDDDKIANBGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E17B570)
#define DDDDKIANBGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17B560)
#define DDDDKIANBGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E17B6D0)
#define DDDDKIANBGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E17B680)
#define DDDDKIANBGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E17B7B0)
#define DDDDKIANBGI_HDPIMGLBLPF_OFFSET UNITYSDK_OFFSET(0x1E17B670)
#define DDDDKIANBGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E17B520)
#define DDDDKIANBGI_JKMGIHCDODN_OFFSET UNITYSDK_OFFSET(0x1E17B630)
#define DDDDKIANBGI_KDNBAMACOKB_OFFSET UNITYSDK_OFFSET(0x1E17B620)
#define DDDDKIANBGI_KFCJAKCBJDF_OFFSET UNITYSDK_OFFSET(0x1E17B640)
#define DDDDKIANBGI_MEAFDHIDFBG_OFFSET UNITYSDK_OFFSET(0x1E17B660)
#define DDDDKIANBGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E17BD10)
#define DDDDKIANBGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E17BCB0)
#define DDDDKIANBGI_OBLCIDGEPAA_OFFSET UNITYSDK_OFFSET(0x1E17B600)
#define DDDDKIANBGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E17B550)
#define DDDDKIANBGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E17B810)
#define DDDDKIANBGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E17B870)

	class DDDDKIANBGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 PKOKOMDFEKG; // 0x18
		::System::Int64 MOENHCLPPDG; // 0x20
		::System::UInt32 IFLFFLOAANI; // 0x28
		::System::UInt32 OMLKKPDFAAI; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DDDDKIANBGI")->GetStaticField(0x2D570);
		}

		// static const ::System::Object OFEBBAFFJJB; // 0x0
		// static const ::System::Object CHDDAJODAEB; // 0x0
		// static const ::System::Object MCLPICKNLNA; // 0x0
		// static const ::System::Object MLHGOKHJLOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDDDKIANBGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDDDKIANBGI*))((::PBYTE)hIl2Cpp + DDDDKIANBGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDDDKIANBGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DDDDKIANBGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDDDKIANBGI* Clone()
		{
			return ((::DDDDKIANBGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OBLCIDGEPAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI_OBLCIDGEPAA_OFFSET))(this);
		}

		::System::Void BNMCFGMHKPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDDDKIANBGI_BNMCFGMHKPO_OFFSET))(this, a1);
		}

		::System::UInt32 KDNBAMACOKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI_KDNBAMACOKB_OFFSET))(this);
		}

		::System::Void JKMGIHCDODN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDDDKIANBGI_JKMGIHCDODN_OFFSET))(this, a1);
		}

		::System::Int64 KFCJAKCBJDF()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI_KFCJAKCBJDF_OFFSET))(this);
		}

		::System::Void BDPPAGFKAGI(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DDDDKIANBGI_BDPPAGFKAGI_OFFSET))(this, a1);
		}

		::System::Int64 MEAFDHIDFBG()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI_MEAFDHIDFBG_OFFSET))(this);
		}

		::System::Void HDPIMGLBLPF(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DDDDKIANBGI_HDPIMGLBLPF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDDDKIANBGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDDDKIANBGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDDDKIANBGI*))((::PBYTE)hIl2Cpp + DDDDKIANBGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDDDKIANBGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDDDKIANBGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDDDKIANBGI*))((::PBYTE)hIl2Cpp + DDDDKIANBGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDDDKIANBGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
