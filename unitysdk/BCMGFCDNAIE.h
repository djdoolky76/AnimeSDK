#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCMGFCDNAIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCMGFCDNAIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA7EE20)
#define BCMGFCDNAIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA7F040)
#define BCMGFCDNAIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA7EA70)
#define BCMGFCDNAIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA7EA40)
#define BCMGFCDNAIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA7EA30)
#define BCMGFCDNAIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA7EBA0)
#define BCMGFCDNAIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA7EAD0)
#define BCMGFCDNAIE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FA7EAC0)
#define BCMGFCDNAIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA7ED10)
#define BCMGFCDNAIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA7E9F0)
#define BCMGFCDNAIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA7EEE0)
#define BCMGFCDNAIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA7EEB0)
#define BCMGFCDNAIE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FA7EAB0)
#define BCMGFCDNAIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA7EA20)
#define BCMGFCDNAIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA7ED40)
#define BCMGFCDNAIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA7EDA0)

inline static constexpr unsigned int BCMGFCDNAIE_TypeDefinitionIndex = 29378;

	class BCMGFCDNAIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BCMGFCDNAIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BCMGFCDNAIE*>**)UnitySDK::FromName("", "BCMGFCDNAIE")->GetStaticField(0x45760);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCMGFCDNAIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMGFCDNAIE*))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCMGFCDNAIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BCMGFCDNAIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BCMGFCDNAIE*>*(*)())((::PBYTE)hIl2Cpp + BCMGFCDNAIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCMGFCDNAIE* Clone()
		{
			return ((::BCMGFCDNAIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCMGFCDNAIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCMGFCDNAIE*))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCMGFCDNAIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMGFCDNAIE*))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCMGFCDNAIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
