#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIEACFOEMCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIEACFOEMCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5910B0)
#define HIEACFOEMCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5912D0)
#define HIEACFOEMCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E590CA0)
#define HIEACFOEMCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E590C70)
#define HIEACFOEMCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E590C60)
#define HIEACFOEMCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E590E30)
#define HIEACFOEMCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E590D30)
#define HIEACFOEMCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E590FA0)
#define HIEACFOEMCE_GFMIFIOCJPA_OFFSET UNITYSDK_OFFSET(0x1E590D20)
#define HIEACFOEMCE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E590BF0)
#define HIEACFOEMCE_JNIBGDKFBPA_OFFSET UNITYSDK_OFFSET(0x1E590D10)
#define HIEACFOEMCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E591170)
#define HIEACFOEMCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E591140)
#define HIEACFOEMCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E590C50)
#define HIEACFOEMCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E590FD0)
#define HIEACFOEMCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E591030)

	class HIEACFOEMCE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DGMMJHNEMKG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HIEACFOEMCE")->GetStaticField(0x3BE10);
		}

		// static const ::System::Object GAFLLLGKKLP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIEACFOEMCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEACFOEMCE*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIEACFOEMCE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HIEACFOEMCE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIEACFOEMCE* Clone()
		{
			return ((::HIEACFOEMCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_CLONE_OFFSET))(this);
		}

		::System::UInt32 JNIBGDKFBPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_JNIBGDKFBPA_OFFSET))(this);
		}

		::System::Void GFMIFIOCJPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIEACFOEMCE_GFMIFIOCJPA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIEACFOEMCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIEACFOEMCE*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIEACFOEMCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEACFOEMCE*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
