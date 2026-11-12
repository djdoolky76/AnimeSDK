#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGHOBPBFFOB;
class LJEFFBCJJEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJEFFBCJJEM_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x1FC9A4F0)
#define LJEFFBCJJEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC9AA90)
#define LJEFFBCJJEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC9ADB0)
#define LJEFFBCJJEM_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x1FC9A500)
#define LJEFFBCJJEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC9A450)
#define LJEFFBCJJEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC9A3C0)
#define LJEFFBCJJEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC9A3B0)
#define LJEFFBCJJEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC9A680)
#define LJEFFBCJJEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC9A510)
#define LJEFFBCJJEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC9A950)
#define LJEFFBCJJEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC9A370)
#define LJEFFBCJJEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC9ABD0)
#define LJEFFBCJJEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC9AAF0)
#define LJEFFBCJJEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC9A3A0)
#define LJEFFBCJJEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC9A9A0)
#define LJEFFBCJJEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC9AA00)

inline static constexpr unsigned int LJEFFBCJJEM_TypeDefinitionIndex = 36047;

	class LJEFFBCJJEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GGHOBPBFFOB* NIBJKKOGKAE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LJEFFBCJJEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LJEFFBCJJEM*>**)UnitySDK::FromName("", "LJEFFBCJJEM")->GetStaticField(0x38AB0);
		}

		// static const ::System::Object EAHAEFHMLHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJEFFBCJJEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJEFFBCJJEM*))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJEFFBCJJEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LJEFFBCJJEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LJEFFBCJJEM*>*(*)())((::PBYTE)hIl2Cpp + LJEFFBCJJEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJEFFBCJJEM* Clone()
		{
			return ((::LJEFFBCJJEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_CLONE_OFFSET))(this);
		}

		::GGHOBPBFFOB* BGEMDHNDOBP()
		{
			return ((::GGHOBPBFFOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_CKPMCBGJBDA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJEFFBCJJEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJEFFBCJJEM*))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJEFFBCJJEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJEFFBCJJEM*))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJEFFBCJJEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
