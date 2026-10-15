#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOCCEBGNPJA.h"
#include "unitysdk/System/Object.h"
class DJJKDINFDEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJJKDINFDEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1CC710)
#define DJJKDINFDEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1CCA20)
#define DJJKDINFDEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1CC350)
#define DJJKDINFDEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1CC320)
#define DJJKDINFDEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CC310)
#define DJJKDINFDEH_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E1CC3A0)
#define DJJKDINFDEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1CC4C0)
#define DJJKDINFDEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1CC3E0)
#define DJJKDINFDEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1CC590)
#define DJJKDINFDEH_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E1CC3D0)
#define DJJKDINFDEH_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E1CC3C0)
#define DJJKDINFDEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1CC2D0)
#define DJJKDINFDEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1CC8A0)
#define DJJKDINFDEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1CC860)
#define DJJKDINFDEH_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E1CC3B0)
#define DJJKDINFDEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1CC300)
#define DJJKDINFDEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1CC5C0)
#define DJJKDINFDEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1CC620)

	class DJJKDINFDEH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AOCCEBGNPJA GMPNCOBOFDM; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DJJKDINFDEH")->GetStaticField(0x387B0);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJKDINFDEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJJKDINFDEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJJKDINFDEH*))((::PBYTE)hIl2Cpp + DJJKDINFDEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJJKDINFDEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DJJKDINFDEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJKDINFDEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJJKDINFDEH* Clone()
		{
			return ((::DJJKDINFDEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJKDINFDEH_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJKDINFDEH_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJJKDINFDEH_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::AOCCEBGNPJA JBIOGKPHKKC()
		{
			return ((::AOCCEBGNPJA(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJKDINFDEH_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::AOCCEBGNPJA a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOCCEBGNPJA))((::PBYTE)hIl2Cpp + DJJKDINFDEH_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJJKDINFDEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJJKDINFDEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJJKDINFDEH*))((::PBYTE)hIl2Cpp + DJJKDINFDEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJKDINFDEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJKDINFDEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJJKDINFDEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJKDINFDEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJJKDINFDEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJJKDINFDEH*))((::PBYTE)hIl2Cpp + DJJKDINFDEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJJKDINFDEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
