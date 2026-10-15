#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJACHMJFEAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJACHMJFEAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E573E00)
#define HJACHMJFEAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5740D0)
#define HJACHMJFEAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E573A50)
#define HJACHMJFEAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E573A20)
#define HJACHMJFEAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E573A10)
#define HJACHMJFEAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E573BC0)
#define HJACHMJFEAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E573AE0)
#define HJACHMJFEAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E573C90)
#define HJACHMJFEAH_HBLPGFEOHGP_OFFSET UNITYSDK_OFFSET(0x1E573AB0)
#define HJACHMJFEAH_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E573AD0)
#define HJACHMJFEAH_IKGGGGKMGLN_OFFSET UNITYSDK_OFFSET(0x1E573AA0)
#define HJACHMJFEAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5739D0)
#define HJACHMJFEAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E573F50)
#define HJACHMJFEAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E573F10)
#define HJACHMJFEAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E573A00)
#define HJACHMJFEAH_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E573AC0)
#define HJACHMJFEAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E573CC0)
#define HJACHMJFEAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E573D20)

inline static constexpr unsigned int HJACHMJFEAH_TypeDefinitionIndex = 25872;

	class HJACHMJFEAH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HAHOPPLLGCE; // 0x18
		::System::UInt32 CMCCOIIMHMC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HJACHMJFEAH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HJACHMJFEAH*>**)UnitySDK::FromName("", "HJACHMJFEAH")->GetStaticField(0x34F90);
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

		static ::Google::Protobuf::MessageParser_1<::HJACHMJFEAH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HJACHMJFEAH*>*(*)())((::PBYTE)hIl2Cpp + HJACHMJFEAH_JJGHOBBFNJD_OFFSET))();
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
