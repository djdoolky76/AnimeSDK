#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMIHIMCHHIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMIHIMCHHIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B79C0)
#define IMIHIMCHHIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B7C90)
#define IMIHIMCHHIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B75C0)
#define IMIHIMCHHIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B7590)
#define IMIHIMCHHIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B7580)
#define IMIHIMCHHIP_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1E6B7650)
#define IMIHIMCHHIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B7780)
#define IMIHIMCHHIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B7670)
#define IMIHIMCHHIP_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1E6B7660)
#define IMIHIMCHHIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B7850)
#define IMIHIMCHHIP_JBNIJBLPJIJ_OFFSET UNITYSDK_OFFSET(0x1E6B7630)
#define IMIHIMCHHIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B7510)
#define IMIHIMCHHIP_KMDFDCDFCPH_OFFSET UNITYSDK_OFFSET(0x1E6B7640)
#define IMIHIMCHHIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B7B10)
#define IMIHIMCHHIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B7AD0)
#define IMIHIMCHHIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B7570)
#define IMIHIMCHHIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B7880)
#define IMIHIMCHHIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B78E0)

inline static constexpr unsigned int IMIHIMCHHIP_TypeDefinitionIndex = 28283;

	class IMIHIMCHHIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NOMDEJJPCMH; // 0x18
		::System::UInt32 FPANDAILPPG; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IMIHIMCHHIP")->GetStaticField(0x57420);
		}

		// static const ::System::Object KKEDECNNJAJ; // 0x0
		// static const ::System::Object GCDEHDAKDHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMIHIMCHHIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMIHIMCHHIP*))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMIHIMCHHIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IMIHIMCHHIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMIHIMCHHIP* Clone()
		{
			return ((::IMIHIMCHHIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 JBNIJBLPJIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_JBNIJBLPJIJ_OFFSET))(this);
		}

		::System::Void KMDFDCDFCPH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_KMDFDCDFCPH_OFFSET))(this, a1);
		}

		::System::UInt32 EMOIAMBEBOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_EMOIAMBEBOM_OFFSET))(this);
		}

		::System::Void FCMIJGACIDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_FCMIJGACIDK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMIHIMCHHIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMIHIMCHHIP*))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMIHIMCHHIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMIHIMCHHIP*))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMIHIMCHHIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
