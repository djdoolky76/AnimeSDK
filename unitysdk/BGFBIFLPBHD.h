#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFBIFLPBHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGFBIFLPBHD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA74F70)
#define BGFBIFLPBHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA75190)
#define BGFBIFLPBHD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA74B60)
#define BGFBIFLPBHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA74B30)
#define BGFBIFLPBHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA74B20)
#define BGFBIFLPBHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA74CF0)
#define BGFBIFLPBHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA74BF0)
#define BGFBIFLPBHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA74E60)
#define BGFBIFLPBHD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA74AB0)
#define BGFBIFLPBHD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA75030)
#define BGFBIFLPBHD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA75000)
#define BGFBIFLPBHD_MMMGPIHKCPP_OFFSET UNITYSDK_OFFSET(0x1EA74BD0)
#define BGFBIFLPBHD_OMHBMDBPMDJ_OFFSET UNITYSDK_OFFSET(0x1EA74BE0)
#define BGFBIFLPBHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA74B10)
#define BGFBIFLPBHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA74E90)
#define BGFBIFLPBHD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA74EF0)

	class BGFBIFLPBHD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KNDADMADOOH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BGFBIFLPBHD")->GetStaticField(0x42BA0);
		}

		// static const ::System::Object EEOCIAMHNPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGFBIFLPBHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFBIFLPBHD*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGFBIFLPBHD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BGFBIFLPBHD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGFBIFLPBHD* Clone()
		{
			return ((::BGFBIFLPBHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_CLONE_OFFSET))(this);
		}

		::System::UInt32 MMMGPIHKCPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_MMMGPIHKCPP_OFFSET))(this);
		}

		::System::Void OMHBMDBPMDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_OMHBMDBPMDJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGFBIFLPBHD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGFBIFLPBHD*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGFBIFLPBHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGFBIFLPBHD*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGFBIFLPBHD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
