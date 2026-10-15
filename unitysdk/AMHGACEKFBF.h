#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOCCEBGNPJA.h"
#include "unitysdk/System/Object.h"
class AMHGACEKFBF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMHGACEKFBF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E522490)
#define AMHGACEKFBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5227A0)
#define AMHGACEKFBF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5220D0)
#define AMHGACEKFBF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5220A0)
#define AMHGACEKFBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E522090)
#define AMHGACEKFBF_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E522140)
#define AMHGACEKFBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E522240)
#define AMHGACEKFBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E522160)
#define AMHGACEKFBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E522310)
#define AMHGACEKFBF_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E522130)
#define AMHGACEKFBF_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E522120)
#define AMHGACEKFBF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E522050)
#define AMHGACEKFBF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E522620)
#define AMHGACEKFBF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5225E0)
#define AMHGACEKFBF_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E522150)
#define AMHGACEKFBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E522080)
#define AMHGACEKFBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E522340)
#define AMHGACEKFBF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5223A0)

inline static constexpr unsigned int AMHGACEKFBF_TypeDefinitionIndex = 35060;

	class AMHGACEKFBF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AOCCEBGNPJA GMPNCOBOFDM; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AMHGACEKFBF")->GetStaticField(0x3C710);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGACEKFBF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMHGACEKFBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMHGACEKFBF*))((::PBYTE)hIl2Cpp + AMHGACEKFBF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMHGACEKFBF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AMHGACEKFBF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGACEKFBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMHGACEKFBF* Clone()
		{
			return ((::AMHGACEKFBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGACEKFBF_CLONE_OFFSET))(this);
		}

		::AOCCEBGNPJA JBIOGKPHKKC()
		{
			return ((::AOCCEBGNPJA(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGACEKFBF_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::AOCCEBGNPJA a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOCCEBGNPJA))((::PBYTE)hIl2Cpp + AMHGACEKFBF_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGACEKFBF_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMHGACEKFBF_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMHGACEKFBF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMHGACEKFBF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMHGACEKFBF*))((::PBYTE)hIl2Cpp + AMHGACEKFBF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGACEKFBF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGACEKFBF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMHGACEKFBF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHGACEKFBF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMHGACEKFBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMHGACEKFBF*))((::PBYTE)hIl2Cpp + AMHGACEKFBF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMHGACEKFBF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
