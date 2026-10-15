#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJFEONHOKAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJFEONHOKAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E94DDE0)
#define LJFEONHOKAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E94E000)
#define LJFEONHOKAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E94DA30)
#define LJFEONHOKAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E94DA00)
#define LJFEONHOKAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94D9F0)
#define LJFEONHOKAG_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E94DA70)
#define LJFEONHOKAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E94DB60)
#define LJFEONHOKAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E94DA90)
#define LJFEONHOKAG_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E94DA80)
#define LJFEONHOKAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E94DCD0)
#define LJFEONHOKAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E94D9B0)
#define LJFEONHOKAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E94DEA0)
#define LJFEONHOKAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E94DE70)
#define LJFEONHOKAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E94D9E0)
#define LJFEONHOKAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E94DD00)
#define LJFEONHOKAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E94DD60)

inline static constexpr unsigned int LJFEONHOKAG_TypeDefinitionIndex = 35107;

	class LJFEONHOKAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LJFEONHOKAG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LJFEONHOKAG*>**)UnitySDK::FromName("", "LJFEONHOKAG")->GetStaticField(0x386C0);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFEONHOKAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJFEONHOKAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFEONHOKAG*))((::PBYTE)hIl2Cpp + LJFEONHOKAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJFEONHOKAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LJFEONHOKAG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LJFEONHOKAG*>*(*)())((::PBYTE)hIl2Cpp + LJFEONHOKAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFEONHOKAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJFEONHOKAG* Clone()
		{
			return ((::LJFEONHOKAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFEONHOKAG_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFEONHOKAG_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJFEONHOKAG_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJFEONHOKAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJFEONHOKAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJFEONHOKAG*))((::PBYTE)hIl2Cpp + LJFEONHOKAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFEONHOKAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFEONHOKAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJFEONHOKAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFEONHOKAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJFEONHOKAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFEONHOKAG*))((::PBYTE)hIl2Cpp + LJFEONHOKAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJFEONHOKAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
