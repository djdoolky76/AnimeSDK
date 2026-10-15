#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHEBJJKGBOH;
class LPKBLKAHEDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPKBLKAHEDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D1620)
#define LPKBLKAHEDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D19C0)
#define LPKBLKAHEDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D10D0)
#define LPKBLKAHEDB_CMEDIHPEMOA_OFFSET UNITYSDK_OFFSET(0x1E9D1180)
#define LPKBLKAHEDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D1050)
#define LPKBLKAHEDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D1040)
#define LPKBLKAHEDB_DOPGPKIMGCD_OFFSET UNITYSDK_OFFSET(0x1E9D1190)
#define LPKBLKAHEDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D1320)
#define LPKBLKAHEDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D11A0)
#define LPKBLKAHEDB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9D1170)
#define LPKBLKAHEDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D14A0)
#define LPKBLKAHEDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D1000)
#define LPKBLKAHEDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D17D0)
#define LPKBLKAHEDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D16F0)
#define LPKBLKAHEDB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9D1160)
#define LPKBLKAHEDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D1030)
#define LPKBLKAHEDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D14E0)
#define LPKBLKAHEDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D1540)

inline static constexpr unsigned int LPKBLKAHEDB_TypeDefinitionIndex = 26485;

	class LPKBLKAHEDB : public ::System::Object
	{
	public:
		::IHEBJJKGBOH* EDMIENLBGFO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LPKBLKAHEDB")->GetStaticField(0x420B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KIOGJKILLPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPKBLKAHEDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPKBLKAHEDB*))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPKBLKAHEDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LPKBLKAHEDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPKBLKAHEDB* Clone()
		{
			return ((::LPKBLKAHEDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::IHEBJJKGBOH* CMEDIHPEMOA()
		{
			return ((::IHEBJJKGBOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_CMEDIHPEMOA_OFFSET))(this);
		}

		::System::Void DOPGPKIMGCD(::IHEBJJKGBOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHEBJJKGBOH*))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_DOPGPKIMGCD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPKBLKAHEDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPKBLKAHEDB*))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPKBLKAHEDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPKBLKAHEDB*))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPKBLKAHEDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
