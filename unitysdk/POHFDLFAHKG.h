#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POHFDLFAHKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POHFDLFAHKG_AGEKDECKNGG_OFFSET UNITYSDK_OFFSET(0x1FCC2260)
#define POHFDLFAHKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCC2590)
#define POHFDLFAHKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCC2860)
#define POHFDLFAHKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCC21E0)
#define POHFDLFAHKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCC21B0)
#define POHFDLFAHKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC21A0)
#define POHFDLFAHKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCC2350)
#define POHFDLFAHKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCC2270)
#define POHFDLFAHKG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FCC2240)
#define POHFDLFAHKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCC2420)
#define POHFDLFAHKG_IDNFENJBNPP_OFFSET UNITYSDK_OFFSET(0x1FCC2250)
#define POHFDLFAHKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCC2160)
#define POHFDLFAHKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCC26E0)
#define POHFDLFAHKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCC26A0)
#define POHFDLFAHKG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FCC2230)
#define POHFDLFAHKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCC2190)
#define POHFDLFAHKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCC2450)
#define POHFDLFAHKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCC24B0)

inline static constexpr unsigned int POHFDLFAHKG_TypeDefinitionIndex = 33720;

	class POHFDLFAHKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DEJFOEHNFJA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::POHFDLFAHKG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::POHFDLFAHKG*>**)UnitySDK::FromName("", "POHFDLFAHKG")->GetStaticField(0x501E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EIDJNEEOOCF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHFDLFAHKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POHFDLFAHKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHFDLFAHKG*))((::PBYTE)hIl2Cpp + POHFDLFAHKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POHFDLFAHKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::POHFDLFAHKG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::POHFDLFAHKG*>*(*)())((::PBYTE)hIl2Cpp + POHFDLFAHKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHFDLFAHKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POHFDLFAHKG* Clone()
		{
			return ((::POHFDLFAHKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHFDLFAHKG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POHFDLFAHKG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POHFDLFAHKG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 IDNFENJBNPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POHFDLFAHKG_IDNFENJBNPP_OFFSET))(this);
		}

		::System::Void AGEKDECKNGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POHFDLFAHKG_AGEKDECKNGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POHFDLFAHKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POHFDLFAHKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POHFDLFAHKG*))((::PBYTE)hIl2Cpp + POHFDLFAHKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POHFDLFAHKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHFDLFAHKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POHFDLFAHKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POHFDLFAHKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POHFDLFAHKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHFDLFAHKG*))((::PBYTE)hIl2Cpp + POHFDLFAHKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POHFDLFAHKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
