#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJCICECLDKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJCICECLDKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E286490)
#define AJCICECLDKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BDC40)
#define AJCICECLDKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2860E0)
#define AJCICECLDKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2860B0)
#define AJCICECLDKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2860A0)
#define AJCICECLDKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E286210)
#define AJCICECLDKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E286140)
#define AJCICECLDKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E286380)
#define AJCICECLDKJ_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1E286130)
#define AJCICECLDKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E286060)
#define AJCICECLDKJ_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1E286120)
#define AJCICECLDKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3BDAE0)
#define AJCICECLDKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3BDAB0)
#define AJCICECLDKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E286090)
#define AJCICECLDKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2863B0)
#define AJCICECLDKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E286410)

	class AJCICECLDKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHCOABLIANB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AJCICECLDKJ")->GetStaticField(0x341C0);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCICECLDKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJCICECLDKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJCICECLDKJ*))((::PBYTE)hIl2Cpp + AJCICECLDKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJCICECLDKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AJCICECLDKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCICECLDKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJCICECLDKJ* Clone()
		{
			return ((::AJCICECLDKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCICECLDKJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCICECLDKJ_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJCICECLDKJ_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJCICECLDKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJCICECLDKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJCICECLDKJ*))((::PBYTE)hIl2Cpp + AJCICECLDKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCICECLDKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCICECLDKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJCICECLDKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCICECLDKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJCICECLDKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJCICECLDKJ*))((::PBYTE)hIl2Cpp + AJCICECLDKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJCICECLDKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
