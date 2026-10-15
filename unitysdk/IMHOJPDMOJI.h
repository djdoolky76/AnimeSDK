#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMHOJPDMOJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMHOJPDMOJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B7120)
#define IMHOJPDMOJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B7340)
#define IMHOJPDMOJI_CKHIBDOKAAF_OFFSET UNITYSDK_OFFSET(0x1E6B6D90)
#define IMHOJPDMOJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B6D10)
#define IMHOJPDMOJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B6CE0)
#define IMHOJPDMOJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B6CD0)
#define IMHOJPDMOJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B6EA0)
#define IMHOJPDMOJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B6DA0)
#define IMHOJPDMOJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B7010)
#define IMHOJPDMOJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B6C60)
#define IMHOJPDMOJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B71E0)
#define IMHOJPDMOJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B71B0)
#define IMHOJPDMOJI_MJDFFBIPOCN_OFFSET UNITYSDK_OFFSET(0x1E6B6D80)
#define IMHOJPDMOJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B6CC0)
#define IMHOJPDMOJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B7040)
#define IMHOJPDMOJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B70A0)

inline static constexpr unsigned int IMHOJPDMOJI_TypeDefinitionIndex = 31796;

	class IMHOJPDMOJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NDJFKLJJAPO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IMHOJPDMOJI")->GetStaticField(0x572E0);
		}

		// static const ::System::Object MMGGJLKAPHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMHOJPDMOJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMHOJPDMOJI*))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMHOJPDMOJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IMHOJPDMOJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMHOJPDMOJI* Clone()
		{
			return ((::IMHOJPDMOJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 MJDFFBIPOCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_MJDFFBIPOCN_OFFSET))(this);
		}

		::System::Void CKHIBDOKAAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_CKHIBDOKAAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMHOJPDMOJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMHOJPDMOJI*))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMHOJPDMOJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMHOJPDMOJI*))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMHOJPDMOJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
