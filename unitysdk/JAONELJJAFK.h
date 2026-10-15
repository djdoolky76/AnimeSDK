#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAONELJJAFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JAONELJJAFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6F1260)
#define JAONELJJAFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F14E0)
#define JAONELJJAFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6F0CE0)
#define JAONELJJAFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6F0CA0)
#define JAONELJJAFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F0C90)
#define JAONELJJAFK_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E6F0D90)
#define JAONELJJAFK_EHLHNDBBKCE_OFFSET UNITYSDK_OFFSET(0x1E6F0D60)
#define JAONELJJAFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6F0E00)
#define JAONELJJAFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6F0DA0)
#define JAONELJJAFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6F0FF0)
#define JAONELJJAFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6F0C20)
#define JAONELJJAFK_LJKEODPEFPG_OFFSET UNITYSDK_OFFSET(0x1E6F0D70)
#define JAONELJJAFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6F1360)
#define JAONELJJAFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6F1310)
#define JAONELJJAFK_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E6F0D80)
#define JAONELJJAFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6F0C80)
#define JAONELJJAFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6F1110)
#define JAONELJJAFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6F1170)

	class JAONELJJAFK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EPDPJFHAJND; // 0x18
		::System::Single DFKHBNCHKBI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JAONELJJAFK")->GetStaticField(0x42A10);
		}

		// static const ::System::Object OPDHMAOPEGB; // 0x0
		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAONELJJAFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JAONELJJAFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAONELJJAFK*))((::PBYTE)hIl2Cpp + JAONELJJAFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAONELJJAFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JAONELJJAFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAONELJJAFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JAONELJJAFK* Clone()
		{
			return ((::JAONELJJAFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAONELJJAFK_CLONE_OFFSET))(this);
		}

		::System::UInt32 EHLHNDBBKCE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAONELJJAFK_EHLHNDBBKCE_OFFSET))(this);
		}

		::System::Void LJKEODPEFPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JAONELJJAFK_LJKEODPEFPG_OFFSET))(this, a1);
		}

		::System::Single MNLDMBGAJIF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAONELJJAFK_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAONELJJAFK_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JAONELJJAFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JAONELJJAFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JAONELJJAFK*))((::PBYTE)hIl2Cpp + JAONELJJAFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAONELJJAFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAONELJJAFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JAONELJJAFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAONELJJAFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JAONELJJAFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAONELJJAFK*))((::PBYTE)hIl2Cpp + JAONELJJAFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JAONELJJAFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
