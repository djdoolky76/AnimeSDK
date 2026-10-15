#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDLMAPACKNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDLMAPACKNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5522F0)
#define HDLMAPACKNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5525C0)
#define HDLMAPACKNH_CFGFHOOPCID_OFFSET UNITYSDK_OFFSET(0x1E551F70)
#define HDLMAPACKNH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E551EF0)
#define HDLMAPACKNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E551EC0)
#define HDLMAPACKNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E551EB0)
#define HDLMAPACKNH_EIDPADKFHOA_OFFSET UNITYSDK_OFFSET(0x1E551F90)
#define HDLMAPACKNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5520B0)
#define HDLMAPACKNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E551FA0)
#define HDLMAPACKNH_GDLJPPOCGCJ_OFFSET UNITYSDK_OFFSET(0x1E551F60)
#define HDLMAPACKNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E552180)
#define HDLMAPACKNH_JFNOFCOJAIO_OFFSET UNITYSDK_OFFSET(0x1E551F80)
#define HDLMAPACKNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E551E40)
#define HDLMAPACKNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E552440)
#define HDLMAPACKNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E552400)
#define HDLMAPACKNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E551EA0)
#define HDLMAPACKNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5521B0)
#define HDLMAPACKNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E552210)

	class HDLMAPACKNH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MAHGKMNGHAM; // 0x18
		::System::UInt32 BJDPMGOJABL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HDLMAPACKNH")->GetStaticField(0xE090);
		}

		// static const ::System::Object MJPGMILAHIK; // 0x0
		// static const ::System::Object FOKHKAHBHCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDLMAPACKNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDLMAPACKNH*))((::PBYTE)hIl2Cpp + HDLMAPACKNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDLMAPACKNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HDLMAPACKNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDLMAPACKNH* Clone()
		{
			return ((::HDLMAPACKNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH_CLONE_OFFSET))(this);
		}

		::System::UInt32 GDLJPPOCGCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH_GDLJPPOCGCJ_OFFSET))(this);
		}

		::System::Void CFGFHOOPCID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDLMAPACKNH_CFGFHOOPCID_OFFSET))(this, a1);
		}

		::System::UInt32 JFNOFCOJAIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH_JFNOFCOJAIO_OFFSET))(this);
		}

		::System::Void EIDPADKFHOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDLMAPACKNH_EIDPADKFHOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDLMAPACKNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDLMAPACKNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDLMAPACKNH*))((::PBYTE)hIl2Cpp + HDLMAPACKNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDLMAPACKNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDLMAPACKNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDLMAPACKNH*))((::PBYTE)hIl2Cpp + HDLMAPACKNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDLMAPACKNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
