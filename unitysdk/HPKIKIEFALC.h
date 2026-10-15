#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPKIKIEFALC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPKIKIEFALC_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E5FBF40)
#define HPKIKIEFALC_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E5FBF50)
#define HPKIKIEFALC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5FC2B0)
#define HPKIKIEFALC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FC4D0)
#define HPKIKIEFALC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5FBF00)
#define HPKIKIEFALC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5FBED0)
#define HPKIKIEFALC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FBEC0)
#define HPKIKIEFALC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5FC030)
#define HPKIKIEFALC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5FBF60)
#define HPKIKIEFALC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5FC1A0)
#define HPKIKIEFALC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5FBE80)
#define HPKIKIEFALC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5FC370)
#define HPKIKIEFALC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5FC340)
#define HPKIKIEFALC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5FBEB0)
#define HPKIKIEFALC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5FC1D0)
#define HPKIKIEFALC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5FC230)

	class HPKIKIEFALC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HPKIKIEFALC")->GetStaticField(0x51FD0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPKIKIEFALC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKIKIEFALC*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPKIKIEFALC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HPKIKIEFALC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPKIKIEFALC* Clone()
		{
			return ((::HPKIKIEFALC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPKIKIEFALC_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPKIKIEFALC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKIKIEFALC*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKIKIEFALC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPKIKIEFALC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKIKIEFALC*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPKIKIEFALC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
