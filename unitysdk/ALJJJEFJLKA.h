#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALJJJEFJLKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALJJJEFJLKA_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E50FFE0)
#define ALJJJEFJLKA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E510340)
#define ALJJJEFJLKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E510560)
#define ALJJJEFJLKA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E50FF90)
#define ALJJJEFJLKA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E50FF60)
#define ALJJJEFJLKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50FF50)
#define ALJJJEFJLKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5100C0)
#define ALJJJEFJLKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E50FFF0)
#define ALJJJEFJLKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E510230)
#define ALJJJEFJLKA_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E50FFD0)
#define ALJJJEFJLKA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E50FF10)
#define ALJJJEFJLKA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E510400)
#define ALJJJEFJLKA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5103D0)
#define ALJJJEFJLKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E50FF40)
#define ALJJJEFJLKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E510260)
#define ALJJJEFJLKA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5102C0)

inline static constexpr unsigned int ALJJJEFJLKA_TypeDefinitionIndex = 28973;

	class ALJJJEFJLKA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALJJJEFJLKA")->GetStaticField(0x39480);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALJJJEFJLKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALJJJEFJLKA*))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALJJJEFJLKA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALJJJEFJLKA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALJJJEFJLKA* Clone()
		{
			return ((::ALJJJEFJLKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALJJJEFJLKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALJJJEFJLKA*))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALJJJEFJLKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALJJJEFJLKA*))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALJJJEFJLKA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
