#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBFGKBNAKNH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBFGKBNAKNH_AMEKLCPENBN_OFFSET UNITYSDK_OFFSET(0x202AF3F0)
#define DBFGKBNAKNH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202AF790)
#define DBFGKBNAKNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x202AF9B0)
#define DBFGKBNAKNH_CLONE_OFFSET UNITYSDK_OFFSET(0x202AF380)
#define DBFGKBNAKNH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202AF350)
#define DBFGKBNAKNH_CTOR_OFFSET UNITYSDK_OFFSET(0x202AF340)
#define DBFGKBNAKNH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202AF510)
#define DBFGKBNAKNH_EQUALS_OFFSET UNITYSDK_OFFSET(0x202AF410)
#define DBFGKBNAKNH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202AF680)
#define DBFGKBNAKNH_GMJIJMKMEAF_OFFSET UNITYSDK_OFFSET(0x202AF400)
#define DBFGKBNAKNH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202AF2D0)
#define DBFGKBNAKNH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202AF850)
#define DBFGKBNAKNH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202AF820)
#define DBFGKBNAKNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202AF330)
#define DBFGKBNAKNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202AF6B0)
#define DBFGKBNAKNH_WRITETO_OFFSET UNITYSDK_OFFSET(0x202AF710)

inline static constexpr unsigned int DBFGKBNAKNH_TypeDefinitionIndex = 29959;

	class DBFGKBNAKNH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BPGAKBFBLON; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DBFGKBNAKNH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBFGKBNAKNH*>**)UnitySDK::FromName("", "DBFGKBNAKNH")->GetStaticField(0x1CB70);
		}

		// static const ::System::Object GPEIDPKBLEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBFGKBNAKNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBFGKBNAKNH*))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBFGKBNAKNH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBFGKBNAKNH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBFGKBNAKNH*>*(*)())((::PBYTE)hIl2Cpp + DBFGKBNAKNH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBFGKBNAKNH* Clone()
		{
			return ((::DBFGKBNAKNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_CLONE_OFFSET))(this);
		}

		::System::UInt32 AMEKLCPENBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_AMEKLCPENBN_OFFSET))(this);
		}

		::System::Void GMJIJMKMEAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_GMJIJMKMEAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBFGKBNAKNH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBFGKBNAKNH*))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBFGKBNAKNH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBFGKBNAKNH*))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBFGKBNAKNH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
