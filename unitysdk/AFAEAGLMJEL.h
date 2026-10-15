#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFAEAGLMJEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFAEAGLMJEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E10FFA0)
#define AFAEAGLMJEL_CCCMLFMHHGI_OFFSET UNITYSDK_OFFSET(0x1E10FC30)
#define AFAEAGLMJEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1101C0)
#define AFAEAGLMJEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E10FBF0)
#define AFAEAGLMJEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E10FBC0)
#define AFAEAGLMJEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10FBB0)
#define AFAEAGLMJEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E10FD20)
#define AFAEAGLMJEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E10FC50)
#define AFAEAGLMJEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E10FE90)
#define AFAEAGLMJEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E10FB70)
#define AFAEAGLMJEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E110060)
#define AFAEAGLMJEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E110030)
#define AFAEAGLMJEL_MLDJFAEOJBM_OFFSET UNITYSDK_OFFSET(0x1E10FC40)
#define AFAEAGLMJEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E10FBA0)
#define AFAEAGLMJEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E10FEC0)
#define AFAEAGLMJEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E10FF20)

	class AFAEAGLMJEL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJOAMKICMLG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AFAEAGLMJEL")->GetStaticField(0x2D8F0);
		}

		// static const ::System::Object FDGNFAPFFEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFAEAGLMJEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFAEAGLMJEL*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AFAEAGLMJEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFAEAGLMJEL* Clone()
		{
			return ((::AFAEAGLMJEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CLONE_OFFSET))(this);
		}

		::System::UInt32 CCCMLFMHHGI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CCCMLFMHHGI_OFFSET))(this);
		}

		::System::Void MLDJFAEOJBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_MLDJFAEOJBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFAEAGLMJEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFAEAGLMJEL*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFAEAGLMJEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFAEAGLMJEL*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
