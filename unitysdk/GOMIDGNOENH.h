#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOMIDGNOENH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOMIDGNOENH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F24C0)
#define GOMIDGNOENH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F26E0)
#define GOMIDGNOENH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F2110)
#define GOMIDGNOENH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F20E0)
#define GOMIDGNOENH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F20D0)
#define GOMIDGNOENH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F2240)
#define GOMIDGNOENH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F2170)
#define GOMIDGNOENH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F23B0)
#define GOMIDGNOENH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F2090)
#define GOMIDGNOENH_KCHHBGBJDGL_OFFSET UNITYSDK_OFFSET(0x1E4F2150)
#define GOMIDGNOENH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F2580)
#define GOMIDGNOENH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F2550)
#define GOMIDGNOENH_OHLGNCALLME_OFFSET UNITYSDK_OFFSET(0x1E4F2160)
#define GOMIDGNOENH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F20C0)
#define GOMIDGNOENH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F23E0)
#define GOMIDGNOENH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F2440)

	class GOMIDGNOENH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JDNLAIDFHHC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GOMIDGNOENH")->GetStaticField(0x2B410);
		}

		// static const ::System::Object NACMENLJJLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDGNOENH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOMIDGNOENH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOMIDGNOENH*))((::PBYTE)hIl2Cpp + GOMIDGNOENH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOMIDGNOENH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GOMIDGNOENH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDGNOENH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOMIDGNOENH* Clone()
		{
			return ((::GOMIDGNOENH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDGNOENH_CLONE_OFFSET))(this);
		}

		::System::UInt32 KCHHBGBJDGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDGNOENH_KCHHBGBJDGL_OFFSET))(this);
		}

		::System::Void OHLGNCALLME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOMIDGNOENH_OHLGNCALLME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOMIDGNOENH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOMIDGNOENH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOMIDGNOENH*))((::PBYTE)hIl2Cpp + GOMIDGNOENH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDGNOENH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDGNOENH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOMIDGNOENH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIDGNOENH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOMIDGNOENH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOMIDGNOENH*))((::PBYTE)hIl2Cpp + GOMIDGNOENH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOMIDGNOENH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
