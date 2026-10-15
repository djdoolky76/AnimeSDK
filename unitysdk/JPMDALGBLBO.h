#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPMDALGBLBO;
class OIDOOKMAEKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPMDALGBLBO_AMEBANPHGHL_OFFSET UNITYSDK_OFFSET(0x1E7D9480)
#define JPMDALGBLBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D9950)
#define JPMDALGBLBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D9C40)
#define JPMDALGBLBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D9400)
#define JPMDALGBLBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D9390)
#define JPMDALGBLBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D9380)
#define JPMDALGBLBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D9640)
#define JPMDALGBLBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D94C0)
#define JPMDALGBLBO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7D94B0)
#define JPMDALGBLBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D97C0)
#define JPMDALGBLBO_IKOPLBHJMPP_OFFSET UNITYSDK_OFFSET(0x1E7D9490)
#define JPMDALGBLBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D9340)
#define JPMDALGBLBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D9AA0)
#define JPMDALGBLBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D9A20)
#define JPMDALGBLBO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7D94A0)
#define JPMDALGBLBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D9370)
#define JPMDALGBLBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D9810)
#define JPMDALGBLBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D9870)

	class JPMDALGBLBO : public ::System::Object
	{
	public:
		::OIDOOKMAEKE* IPHMLCMBNDC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JPMDALGBLBO")->GetStaticField(0xC650);
		}

		// static const ::System::Object MHFKNIIFDLG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMDALGBLBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPMDALGBLBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPMDALGBLBO*))((::PBYTE)hIl2Cpp + JPMDALGBLBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPMDALGBLBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JPMDALGBLBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMDALGBLBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPMDALGBLBO* Clone()
		{
			return ((::JPMDALGBLBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMDALGBLBO_CLONE_OFFSET))(this);
		}

		::OIDOOKMAEKE* AMEBANPHGHL()
		{
			return ((::OIDOOKMAEKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMDALGBLBO_AMEBANPHGHL_OFFSET))(this);
		}

		::System::Void IKOPLBHJMPP(::OIDOOKMAEKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIDOOKMAEKE*))((::PBYTE)hIl2Cpp + JPMDALGBLBO_IKOPLBHJMPP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMDALGBLBO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPMDALGBLBO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPMDALGBLBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPMDALGBLBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPMDALGBLBO*))((::PBYTE)hIl2Cpp + JPMDALGBLBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMDALGBLBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMDALGBLBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPMDALGBLBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMDALGBLBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPMDALGBLBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPMDALGBLBO*))((::PBYTE)hIl2Cpp + JPMDALGBLBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPMDALGBLBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
