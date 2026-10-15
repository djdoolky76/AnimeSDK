#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJACHMJFEAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJACHMJFEAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5A13D0)
#define HJACHMJFEAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A16A0)
#define HJACHMJFEAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5A1020)
#define HJACHMJFEAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A0FF0)
#define HJACHMJFEAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A0FE0)
#define HJACHMJFEAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5A1190)
#define HJACHMJFEAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5A10B0)
#define HJACHMJFEAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5A1260)
#define HJACHMJFEAH_HBLPGFEOHGP_OFFSET UNITYSDK_OFFSET(0x1E5A1080)
#define HJACHMJFEAH_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E5A10A0)
#define HJACHMJFEAH_IKGGGGKMGLN_OFFSET UNITYSDK_OFFSET(0x1E5A1070)
#define HJACHMJFEAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5A0FA0)
#define HJACHMJFEAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5A1520)
#define HJACHMJFEAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5A14E0)
#define HJACHMJFEAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5A0FD0)
#define HJACHMJFEAH_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E5A1090)
#define HJACHMJFEAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5A1290)
#define HJACHMJFEAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5A12F0)

inline static constexpr unsigned int HJACHMJFEAH_TypeDefinitionIndex = 25872;

	class HJACHMJFEAH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMCCOIIMHMC; // 0x18
		::System::UInt32 HAHOPPLLGCE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HJACHMJFEAH")->GetStaticField(0x3EF50);
		}

		// static const ::System::Object MJDEFIKLIIE; // 0x0
		// static const ::System::Object NLAPNDADCIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJACHMJFEAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJACHMJFEAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJACHMJFEAH*))((::PBYTE)hIl2Cpp + HJACHMJFEAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJACHMJFEAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HJACHMJFEAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJACHMJFEAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJACHMJFEAH* Clone()
		{
			return ((::HJACHMJFEAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJACHMJFEAH_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKGGGGKMGLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJACHMJFEAH_IKGGGGKMGLN_OFFSET))(this);
		}

		::System::Void HBLPGFEOHGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJACHMJFEAH_HBLPGFEOHGP_OFFSET))(this, a1);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJACHMJFEAH_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJACHMJFEAH_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJACHMJFEAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJACHMJFEAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJACHMJFEAH*))((::PBYTE)hIl2Cpp + HJACHMJFEAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJACHMJFEAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJACHMJFEAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJACHMJFEAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJACHMJFEAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJACHMJFEAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJACHMJFEAH*))((::PBYTE)hIl2Cpp + HJACHMJFEAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJACHMJFEAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
