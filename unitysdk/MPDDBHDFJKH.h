#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPDDBHDFJKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPDDBHDFJKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA87DB0)
#define MPDDBHDFJKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA87FD0)
#define MPDDBHDFJKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA87A00)
#define MPDDBHDFJKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA879D0)
#define MPDDBHDFJKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA879C0)
#define MPDDBHDFJKH_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1EA87A40)
#define MPDDBHDFJKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA87B30)
#define MPDDBHDFJKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA87A60)
#define MPDDBHDFJKH_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1EA87A50)
#define MPDDBHDFJKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA87CA0)
#define MPDDBHDFJKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA87980)
#define MPDDBHDFJKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA87E70)
#define MPDDBHDFJKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA87E40)
#define MPDDBHDFJKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA879B0)
#define MPDDBHDFJKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA87CD0)
#define MPDDBHDFJKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA87D30)

inline static constexpr unsigned int MPDDBHDFJKH_TypeDefinitionIndex = 33000;

	class MPDDBHDFJKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NIAOPCJHKCG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MPDDBHDFJKH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MPDDBHDFJKH*>**)UnitySDK::FromName("", "MPDDBHDFJKH")->GetStaticField(0x5B750);
		}

		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPDDBHDFJKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPDDBHDFJKH*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPDDBHDFJKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MPDDBHDFJKH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MPDDBHDFJKH*>*(*)())((::PBYTE)hIl2Cpp + MPDDBHDFJKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPDDBHDFJKH* Clone()
		{
			return ((::MPDDBHDFJKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_CLONE_OFFSET))(this);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPDDBHDFJKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPDDBHDFJKH*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPDDBHDFJKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPDDBHDFJKH*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPDDBHDFJKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
