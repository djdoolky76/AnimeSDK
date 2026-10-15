#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHOFKNCODLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JHOFKNCODLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E71ACF0)
#define JHOFKNCODLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71AD90)
#define JHOFKNCODLC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E71A9E0)
#define JHOFKNCODLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E71A9B0)
#define JHOFKNCODLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71A9A0)
#define JHOFKNCODLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E71AAF0)
#define JHOFKNCODLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E71AA20)
#define JHOFKNCODLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E71AC50)
#define JHOFKNCODLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E71A960)
#define JHOFKNCODLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E71AD40)
#define JHOFKNCODLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E71AD10)
#define JHOFKNCODLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E71A990)
#define JHOFKNCODLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E71AC80)
#define JHOFKNCODLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E71ACE0)

inline static constexpr unsigned int JHOFKNCODLC_TypeDefinitionIndex = 28408;

	class JHOFKNCODLC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JHOFKNCODLC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JHOFKNCODLC*>**)UnitySDK::FromName("", "JHOFKNCODLC")->GetStaticField(0x5F440);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JHOFKNCODLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHOFKNCODLC*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHOFKNCODLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JHOFKNCODLC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JHOFKNCODLC*>*(*)())((::PBYTE)hIl2Cpp + JHOFKNCODLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JHOFKNCODLC* Clone()
		{
			return ((::JHOFKNCODLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JHOFKNCODLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JHOFKNCODLC*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOFKNCODLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JHOFKNCODLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JHOFKNCODLC*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JHOFKNCODLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
