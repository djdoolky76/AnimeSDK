#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LENKELHGNBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LENKELHGNBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E937970)
#define LENKELHGNBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E937C40)
#define LENKELHGNBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9375C0)
#define LENKELHGNBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E937590)
#define LENKELHGNBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E937580)
#define LENKELHGNBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E937730)
#define LENKELHGNBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E937650)
#define LENKELHGNBG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E937640)
#define LENKELHGNBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E937800)
#define LENKELHGNBG_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1E937620)
#define LENKELHGNBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E937540)
#define LENKELHGNBG_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1E937610)
#define LENKELHGNBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E937AC0)
#define LENKELHGNBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E937A80)
#define LENKELHGNBG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E937630)
#define LENKELHGNBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E937570)
#define LENKELHGNBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E937830)
#define LENKELHGNBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E937890)

	class LENKELHGNBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 JHCOABLIANB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LENKELHGNBG")->GetStaticField(0x39A80);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENKELHGNBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LENKELHGNBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LENKELHGNBG*))((::PBYTE)hIl2Cpp + LENKELHGNBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENKELHGNBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LENKELHGNBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENKELHGNBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LENKELHGNBG* Clone()
		{
			return ((::LENKELHGNBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENKELHGNBG_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENKELHGNBG_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LENKELHGNBG_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENKELHGNBG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LENKELHGNBG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LENKELHGNBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LENKELHGNBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LENKELHGNBG*))((::PBYTE)hIl2Cpp + LENKELHGNBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENKELHGNBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENKELHGNBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LENKELHGNBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENKELHGNBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LENKELHGNBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LENKELHGNBG*))((::PBYTE)hIl2Cpp + LENKELHGNBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LENKELHGNBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
