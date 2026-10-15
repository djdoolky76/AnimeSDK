#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOEIBOFDLCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOEIBOFDLCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8AFEF0)
#define KOEIBOFDLCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B0110)
#define KOEIBOFDLCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8AFAE0)
#define KOEIBOFDLCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8AFAB0)
#define KOEIBOFDLCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AFAA0)
#define KOEIBOFDLCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8AFC70)
#define KOEIBOFDLCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8AFB70)
#define KOEIBOFDLCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8AFDE0)
#define KOEIBOFDLCM_GILKFKJECPD_OFFSET UNITYSDK_OFFSET(0x1E8AFB60)
#define KOEIBOFDLCM_JFAFPMBFBJB_OFFSET UNITYSDK_OFFSET(0x1E8AFB50)
#define KOEIBOFDLCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8AFA30)
#define KOEIBOFDLCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8AFFB0)
#define KOEIBOFDLCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8AFF80)
#define KOEIBOFDLCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8AFA90)
#define KOEIBOFDLCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8AFE10)
#define KOEIBOFDLCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8AFE70)

	class KOEIBOFDLCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HACAKIDANLE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KOEIBOFDLCM")->GetStaticField(0x2B730);
		}

		// static const ::System::Object MMMLJEPBDMF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOEIBOFDLCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOEIBOFDLCM*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOEIBOFDLCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KOEIBOFDLCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOEIBOFDLCM* Clone()
		{
			return ((::KOEIBOFDLCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 JFAFPMBFBJB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_JFAFPMBFBJB_OFFSET))(this);
		}

		::System::Void GILKFKJECPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_GILKFKJECPD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOEIBOFDLCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOEIBOFDLCM*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOEIBOFDLCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOEIBOFDLCM*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
