#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMKCLPKFHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOMKCLPKFHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7ABCD0)
#define JOMKCLPKFHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7ABEF0)
#define JOMKCLPKFHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7AB920)
#define JOMKCLPKFHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7AB8F0)
#define JOMKCLPKFHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AB8E0)
#define JOMKCLPKFHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7ABA50)
#define JOMKCLPKFHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7AB980)
#define JOMKCLPKFHM_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E7AB960)
#define JOMKCLPKFHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7ABBC0)
#define JOMKCLPKFHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7AB8A0)
#define JOMKCLPKFHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7ABD90)
#define JOMKCLPKFHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7ABD60)
#define JOMKCLPKFHM_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E7AB970)
#define JOMKCLPKFHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7AB8D0)
#define JOMKCLPKFHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7ABBF0)
#define JOMKCLPKFHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7ABC50)

	class JOMKCLPKFHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OPPNMFMNMGC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JOMKCLPKFHM")->GetStaticField(0x6D460);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOMKCLPKFHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOMKCLPKFHM*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMKCLPKFHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JOMKCLPKFHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOMKCLPKFHM* Clone()
		{
			return ((::JOMKCLPKFHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOMKCLPKFHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOMKCLPKFHM*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOMKCLPKFHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOMKCLPKFHM*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOMKCLPKFHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
