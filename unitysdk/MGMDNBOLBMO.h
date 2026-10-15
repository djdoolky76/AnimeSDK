#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGMDNBOLBMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGMDNBOLBMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA27880)
#define MGMDNBOLBMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA27AA0)
#define MGMDNBOLBMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA274D0)
#define MGMDNBOLBMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA274A0)
#define MGMDNBOLBMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA27490)
#define MGMDNBOLBMO_DJCNNNCFAMK_OFFSET UNITYSDK_OFFSET(0x1EA27520)
#define MGMDNBOLBMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA27600)
#define MGMDNBOLBMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA27530)
#define MGMDNBOLBMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA27770)
#define MGMDNBOLBMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA27450)
#define MGMDNBOLBMO_LONAFCAKFON_OFFSET UNITYSDK_OFFSET(0x1EA27510)
#define MGMDNBOLBMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA27940)
#define MGMDNBOLBMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA27910)
#define MGMDNBOLBMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA27480)
#define MGMDNBOLBMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA277A0)
#define MGMDNBOLBMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA27800)

inline static constexpr unsigned int MGMDNBOLBMO_TypeDefinitionIndex = 26252;

	class MGMDNBOLBMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KLFFACJJGEA; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MGMDNBOLBMO")->GetStaticField(0x4E4E0);
		}

		// static const ::System::Object NDIGCLAEEMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGMDNBOLBMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGMDNBOLBMO*))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGMDNBOLBMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MGMDNBOLBMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGMDNBOLBMO* Clone()
		{
			return ((::MGMDNBOLBMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_CLONE_OFFSET))(this);
		}

		::System::UInt32 LONAFCAKFON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_LONAFCAKFON_OFFSET))(this);
		}

		::System::Void DJCNNNCFAMK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_DJCNNNCFAMK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGMDNBOLBMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGMDNBOLBMO*))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGMDNBOLBMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGMDNBOLBMO*))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGMDNBOLBMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
