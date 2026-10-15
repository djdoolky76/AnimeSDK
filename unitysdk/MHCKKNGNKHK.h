#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHCKKNGNKHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHCKKNGNKHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA2CD80)
#define MHCKKNGNKHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2D050)
#define MHCKKNGNKHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA2C9D0)
#define MHCKKNGNKHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA2C9A0)
#define MHCKKNGNKHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C990)
#define MHCKKNGNKHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA2CB40)
#define MHCKKNGNKHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA2CA60)
#define MHCKKNGNKHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA2CC10)
#define MHCKKNGNKHK_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1EA2CA30)
#define MHCKKNGNKHK_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1EA2CA20)
#define MHCKKNGNKHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA2C950)
#define MHCKKNGNKHK_JODBIKCOKPA_OFFSET UNITYSDK_OFFSET(0x1EA2CA40)
#define MHCKKNGNKHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA2CED0)
#define MHCKKNGNKHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA2CE90)
#define MHCKKNGNKHK_MGHDAHFEGHK_OFFSET UNITYSDK_OFFSET(0x1EA2CA50)
#define MHCKKNGNKHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C980)
#define MHCKKNGNKHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA2CC40)
#define MHCKKNGNKHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA2CCA0)

inline static constexpr unsigned int MHCKKNGNKHK_TypeDefinitionIndex = 27831;

	class MHCKKNGNKHK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LAPDJOMDENI; // 0x18
		::System::UInt32 GMPNCOBOFDM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MHCKKNGNKHK")->GetStaticField(0xDEC0);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object ILFADHBKBCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHCKKNGNKHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHCKKNGNKHK*))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHCKKNGNKHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MHCKKNGNKHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHCKKNGNKHK* Clone()
		{
			return ((::MHCKKNGNKHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_CLONE_OFFSET))(this);
		}

		::System::UInt32 JBIOGKPHKKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 JODBIKCOKPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_JODBIKCOKPA_OFFSET))(this);
		}

		::System::Void MGHDAHFEGHK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_MGHDAHFEGHK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHCKKNGNKHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHCKKNGNKHK*))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHCKKNGNKHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHCKKNGNKHK*))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHCKKNGNKHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
