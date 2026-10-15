#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
class OEJBBPEEEGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEJBBPEEEGI_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DE2CFA0)
#define OEJBBPEEEGI_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DE2CFB0)
#define OEJBBPEEEGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE2D330)
#define OEJBBPEEEGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE2D590)
#define OEJBBPEEEGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE2CF60)
#define OEJBBPEEEGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE2CF30)
#define OEJBBPEEEGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2CF20)
#define OEJBBPEEEGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE2D090)
#define OEJBBPEEEGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE2CFC0)
#define OEJBBPEEEGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE2D200)
#define OEJBBPEEEGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE2CEE0)
#define OEJBBPEEEGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE2D430)
#define OEJBBPEEEGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE2D400)
#define OEJBBPEEEGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE2CF10)
#define OEJBBPEEEGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE2D230)
#define OEJBBPEEEGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE2D290)

	class OEJBBPEEEGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HNOHHOEPFHC LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OEJBBPEEEGI")->GetStaticField(0x151F0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEJBBPEEEGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEJBBPEEEGI*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEJBBPEEEGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OEJBBPEEEGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEJBBPEEEGI* Clone()
		{
			return ((::OEJBBPEEEGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_CLONE_OFFSET))(this);
		}

		::HNOHHOEPFHC AENLBGLIBJL()
		{
			return ((::HNOHHOEPFHC(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::HNOHHOEPFHC a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEJBBPEEEGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEJBBPEEEGI*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEJBBPEEEGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEJBBPEEEGI*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEJBBPEEEGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
