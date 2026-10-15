#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBJDNDEIKDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBJDNDEIKDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E15E330)
#define DBJDNDEIKDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15E550)
#define DBJDNDEIKDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E15DF80)
#define DBJDNDEIKDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E15DF50)
#define DBJDNDEIKDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15DF40)
#define DBJDNDEIKDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E15E0B0)
#define DBJDNDEIKDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E15DFE0)
#define DBJDNDEIKDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E15E220)
#define DBJDNDEIKDM_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E15DFD0)
#define DBJDNDEIKDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E15DF00)
#define DBJDNDEIKDM_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E15DFC0)
#define DBJDNDEIKDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E15E3F0)
#define DBJDNDEIKDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E15E3C0)
#define DBJDNDEIKDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E15DF30)
#define DBJDNDEIKDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E15E250)
#define DBJDNDEIKDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E15E2B0)

	class DBJDNDEIKDM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DBJDNDEIKDM")->GetStaticField(0x25FE0);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBJDNDEIKDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBJDNDEIKDM*))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBJDNDEIKDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DBJDNDEIKDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBJDNDEIKDM* Clone()
		{
			return ((::DBJDNDEIKDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBJDNDEIKDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBJDNDEIKDM*))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBJDNDEIKDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBJDNDEIKDM*))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBJDNDEIKDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
