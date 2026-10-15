#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHLAFMBONNK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHLAFMBONNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E848E70)
#define KHLAFMBONNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E848F10)
#define KHLAFMBONNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E848B10)
#define KHLAFMBONNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E848AE0)
#define KHLAFMBONNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E848AD0)
#define KHLAFMBONNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E848C70)
#define KHLAFMBONNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E848B80)
#define KHLAFMBONNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E848DD0)
#define KHLAFMBONNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E848A60)
#define KHLAFMBONNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E848EC0)
#define KHLAFMBONNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E848E90)
#define KHLAFMBONNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E848AC0)
#define KHLAFMBONNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E848E00)
#define KHLAFMBONNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E848E60)

inline static constexpr unsigned int KHLAFMBONNK_TypeDefinitionIndex = 27182;

	class KHLAFMBONNK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KHLAFMBONNK")->GetStaticField(0x179F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLAFMBONNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHLAFMBONNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHLAFMBONNK*))((::PBYTE)hIl2Cpp + KHLAFMBONNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHLAFMBONNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KHLAFMBONNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLAFMBONNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHLAFMBONNK* Clone()
		{
			return ((::KHLAFMBONNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLAFMBONNK_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHLAFMBONNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHLAFMBONNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHLAFMBONNK*))((::PBYTE)hIl2Cpp + KHLAFMBONNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLAFMBONNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLAFMBONNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHLAFMBONNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLAFMBONNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHLAFMBONNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHLAFMBONNK*))((::PBYTE)hIl2Cpp + KHLAFMBONNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHLAFMBONNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
