#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PONHNPLLKAB.h"
#include "unitysdk/System/Object.h"
class GKFGIMIBBHF;
class OKPIPFKONMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKPIPFKONMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA1BE0)
#define OKPIPFKONMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA2040)
#define OKPIPFKONMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA1690)
#define OKPIPFKONMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA15F0)
#define OKPIPFKONMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA15B0)
#define OKPIPFKONMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA1870)
#define OKPIPFKONMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA1710)
#define OKPIPFKONMG_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1DEA16D0)
#define OKPIPFKONMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA19A0)
#define OKPIPFKONMG_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1DEA1700)
#define OKPIPFKONMG_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1DEA16C0)
#define OKPIPFKONMG_JCAIAADJKII_OFFSET UNITYSDK_OFFSET(0x1DEA16E0)
#define OKPIPFKONMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA1570)
#define OKPIPFKONMG_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1DEA16F0)
#define OKPIPFKONMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA1E60)
#define OKPIPFKONMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA1DB0)
#define OKPIPFKONMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA15A0)
#define OKPIPFKONMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA1A10)
#define OKPIPFKONMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA1A70)

	class OKPIPFKONMG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GKFGIMIBBHF*>* FJKKFKBLFAJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JHCOABLIANB; // 0x20
		::PONHNPLLKAB AFHHMCKLLAJ; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_IOBHNAPFDCD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OKPIPFKONMG")->GetStaticField(0x23240);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OKPIPFKONMG")->GetStaticField(0x23248);
		}

		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object ONPKDLFJIBN; // 0x0
		// static const ::System::Object FGCLPKIDGFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIPFKONMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKPIPFKONMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKPIPFKONMG*))((::PBYTE)hIl2Cpp + OKPIPFKONMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKPIPFKONMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OKPIPFKONMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIPFKONMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKPIPFKONMG* Clone()
		{
			return ((::OKPIPFKONMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIPFKONMG_CLONE_OFFSET))(this);
		}

		::PONHNPLLKAB JBENBABCOGB()
		{
			return ((::PONHNPLLKAB(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIPFKONMG_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::PONHNPLLKAB a1)
		{
			return ((::System::Void(*)(::PVOID, ::PONHNPLLKAB))((::PBYTE)hIl2Cpp + OKPIPFKONMG_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GKFGIMIBBHF*>* JCAIAADJKII()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GKFGIMIBBHF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIPFKONMG_JCAIAADJKII_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIPFKONMG_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKPIPFKONMG_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKPIPFKONMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKPIPFKONMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKPIPFKONMG*))((::PBYTE)hIl2Cpp + OKPIPFKONMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIPFKONMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIPFKONMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKPIPFKONMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIPFKONMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKPIPFKONMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKPIPFKONMG*))((::PBYTE)hIl2Cpp + OKPIPFKONMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKPIPFKONMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
