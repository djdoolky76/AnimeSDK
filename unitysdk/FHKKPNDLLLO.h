#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHKKPNDLLLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHKKPNDLLLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E38EAD0)
#define FHKKPNDLLLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38ECF0)
#define FHKKPNDLLLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E38E6C0)
#define FHKKPNDLLLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E38E690)
#define FHKKPNDLLLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38E680)
#define FHKKPNDLLLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E38E850)
#define FHKKPNDLLLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E38E750)
#define FHKKPNDLLLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E38E9C0)
#define FHKKPNDLLLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E38E610)
#define FHKKPNDLLLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E38EB90)
#define FHKKPNDLLLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E38EB60)
#define FHKKPNDLLLO_NCOKKJBNOHA_OFFSET UNITYSDK_OFFSET(0x1E38E740)
#define FHKKPNDLLLO_PBDCPINNEHB_OFFSET UNITYSDK_OFFSET(0x1E38E730)
#define FHKKPNDLLLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E38E670)
#define FHKKPNDLLLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E38E9F0)
#define FHKKPNDLLLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E38EA50)

inline static constexpr unsigned int FHKKPNDLLLO_TypeDefinitionIndex = 25637;

	class FHKKPNDLLLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFKCJLGPJIF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FHKKPNDLLLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHKKPNDLLLO*>**)UnitySDK::FromName("", "FHKKPNDLLLO")->GetStaticField(0x53470);
		}

		// static const ::System::Object OAAJLFDLHMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHKKPNDLLLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHKKPNDLLLO*))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHKKPNDLLLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHKKPNDLLLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHKKPNDLLLO*>*(*)())((::PBYTE)hIl2Cpp + FHKKPNDLLLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHKKPNDLLLO* Clone()
		{
			return ((::FHKKPNDLLLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 PBDCPINNEHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_PBDCPINNEHB_OFFSET))(this);
		}

		::System::Void NCOKKJBNOHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_NCOKKJBNOHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHKKPNDLLLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHKKPNDLLLO*))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHKKPNDLLLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHKKPNDLLLO*))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHKKPNDLLLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
