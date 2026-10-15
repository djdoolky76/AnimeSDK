#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHPMDJFALNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHPMDJFALNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE3A300)
#define OHPMDJFALNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE3A520)
#define OHPMDJFALNH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE39EF0)
#define OHPMDJFALNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE39EC0)
#define OHPMDJFALNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE39EB0)
#define OHPMDJFALNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE3A080)
#define OHPMDJFALNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE39F80)
#define OHPMDJFALNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE3A1F0)
#define OHPMDJFALNH_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1DE39F70)
#define OHPMDJFALNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE39E40)
#define OHPMDJFALNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE3A3C0)
#define OHPMDJFALNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE3A390)
#define OHPMDJFALNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE39EA0)
#define OHPMDJFALNH_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1DE39F60)
#define OHPMDJFALNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE3A220)
#define OHPMDJFALNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE3A280)

inline static constexpr unsigned int OHPMDJFALNH_TypeDefinitionIndex = 31690;

	class OHPMDJFALNH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LAPNIOGIGPL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OHPMDJFALNH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHPMDJFALNH*>**)UnitySDK::FromName("", "OHPMDJFALNH")->GetStaticField(0x1A170);
		}

		// static const ::System::Object ODHBDFKGPJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMDJFALNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHPMDJFALNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHPMDJFALNH*))((::PBYTE)hIl2Cpp + OHPMDJFALNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHPMDJFALNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHPMDJFALNH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHPMDJFALNH*>*(*)())((::PBYTE)hIl2Cpp + OHPMDJFALNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMDJFALNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHPMDJFALNH* Clone()
		{
			return ((::OHPMDJFALNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMDJFALNH_CLONE_OFFSET))(this);
		}

		::System::UInt32 PKFKJCPLLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMDJFALNH_PKFKJCPLLOM_OFFSET))(this);
		}

		::System::Void JJDKOEONGHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHPMDJFALNH_JJDKOEONGHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHPMDJFALNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHPMDJFALNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHPMDJFALNH*))((::PBYTE)hIl2Cpp + OHPMDJFALNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMDJFALNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMDJFALNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHPMDJFALNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMDJFALNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHPMDJFALNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHPMDJFALNH*))((::PBYTE)hIl2Cpp + OHPMDJFALNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHPMDJFALNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
