#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHKNPBJDFIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHKNPBJDFIC_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1EA33F10)
#define MHKNPBJDFIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA342A0)
#define MHKNPBJDFIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA344C0)
#define MHKNPBJDFIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA33E90)
#define MHKNPBJDFIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA33E60)
#define MHKNPBJDFIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA33E50)
#define MHKNPBJDFIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA34020)
#define MHKNPBJDFIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA33F20)
#define MHKNPBJDFIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA34190)
#define MHKNPBJDFIC_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1EA33F00)
#define MHKNPBJDFIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA33DE0)
#define MHKNPBJDFIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA34360)
#define MHKNPBJDFIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA34330)
#define MHKNPBJDFIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA33E40)
#define MHKNPBJDFIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA341C0)
#define MHKNPBJDFIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA34220)

inline static constexpr unsigned int MHKNPBJDFIC_TypeDefinitionIndex = 29586;

	class MHKNPBJDFIC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MHKNPBJDFIC")->GetStaticField(0x51F20);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHKNPBJDFIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHKNPBJDFIC*))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHKNPBJDFIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MHKNPBJDFIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHKNPBJDFIC* Clone()
		{
			return ((::MHKNPBJDFIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHKNPBJDFIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHKNPBJDFIC*))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHKNPBJDFIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHKNPBJDFIC*))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHKNPBJDFIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
