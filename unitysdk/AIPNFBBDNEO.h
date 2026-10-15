#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIPNFBBDNEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIPNFBBDNEO_BPOLAGJMNKK_OFFSET UNITYSDK_OFFSET(0x1E2831A0)
#define AIPNFBBDNEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E283500)
#define AIPNFBBDNEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E283720)
#define AIPNFBBDNEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E283150)
#define AIPNFBBDNEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E283120)
#define AIPNFBBDNEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E283110)
#define AIPNFBBDNEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E283280)
#define AIPNFBBDNEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2831B0)
#define AIPNFBBDNEO_GEPNBJGOEDM_OFFSET UNITYSDK_OFFSET(0x1E283190)
#define AIPNFBBDNEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2833F0)
#define AIPNFBBDNEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2830D0)
#define AIPNFBBDNEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2835C0)
#define AIPNFBBDNEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E283590)
#define AIPNFBBDNEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E283100)
#define AIPNFBBDNEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E283420)
#define AIPNFBBDNEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E283480)

	class AIPNFBBDNEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DGODIBCLHGN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AIPNFBBDNEO")->GetStaticField(0x33E20);
		}

		// static const ::System::Object OJPKFLDKPEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIPNFBBDNEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIPNFBBDNEO*))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIPNFBBDNEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AIPNFBBDNEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIPNFBBDNEO* Clone()
		{
			return ((::AIPNFBBDNEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEPNBJGOEDM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_GEPNBJGOEDM_OFFSET))(this);
		}

		::System::Void BPOLAGJMNKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_BPOLAGJMNKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIPNFBBDNEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIPNFBBDNEO*))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIPNFBBDNEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIPNFBBDNEO*))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIPNFBBDNEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
